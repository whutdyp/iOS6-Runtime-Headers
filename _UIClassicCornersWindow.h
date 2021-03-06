/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIView;

@interface _UIClassicCornersWindow : UIStatusBarAdornmentWindow  {
    int _visibleCorners;
    UIView *_contentView;
    unsigned int _hiddenStatusBarStyles;
    NSArray *_cornerViews;
    BOOL _hidesWithStatusBar;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cornerFrame;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cornerFrame;
@property(readonly) int visibleCorners;
@property BOOL hidesWithStatusBar;


- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cornerFrame;
- (void)setHidesWithStatusBar:(BOOL)arg1;
- (BOOL)hidesWithStatusBar;
- (int)visibleCorners;
- (void)_updateForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 withStatusBarStyle:(int)arg3 statusBarShouldHide:(BOOL)arg4;
- (void)_setCorners:(unsigned int)arg1 visible:(BOOL)arg2;
- (void)setHidesWithStatusBarStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andVisibleCorners:(int)arg2;
- (void)setCornerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_hidesWithStatusBarStyle:(int)arg1;
- (id)_cornerViewWithImage:(id)arg1 forCorner:(int)arg2;
- (void)layoutSubviews;

@end
