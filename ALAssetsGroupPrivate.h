/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsFilter, PLPhotoLibrary, ALAssetsLibrary, NSObject<PLAssetContainer>, NSMutableDictionary;

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset> {
    BOOL _loadedAssets;
    ALAssetsLibrary *_library;
    struct NSObject { Class x1; } *_album;
    ALAssetsFilter *_assetsFilter;
    unsigned int _groupType;
    BOOL _isValid;
    NSMutableDictionary *_propertyValues;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain) ALAssetsFilter * assetsFilter;
@property unsigned int groupType;
@property BOOL isValid;
@property ALAssetsLibrary * library;
@property(retain) NSMutableDictionary * propertyValues;
@property(retain) NSObject<PLAssetContainer> * album;
@property(retain) PLPhotoLibrary * _photoLibrary;


- (id)library;
- (void)setLibrary:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)album;
- (void)_performBlockAndWait:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)setPropertyValues:(id)arg1;
- (id)propertyValues;
- (id)assetsFilter;
- (void)resetAssets;
- (void)set_photoLibrary:(id)arg1;
- (void)libraryWillDisappear;
- (id)_photoLibrary;
- (void)libraryDidChange;
- (void)setAssetsFilter:(id)arg1;
- (void)populateAssets;
- (unsigned int)groupType;
- (void)setGroupType:(unsigned int)arg1;
- (id)initWithAlbum:(struct NSObject { Class x1; }*)arg1 library:(id)arg2;
- (void)dealloc;
- (BOOL)isValid;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;

@end