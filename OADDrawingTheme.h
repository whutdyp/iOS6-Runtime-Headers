/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDefaultProperties, OADColorMap, OADFontScheme, OADColorScheme, <OADColorPalette>, OADStyleMatrix;

@interface OADDrawingTheme : NSObject  {
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
    OADStyleMatrix *mStyleMatrix;
    OADFontScheme *mFontScheme;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    <OADColorPalette> *mColorPalette;
}

@property(readonly) OADDefaultProperties * shapeDefaults;
@property(readonly) OADDefaultProperties * lineDefaults;
@property(readonly) OADDefaultProperties * textDefaults;
@property(readonly) OADStyleMatrix * styleMatrix;
@property(readonly) OADFontScheme * fontScheme;
@property(readonly) OADColorScheme * colorScheme;
@property(readonly) OADColorMap * colorMap;
@property(retain) <OADColorPalette> * colorPalette;


- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;
- (id)textDefaults;
- (id)lineDefaults;
- (id)shapeDefaults;
- (id)colorPalette;
- (void)setColorPalette:(id)arg1;
- (id)fontScheme;
- (id)styleMatrix;
- (id)colorScheme;
- (id)colorMap;
- (void)dealloc;

@end