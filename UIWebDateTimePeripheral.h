/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebFormControl>, DOMHTMLInputElement;

@interface UIWebDateTimePeripheral : NSObject <UIFormPeripheral> {
    DOMHTMLInputElement *_inputElement;
    <UIWebFormControl> *_control;
}

@property(retain) DOMHTMLInputElement * _inputElement;
@property(retain) <UIWebFormControl> * _control;

+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;

- (void)dealloc;
- (void)beginEditing;
- (id)_control;
- (id)initWithDOMHTMLInputElement:(id)arg1;
- (void)set_control:(id)arg1;
- (int)_datePickerModeForInputType:(id)arg1;
- (id)_inputElement;
- (void)set_inputElement:(id)arg1;
- (id)assistantView;

@end