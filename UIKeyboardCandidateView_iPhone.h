/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateGridHeader;

@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    UIKeyboardCandidateGridHeader *_header;
}


- (void)dealloc;
- (void)_setupKeyboardInteraction;
- (BOOL)_shouldUseFullMetrics;
- (BOOL)_shouldShowHideKeyboard;
- (void)_handleKeyboardShowOrHide:(id)arg1;
- (void)handleTap;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutSubviews;

@end
