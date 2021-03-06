//
//  Location+CoreDataClass.swift
//  GeoKeeper
//
//  Created by Jingfu Ju on 3/5/17.
//  Copyright © 2017 204. All rights reserved.
//

import Foundation
import CoreData
import MapKit

class Location: NSManagedObject, MKAnnotation {
    var coordinate: CLLocationCoordinate2D {
        return CLLocationCoordinate2DMake(latitude, longitude)
    }
    
    var title: String? {
        if (name?.isEmpty)! {
            return "(No Name)"
        } else {
            return name!
        }
    }
    
    var subtitle: String? {
        return category
    }
    
    // method for locationPhotoID
    var hasPhoto: Bool {
        return locationPhotoID != nil
    }
    
    // method for locationPhotoID
    var photoImage: UIImage? {
        return UIImage(contentsOfFile: photoURL.path)
    }
    
    // method for locationPhotoID
    var photoURL: URL {
        assert(locationPhotoID != nil, "No location photo ID set")
        let filename = "Photo-\(locationPhotoID!.intValue).jpg"
        return applicationDocumentsDirectory.appendingPathComponent(filename)
    }
    
    // mathod for locationPhotoID
    class func nextLocationPhotoID() -> Int {
        let userDefaults = UserDefaults.standard
        let currentID = userDefaults.integer(forKey: "locationPhotoID")
        userDefaults.set(currentID + 1, forKey: "locationPhotoID")
        userDefaults.synchronize()
        return currentID
    }
    
    // mathod for locationPhotoID
    func removePhotoFile() {
        if hasPhoto {
            do {
                try FileManager.default.removeItem(at: photoURL)
            } catch {
                print("Error removing file: \(error)")
            }
        }
    }
    
    var getAddress: String {
        var add = ""
        
        if let s = placemark?.subThoroughfare {
            add += s
        }
        
        if let s = placemark?.thoroughfare {
            add += s
        }
        
        if let s = placemark?.locality {
            add += s
        }
        
        if let s = placemark?.administrativeArea {
            add += s
        }
        
        if let s = placemark?.postalCode {
            add += s
        }
        return add
    }
    
    // method for photoID
    func photosURL(photoIndex: NSNumber) -> URL {
        let filename = "Photo-\(getAddress)-\(photoIndex.intValue).jpg"
        return applicationDocumentsDirectory.appendingPathComponent(filename)
    }
 
    // method for photoID
    func nextPhotoID() -> Int {
        let userDefaults = UserDefaults.standard
        let currentID = userDefaults.integer(forKey: "\(getAddress)")
        userDefaults.set(currentID + 1, forKey:"\(getAddress)")
        userDefaults.synchronize()
        return currentID
    }
    
    // mathod for photoID
    func removePhotoFile(photoIndex: NSNumber) {
        if (photoID?.contains(photoIndex))! {
            do {
                try FileManager.default.removeItem(at: photosURL(photoIndex: photoIndex))
            } catch {
                print("Error removing file: \(error)")
            }
        }
    }

}



