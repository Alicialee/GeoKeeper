//
//  LocationDetailEditViewController.swift
//  GeoKeeper
//
//  Created by apple on 24/3/2017.
//  Copyright © 2017 204. All rights reserved.
//

import UIKit
import CoreData
import CoreLocation
import Foundation

protocol LocationDetailEditViewControllerDelegate {
    func passLocation(location: MyLocation)
}

class LocationDetailEditViewController: UIViewController, UITextFieldDelegate, UITextViewDelegate {
    
    @IBOutlet weak var nameTextField: UITextField!
    @IBOutlet weak var categoryPicker: UIButton!
    @IBOutlet weak var portraitImageView: UIImageView!
    @IBOutlet weak var remarkTextView: UITextView!
    @IBOutlet weak var nBar: UINavigationBar!
    @IBOutlet weak var photoCollection: UICollectionView!
    @IBOutlet weak var doneButton: UIBarButtonItem!
    
    var managedObjectContext: NSManagedObjectContext!
    var locationToSave: Location?
    var locationToEdit = MyLocation()
    var coordinate = CLLocationCoordinate2D(latitude: 0, longitude: 0)
    
    var delegate: LocationDetailEditViewControllerDelegate? = nil
    
    let baseColor = UIColor(red: 71/255.0, green: 117/255.0, blue: 179/255.0, alpha: 1.0)
    
    var collectionFrame = CGRect.zero
    var keyHeight = CGFloat()
    fileprivate let reuseIdentifier = "PhotoCell"
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        modalPresentationStyle = .custom
        transitioningDelegate = self
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "CategoryChoose" {
            let navigationController = segue.destination as! MyNavigationController
            let controller = navigationController.topViewController as! CategoryPickerTableViewController
            controller.managedObjectContext = managedObjectContext
            
            controller.categoryChosen = (categoryPicker.titleLabel?.text!)!
            controller.delegate = self
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = UIColor.clear
        
        nBar.topItem?.title = "Edit Location"
        nameTextField.text = locationToEdit.locationName
        print(locationToEdit.locationName," is ****************")
        categoryPicker.setTitle(locationToEdit.locationCategory, for: .normal)
        portraitImageView.image = UIImage(named: locationToEdit.locationPhotoID)
        remarkTextView.text = locationToEdit.locationDescription
        
        let tap = UITapGestureRecognizer(target: self, action: #selector(hideKeyboard(tapGesure:)))
        tap.cancelsTouchesInView = false
        self.view.addGestureRecognizer(tap)
        
        remarkTextView.delegate = self
        
        setPara()
        initCollectionView()
                
    }
    
    func setPara() {
        // set portraitImageView
        portraitImageView.layer.borderWidth = 5
        portraitImageView.layer.borderColor = UIColor.white.cgColor
        
        // set nameTextField
        nameTextField.font = UIFont(name: "TrebuchetMS", size: 16)
        nameTextField.delegate = self
        nameTextField.clearButtonMode = UITextFieldViewMode.whileEditing
        
        // set categoryPicker button
        categoryPicker.titleLabel!.font = UIFont(name: "TrebuchetMS", size: 14)
        categoryPicker.setTitleColor(UIColor.gray, for: .normal)
        categoryPicker.layer.cornerRadius = 4
        
        // set navigationBar
        nBar.barTintColor = baseColor
        nBar.titleTextAttributes = [NSFontAttributeName: UIFont(name: "TrebuchetMS-Bold", size: 17)!, NSForegroundColorAttributeName: UIColor.white]
        nBar.topItem?.rightBarButtonItem?.setTitleTextAttributes([NSFontAttributeName: UIFont(name: "TrebuchetMS", size: 16)!, NSForegroundColorAttributeName: UIColor.white], for: .normal)
        nBar.topItem?.leftBarButtonItem?.setTitleTextAttributes([NSFontAttributeName: UIFont(name: "TrebuchetMS", size: 16)!, NSForegroundColorAttributeName: UIColor.white], for: .normal)
    }
    
    func initCollectionView() {
        photoCollection.frame = collectionFrame
        photoCollection.backgroundColor = UIColor.lightGray
        photoCollection.register(PhotoCell.self, forCellWithReuseIdentifier: reuseIdentifier)
        let layout = UICollectionViewFlowLayout()
        photoCollection.collectionViewLayout = layout
        layout.sectionInset = UIEdgeInsets(top: 8, left: 8, bottom: 8, right: 8)
        
        let itemHeight: CGFloat = photoCollection.frame.height - 8 * 2
        layout.itemSize = CGSize(width: itemHeight, height: itemHeight)
        layout.minimumLineSpacing = 8
        
        layout.scrollDirection = .horizontal
        photoCollection.showsHorizontalScrollIndicator = false
    }

    // textField delegate
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        textField.resignFirstResponder()
        return true
    }
    
    func textField(_ textField: UITextField, shouldChangeCharactersIn range: NSRange, replacementString string: String) ->Bool {
        let oldText = textField.text! as NSString
        let newText = oldText.replacingCharacters(in: range, with: string) as NSString
        
        if newText.length > 0 {
            doneButton.isEnabled = true
            doneButton.setTitleTextAttributes([NSFontAttributeName: UIFont(name: "TrebuchetMS", size: 16)!, NSForegroundColorAttributeName: UIColor.white], for: .normal)
        } else {
            doneButton.isEnabled = false
            doneButton.setTitleTextAttributes([NSFontAttributeName: UIFont(name: "TrebuchetMS", size: 16)!, NSForegroundColorAttributeName: UIColor.lightGray], for: .normal)
        }
        return true
    }
    
    func updateContent(location: Location) {
        location.name = nameTextField.text
        location.category = (categoryPicker.titleLabel?.text)!
        location.locationDescription = remarkTextView.text
        
        locationToEdit.locationName = nameTextField.text!
        locationToEdit.locationCategory = (categoryPicker.titleLabel?.text)!
        locationToEdit.locationDescription = remarkTextView.text
    }
    
    // textView related
    func hideKeyboard(tapGesure: UITapGestureRecognizer) {
        self.remarkTextView.resignFirstResponder()
    }
    
    func textViewShouldBeginEditing(_ textView: UITextView) -> Bool {
        let centerDefault = NotificationCenter.default
        centerDefault.addObserver(self, selector: #selector(keyboardWillShow), name: NSNotification.Name.UIKeyboardWillShow, object: nil)
        return true
    }
    
    func keyboardWillShow(aNotification: NSNotification) {
        let userinfo: NSDictionary = aNotification.userInfo! as NSDictionary
        let nsValue = userinfo.object(forKey: UIKeyboardFrameEndUserInfoKey)
        let keyboardRec = (nsValue as AnyObject).cgRectValue
        let height = keyboardRec?.size.height
        self.keyHeight = height!
        UIView.animate(withDuration: 0.5, animations: {
            var frame = self.view.frame
            frame.origin.y = -self.keyHeight
            self.view.frame = frame
        }, completion: nil)
    }
    
    func textViewShouldEndEditing(_ textView: UITextView) -> Bool {
        UIView.animate(withDuration: 0.5, animations: {
            var frame = self.view.frame
            frame.origin.y = 0
            self.view.frame = frame
        }, completion: nil)
        let centerDefault = NotificationCenter.default
        centerDefault.removeObserver(self, name: NSNotification.Name.UIKeyboardWillShow, object: nil)
        return true
    }
    
    @IBAction func done() {
        var locations = [Location]()
        var hasRocord = false
        
        let fetchedRequest = NSFetchRequest<Location>(entityName: "Location")
        fetchedRequest.entity = Location.entity()
        do {
            locations = try managedObjectContext.fetch(fetchedRequest)
        } catch {
            fatalCoreDataError(error)
        }
        
        for locationRecord in locations {
            if let placemarkRecord = locationRecord.placemark {
                if let placemarkEdit = locationToEdit.placemark {
                    if string(from: placemarkEdit) == string(from: placemarkRecord) {
                        updateContent(location: locationRecord)
                        hasRocord = true
                    }
                }
            }
        }
        
        if !hasRocord {
            let location: Location = NSEntityDescription.insertNewObject(forEntityName: "Location", into: managedObjectContext) as! Location
            locationToEdit.locationName = nameTextField.text!
            location.name = locationToEdit.locationName
            print(locationToEdit.locationName, "location name going to save is")
            location.category = locationToEdit.locationCategory
            location.date = locationToEdit.date!
            location.latitude = locationToEdit.latitude
            location.longitude = locationToEdit.longitude
            location.placemark = locationToEdit.placemark
            location.locationPhotoID = locationToEdit.locationPhotoID
            location.punch = locationToEdit.punch
            location.locationDescription = locationToEdit.locationDescription
        }
        
        do {
            try managedObjectContext.save()
        } catch {
            fatalError("Failure to save context: \(error)")
        }
        delegate?.passLocation(location: locationToEdit)
        dismiss(animated: true, completion: nil)
    }
                
    func string(from placemark: CLPlacemark) -> String {
        var line1 = ""
        
        if let s = placemark.subThoroughfare {
            line1 += s + " "
        }
                    
        if let s = placemark.thoroughfare {
            line1 += s
        }
                    
        var line2 = ""
                    
        if let s = placemark.locality {
            line2 += s + " "
        }
        if let s = placemark.administrativeArea {
            line2 += s + " "
        }
        if let s = placemark.postalCode {
            line2 += s
        }
                    
        return line1 + "\n" + line2
    }
    
    @IBAction func cancel() {
        dismiss(animated: true, completion: nil)
    }
    
    @IBAction func choosePortrait() {
        
    }
    
    @IBAction func loadCategoryPicker() {
        
    }
    
    @IBAction func editPhoto() {
        
    }
    
}

extension LocationDetailEditViewController: UIViewControllerTransitioningDelegate {
    func presentationController(forPresented presented: UIViewController,
                                presenting: UIViewController?,
                                source: UIViewController) -> UIPresentationController? {
        return DimmingPresentationController(presentedViewController: presented, presenting: presenting)
    }
    
    func animationController(forPresented presented: UIViewController,
                             presenting: UIViewController, source: UIViewController) -> UIViewControllerAnimatedTransitioning? {
        return FadeInAnimationController()
    }
    
    func animationController(forDismissed dismissed: UIViewController) -> UIViewControllerAnimatedTransitioning? {
        return FadeOutAnimationController()
    }
}

extension LocationDetailEditViewController: UINavigationBarDelegate {
    func position(for bar: UIBarPositioning) -> UIBarPosition {
        return .topAttached
    }
}

extension LocationDetailEditViewController: UICollectionViewDataSource, UICollectionViewDelegate {
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 1
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return 5
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: reuseIdentifier, for: indexPath) as! PhotoCell
        cell.awakeFromNib()
        cell.delegate = self
        cell.photoImageView.image = UIImage(named: locationToEdit.locationPhotoID)
        return cell
    }
}

extension LocationDetailEditViewController: PhotoCellDelegate {
    func changeColorOfButton(forCell: PhotoCell) {
        let image = UIImage(named: "closeButton")
        forCell.deleteButton.setImage(image, for: .highlighted)
    }
}

extension LocationDetailEditViewController: CategoryPickerTableViewControllerDelegate {
    func passCategory(categoryName: String) {
        categoryPicker.setTitle(categoryName, for: .normal)
        locationToEdit.locationCategory = categoryName
    }
}

