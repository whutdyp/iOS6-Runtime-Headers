/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADShapeGeometry;

@interface OADShape : OADGraphic  {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}


- (void)createPresetGeometryWithShapeType:(int)arg1;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (void)setTextBody:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)textBody;
- (id)shapeProperties;
- (id)init;
- (void)dealloc;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (int)type;

@end