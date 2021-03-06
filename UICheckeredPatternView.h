/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UICheckeredPatternView : UIView  {
    UIColor *m_patternColor;
    UIColor *m_checkerColor;
    float m_scale;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setCheckerColor:(id)arg1;
- (id)checkerColor;
- (void)updatePatternColor;
- (BOOL)_canDrawContent;
- (void)didMoveToWindow;

@end
