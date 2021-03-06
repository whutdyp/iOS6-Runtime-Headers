/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper  {
    float mStartAngle;
    float mStopAngle;
    BOOL mDrawArrows;
    unsigned int mSegmentIndex;
    unsigned int mSegmentCount;
}


- (id)_arrowFillWithState:(id)arg1;
- (void)setSegmentCount:(unsigned int)arg1;
- (void)setSegmentIndex:(unsigned int)arg1;
- (void)setStopAngle:(float)arg1;
- (id)transformPresentationName;
- (void)setDrawArrows:(BOOL)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setStartAngle:(float)arg1;

@end
