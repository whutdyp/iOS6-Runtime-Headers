/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKBHandwritingDelegateProtocol>, UIKBTree;

@interface UIKBHandwritingView : UIKBKeyView  {
    struct KBStrokeList { struct COWQueue<writing_point16_t> { unsigned int x_1_1_1; unsigned int x_1_1_2; struct SharedElements {} *x_1_1_3; } x1; struct COWQueue<int> { unsigned int x_2_1_1; unsigned int x_2_1_2; struct SharedElements {} *x_2_1_3; } x2; int x3; } *_strokes;
    <UIKBHandwritingDelegateProtocol> *_delegate;
    struct CGColor { } *_inkColor;
    struct CGImage { } *_inkMask;
    UIKBTree *_keyboard;
    struct CGPoint { 
        float x; 
        float y; 
    } _last;
    int _down;
    BOOL _stroked;
    BOOL _captureEnabled;
    BOOL _inGesture;
}


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id).cxx_construct;
- (void)updateForKeyboard:(id)arg1 key:(id)arg2;
- (void)send;
- (BOOL)shouldCache;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (BOOL)cancelTouchTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)clear;
- (void)setDelegate:(id)arg1;

@end