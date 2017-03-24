// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreData;
@import Foundation;
@import CoreGraphics;
@import CoreLocation;
@import MapKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class NSManagedObjectContext;
@class UIApplication;
@class NSPersistentContainer;
@class UIViewController;

SWIFT_CLASS("_TtC9GeoKeeper11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
@property (nonatomic, strong) NSManagedObjectContext * _Nonnull managedObjectContext;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)checkFirstLaunch;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
@property (nonatomic, strong) NSPersistentContainer * _Nonnull persistentContainer;
- (void)listenForFatalCoreDataNotifications;
- (UIViewController * _Nonnull)viewControllerForShowingAlert;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBlockOperation;
@class UIColor;
@class UIStoryboardSegue;
@protocol NSFetchedResultsSectionInfo;
@class UICollectionViewCell;
@class UICollectionView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC9GeoKeeper24CategoriesViewController")
@interface CategoriesViewController : UIViewController <UIScrollViewDelegate, UICollectionViewDelegate, NSFetchedResultsControllerDelegate, UICollectionViewDataSource>
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic, copy) NSArray<NSBlockOperation *> * _Nonnull blockOperations;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor1;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor2;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor3;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor4;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor5;
@property (nonatomic, readonly, strong) UIColor * _Nonnull red;
@property (nonatomic, readonly, strong) UIColor * _Nonnull blue;
@property (nonatomic, readonly, strong) UIColor * _Nonnull purple;
@property (nonatomic, readonly, strong) UIColor * _Nonnull gray;
@property (nonatomic, readonly, strong) UIColor * _Nonnull yellow;
@property (nonatomic, readonly, strong) UIColor * _Nonnull orange;
@property (nonatomic, readonly, strong) UIColor * _Nonnull black;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull icons;
@property (nonatomic, weak) IBOutlet UICollectionView * _Null_unspecified collectionView;
// 'fetchedResultsController' below
- (void)viewDidLoad;
- (void)performFetch;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (void)controller:(NSFetchedResultsController<id <NSFetchRequestResult>> * _Nonnull)controller didChangeObject:(id _Nonnull)anObject atIndexPath:(NSIndexPath * _Nullable)indexPath forChangeType:(NSFetchedResultsChangeType)type newIndexPath:(NSIndexPath * _Nullable)newIndexPath;
- (void)controller:(NSFetchedResultsController<id <NSFetchRequestResult>> * _Nonnull)controller didChangeSection:(id <NSFetchedResultsSectionInfo> _Nonnull)sectionInfo atIndex:(NSInteger)sectionIndex forChangeType:(NSFetchedResultsChangeType)type;
- (void)controllerDidChangeContent:(NSFetchedResultsController<id <NSFetchRequestResult>> * _Nonnull)controller;
- (void)collectionColor:(NSIndexPath * _Nonnull)indexPath :(UICollectionViewCell * _Nonnull)cell;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface CategoriesViewController (SWIFT_EXTENSION(GeoKeeper))
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UICollectionViewLayout;

@interface CategoriesViewController (SWIFT_EXTENSION(GeoKeeper)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section;
@end

@class NSEntityDescription;

SWIFT_CLASS("_TtC9GeoKeeper8Category")
@interface Category : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Category (SWIFT_EXTENSION(GeoKeeper))
@property (nonatomic, copy) NSString * _Nullable category;
@property (nonatomic, copy) NSString * _Nullable color;
@property (nonatomic, copy) NSString * _Nullable iconName;
@end

@class UITextField;
@class UIBarButtonItem;

SWIFT_CLASS("_TtC9GeoKeeper25CategoryAddViewController")
@interface CategoryAddViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, copy) NSString * _Nonnull selectedCategoryName;
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic, copy) NSString * _Nonnull color;
@property (nonatomic, copy) NSString * _Nonnull icon;
@property (nonatomic) NSInteger temp;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified doneBarButton;
@property (nonatomic, strong) IBOutlet UICollectionView * _Nullable colorCollection;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified textField;
- (void)viewDidLoad;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull icons;
- (IBAction)cancel;
- (IBAction)done;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string;
- (void)saveCategoryWithName:(NSString * _Nonnull)name;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface CategoryAddViewController (SWIFT_EXTENSION(GeoKeeper)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section;
@end


@interface CategoryAddViewController (SWIFT_EXTENSION(GeoKeeper)) <UICollectionViewDelegate, UIScrollViewDelegate, UICollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC9GeoKeeper12CategoryCell")
@interface CategoryCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified categoryImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;

SWIFT_CLASS("_TtC9GeoKeeper28CategoryPickerViewController")
@interface CategoryPickerViewController : UITableViewController
@property (nonatomic, copy) NSString * _Nonnull selectedCategoryName;
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic, copy) NSIndexPath * _Nonnull selectedIndexPath;
@property (nonatomic, copy) NSArray<Category *> * _Nonnull categories;
@property (nonatomic, readonly, strong) UIColor * _Nonnull red;
@property (nonatomic, readonly, strong) UIColor * _Nonnull blue;
@property (nonatomic, readonly, strong) UIColor * _Nonnull purple;
@property (nonatomic, readonly, strong) UIColor * _Nonnull gray;
@property (nonatomic, readonly, strong) UIColor * _Nonnull yellow;
@property (nonatomic, readonly, strong) UIColor * _Nonnull orange;
@property (nonatomic, readonly, strong) UIColor * _Nonnull black;
- (void)viewDidLoad;
- (IBAction)getBack;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class CLLocation;
@class CLGeocoder;
@class CLPlacemark;
@class NSTimer;
@class UIImage;
@class UIButton;
@class UINavigationBar;
@class MKMapView;

SWIFT_CLASS("_TtC9GeoKeeper29CurrentLocationViewController")
@interface CurrentLocationViewController : UIViewController <CLLocationManagerDelegate>
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic, readonly, strong) CLLocationManager * _Nonnull locationManager;
@property (nonatomic, strong) CLLocation * _Nullable location;
@property (nonatomic) BOOL updatingLocation;
@property (nonatomic) NSError * _Nullable lastLocationError;
@property (nonatomic, readonly, strong) CLGeocoder * _Nonnull geocoder;
@property (nonatomic, strong) CLPlacemark * _Nullable placemark;
@property (nonatomic) BOOL performingReverseGeocoding;
@property (nonatomic) NSError * _Nullable lastGeocodingError;
@property (nonatomic, strong) NSTimer * _Nullable timer;
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull secondColor;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified messageLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified latitudeLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified longitudeLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified addressLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified tagButton;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified cityName;
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified nBar;
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified portrait;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified portraitImage;
- (IBAction)getLocation;
- (IBAction)choosePortrait;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)startLocationManager;
- (void)didTimeOut;
- (void)stopLocationManager;
- (void)updateLabels;
- (NSString * _Nonnull)stringFrom:(CLPlacemark * _Nonnull)placemark;
- (void)showLocationServicesDeniedAlert;
- (void)showWithImage:(UIImage * _Nonnull)image;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIBarPositioning;

@interface CurrentLocationViewController (SWIFT_EXTENSION(GeoKeeper)) <UINavigationBarDelegate, UIBarPositioningDelegate>
- (UIBarPosition)positionForBar:(id <UIBarPositioning> _Nonnull)bar;
@end

@class UIImagePickerController;

@interface CurrentLocationViewController (SWIFT_EXTENSION(GeoKeeper)) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)pickPhoto;
- (void)showPhotoMenu;
- (void)takePhotoWithCamera;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController * _Nonnull)picker;
- (void)choosePhotoFromLibrary;
@end


SWIFT_CLASS("_TtC9GeoKeeper7HudView")
@interface HudView : UIView
@property (nonatomic, copy) NSString * _Nonnull text;
+ (HudView * _Nonnull)hudInViewWithView:(UIView * _Nonnull)view animated:(BOOL)animated;
- (void)drawRect:(CGRect)rect;
- (void)showAnimatedWithAnimated:(BOOL)animated;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9GeoKeeper8Location")
@interface Location : NSManagedObject <MKAnnotation>
@property (nonatomic, readonly) BOOL hasPhoto;
@property (nonatomic, readonly, copy) NSURL * _Nonnull photoURL;
@property (nonatomic, readonly, strong) UIImage * _Nullable photoImage;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable subtitle;
+ (NSInteger)nextPhotoID;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

@interface Location (SWIFT_EXTENSION(GeoKeeper))
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSDate * _Nonnull date;
@property (nonatomic, copy) NSString * _Nonnull locationDescription;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, strong) CLPlacemark * _Nullable placemark;
@property (nonatomic, strong) NSNumber * _Nullable photoID;
@end


SWIFT_CLASS("_TtC9GeoKeeper12LocationCell")
@interface LocationCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified descriptionLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified addressLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified photoImageView;
- (void)configureFor:(Location * _Nonnull)location;
- (UIImage * _Nonnull)thumbnailFor:(Location * _Nonnull)location;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;
@class UITextView;

SWIFT_CLASS("_TtC9GeoKeeper28LocationDetailViewController")
@interface LocationDetailViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified locationNameLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified addressLabel;
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapKit;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified mapAppButton;
@property (nonatomic, weak) IBOutlet UIScrollView * _Null_unspecified scrollView;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified remarkTextView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified temperatureLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified weatherImageView;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull secondColor;
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic, copy) NSString * _Nonnull categoryName;
@property (nonatomic, strong) CLPlacemark * _Nullable placemark;
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) CGFloat kScreenWidth;
@property (nonatomic, readonly) CGFloat kScreenHeight;
@property (nonatomic, readonly) CGFloat edgeW;
@property (nonatomic, readonly) CGFloat edgeH;
@property (nonatomic, readonly) CGFloat scrollViewHeight;
@property (nonatomic, readonly, copy) NSString * _Nonnull apiKey;
@property (nonatomic, strong) Location * _Nullable locationToEdit;
@property (nonatomic, copy) NSString * _Nonnull temp;
@property (nonatomic, copy) NSString * _Nonnull weather;
@property (nonatomic, copy) NSString * _Nonnull w_icon;
- (IBAction)openMapsApp;
- (IBAction)edit;
- (IBAction)getBack;
- (void)viewDidLoad;
- (void)weatherSearch;
- (NSString * _Nullable)performWeatherRequestWith:(NSURL * _Nonnull)url;
- (NSURL * _Nonnull)weatherURLWithLocation:(Location * _Nonnull)location;
- (NSDictionary<NSString *, id> * _Nullable)parseWithJson:(NSString * _Nonnull)json;
- (void)parseWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary;
- (void)showNetworkError;
- (NSString * _Nonnull)stringFromPlacemarkWithPlacemark:(CLPlacemark * _Nonnull)placemark;
- (void)setLocationWithLocation:(Location * _Nonnull)location;
- (void)scrollViewSetup;
- (void)addImageViewsToScrollView;
- (void)setDefaultInfo;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;

SWIFT_CLASS("_TtC9GeoKeeper29LocationDetailsViewController")
@interface LocationDetailsViewController : UITableViewController
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified descriptionTextView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified latitudeLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified longitudeLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified addressLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified dateLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified addPhotoLabel;
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) CLPlacemark * _Nullable placemark;
@property (nonatomic, copy) NSString * _Nonnull categoryName;
@property (nonatomic, copy) NSDate * _Nonnull date;
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, strong) id _Null_unspecified observer;
@property (nonatomic, strong) Location * _Nullable locationToEdit;
@property (nonatomic, copy) NSString * _Nonnull descriptionText;
- (void)showWithImage:(UIImage * _Nonnull)image;
- (void)viewDidLoad;
- (void)hideKeyboardWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer;
- (NSString * _Nonnull)formatDateWithDate:(NSDate * _Nonnull)date;
- (NSString * _Nonnull)stringFromPlacemarkWithPlacemark:(CLPlacemark * _Nonnull)placemark;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (IBAction)done;
- (IBAction)cancel;
- (NSIndexPath * _Nullable)tableView:(UITableView * _Nonnull)tableView willSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface LocationDetailsViewController (SWIFT_EXTENSION(GeoKeeper)) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)pickPhoto;
- (void)takePhotoWithCamera;
- (void)choosePhotoFromLibray;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController * _Nonnull)picker;
- (void)showPhotoMenu;
- (void)listenForBackgroundNotification;
- (IBAction)categoryPickerDidPickCategory:(UIStoryboardSegue * _Nonnull)segue;
@end


SWIFT_CLASS("_TtC9GeoKeeper23LocationsViewController")
@interface LocationsViewController : UITableViewController
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic, copy) NSString * _Nonnull categoryPassed;
@property (nonatomic, copy) NSArray<Location *> * _Nonnull locations;
- (void)viewDidLoad;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9GeoKeeper17MapViewController")
@interface MapViewController : UIViewController <CLLocationManagerDelegate>
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapView;
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified nBar;
@property (nonatomic, readonly, strong) CLLocationManager * _Nonnull locationManager;
@property (nonatomic) double locationLat;
@property (nonatomic) double locationLong;
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor;
@property (nonatomic, strong) NSManagedObjectContext * _Null_unspecified managedObjectContext;
@property (nonatomic, copy) NSArray<Location *> * _Nonnull locations;
- (void)viewDidLoad;
- (void)configureMap;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (IBAction)showUser;
- (IBAction)showLocations;
- (void)updateLocations;
- (MKCoordinateRegion)regionFor:(NSArray<id <MKAnnotation>> * _Nonnull)annotations;
- (void)showLocationDetails:(UIButton * _Nonnull)sender;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class MKAnnotationView;

@interface MapViewController (SWIFT_EXTENSION(GeoKeeper)) <MKMapViewDelegate>
- (MKAnnotationView * _Nullable)mapView:(MKMapView * _Nonnull)mapView viewForAnnotation:(id <MKAnnotation> _Nonnull)annotation;
@end


@interface MapViewController (SWIFT_EXTENSION(GeoKeeper)) <UINavigationBarDelegate, UIBarPositioningDelegate>
- (UIBarPosition)positionForBar:(id <UIBarPositioning> _Nonnull)bar;
@end


SWIFT_CLASS("_TtC9GeoKeeper25MyColorCollectionViewCell")
@interface MyColorCollectionViewCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified colorLabel;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9GeoKeeper20MyIconCollectionCell")
@interface MyIconCollectionCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified iconImage;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9GeoKeeper23MyImagePickerController")
@interface MyImagePickerController : UIImagePickerController
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9GeoKeeper22MyNavigationController")
@interface MyNavigationController : UINavigationController
@property (nonatomic, readonly, strong) UIColor * _Nonnull baseColor;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9GeoKeeper18MyTabBarController")
@interface MyTabBarController : UITabBarController
@property (nonatomic, readonly, strong) UIColor * _Nonnull unselectedColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull selectedColor;
@property (nonatomic, readonly, strong) UIColor * _Nonnull tabBarColor;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
@property (nonatomic, readonly, strong) UIViewController * _Nullable childViewControllerForStatusBarStyle;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9GeoKeeper18RoundedCornersView")
@interface RoundedCornersView : UIView
@property (nonatomic) CGFloat cornerRadius;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@interface CategoriesViewController (SWIFT_EXTENSION(GeoKeeper))
@property (nonatomic, strong) NSFetchedResultsController<Category *> * _Nonnull fetchedResultsController;
@end

#pragma clang diagnostic pop
