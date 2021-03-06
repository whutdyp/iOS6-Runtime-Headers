/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, <OADColorPalette>;

@interface OABReaderState : NSObject  {
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    <OADColorPalette> *mColorPalette;
    NSMutableDictionary *mBlipIdMap;
}


- (id)drawableForBlipId:(int)arg1;
- (struct EshContent { }*)eshContentForId:(int)arg1;
- (void)setDrawable:(id)arg1 forBlipId:(int)arg2;
- (id)drawableForShapeId:(int)arg1;
- (id)colorPalette;
- (void)setEshContent:(struct EshContent { }*)arg1 forId:(int)arg2;
- (void)setDrawable:(id)arg1 forShapeId:(int)arg2;
- (void)setColorPalette:(id)arg1;
- (id)initWithClient:(Class)arg1;
- (id)init;
- (void)dealloc;
- (Class)client;

@end
