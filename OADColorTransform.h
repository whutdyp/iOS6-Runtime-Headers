/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorTransform : NSObject <NSCopying> {
    int mType;
}

+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (id)applyTransforms:(id)arg1 toColor:(id)arg2;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;

- (id)initWithType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;

@end
