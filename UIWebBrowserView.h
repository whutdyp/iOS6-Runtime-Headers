/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, UIWebFormDelegate, UIWebPDFView, UIResponder, UIWebTouchEventsGestureRecognizer, NSMutableArray, NSTimer, UIWebFormAccessory, NSObject<UIFormPeripheral>;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController, _UIWebRotationDelegate> {
    UIWebFormAccessory *_accessory;
    NSObject<UIFormPeripheral> *_input;
    DOMNode *_currentAssistedNode;
    DOMNode *_assistedNodeStartingFocusRedirects;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _inputViewBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _addressViewBounds;
    float _lastAdjustmentForScroller;
    unsigned int _audioSessionCategoryOverride;
    unsigned int _accessoryEnabled : 1;
    unsigned int _forceInputView : 1;
    unsigned int _formIsAutoFilling : 1;
    unsigned int _inputViewObeysDOMFocus : 1;
    unsigned int _allowDOMFocusRedirects : 1;
    unsigned int _hasEditedTextField : 1;
    unsigned int _alwaysDispatchesScrollEvents : 1;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    UIResponder *_editingDelegateForEverythingExceptForms;
    unsigned int _dispatchedTouchEvents;
    NSMutableArray *_deferredTouchEvents;
    struct { 
        NSMutableArray *all; 
        NSMutableArray *html; 
        NSMutableArray *javascript; 
        NSMutableArray *css; 
        NSMutableArray *error; 
        NSMutableArray *warning; 
        NSMutableArray *tip; 
        NSMutableArray *log; 
    } _messages;
    struct { 
        UIWebPDFView *view; 
        NSTimer *timer; 
    } _pdf;
}

@property(retain) UIWebFormAccessory * _accessory;
@property(retain) NSObject<UIFormPeripheral> * _input;
@property(retain) DOMNode * _currentAssistedNode;
@property(getter=isAccessoryEnabled) BOOL accessoryEnabled;
@property BOOL inputViewObeysDOMFocus;
@property BOOL allowDOMFocusRedirects;
@property(readonly) BOOL hasEditedTextField;
@property UIResponder * _editingDelegateForEverythingExceptForms;
@property BOOL allowsInlineMediaPlayback;
@property BOOL mediaPlaybackRequiresUserAction;
@property(readonly) BOOL isDispatchingTouchEvents;
@property BOOL alwaysDispatchesScrollEvents;
@property unsigned int audioSessionCategoryOverride;

+ (id)_PDFPageNumberLabel:(BOOL)arg1;
+ (BOOL)isAutoFillAllowed;
+ (float)preferredScrollDecelerationFactor;
+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;

- (BOOL)resignFirstResponder;
- (unsigned int)audioSessionCategoryOverride;
- (BOOL)isEditable;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)hasEditedTextField;
- (void)setAccessoryEnabled:(BOOL)arg1;
- (BOOL)isAccessoryEnabled;
- (id)_accessory;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_clearSelectionAndUI;
- (BOOL)_dumpWebArchiveAtPath:(id)arg1;
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (id)messagesMatchingMask:(int)arg1;
- (void)_setAddressViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withScale:(float)arg2;
- (void)_centerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(int)arg4;
- (struct CGSize { float x1; float x2; })contentSizeForScrollView:(id)arg1;
- (float)scaleForProposedNewScale:(float)arg1 andOldScale:(float)arg2;
- (BOOL)considerHeightOfRectOfInterestForRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })activeRectForRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)heightToKeepVisible;
- (float)minimumVerticalContentOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfInterestForRotation;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(struct { float x1; float x2; float x3; })arg2;
- (struct { float x1; float x2; float x3; })scalesForContainerSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_defaultScrollViewContentSize;
- (struct CGPoint { float x1; float x2; })_originForPDFPageLabelInSuperview:(id)arg1;
- (unsigned int)_firstVisiblePDFPageNumber;
- (void)clearMessagesMatchingMask:(int)arg1;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4 formAssistantFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 animationDuration:(double)arg6;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4;
- (void)_centerRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(int)arg4 toValue:(float)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_activeRectForRectToCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_handleDeferredEvents;
- (void)_deferWebEvent:(id)arg1;
- (BOOL)_shouldDeferEvents;
- (void)_endDeferringEvents;
- (void)_dispatchWebEvent:(id)arg1;
- (void)_startDeferringEvents;
- (BOOL)isDispatchingTouchEvents;
- (void)_autoFillFrame:(id)arg1;
- (void)_scrollCaretToVisible:(id)arg1;
- (void)setAllowDOMFocusRedirects:(BOOL)arg1;
- (BOOL)canAutoFill;
- (void)_updateAccessory;
- (void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2;
- (void)_updateFixedPositioningObjectsLayoutSoon;
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(BOOL)arg2;
- (id)_editingDelegateForEverythingExceptForms;
- (void)_displayFormNodeInputView;
- (void)_stopAssistingFormNode;
- (BOOL)_keepKeyboardVisibleDuringFocusRedirects;
- (BOOL)allowDOMFocusRedirects;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)set_currentAssistedNode:(id)arg1;
- (void)set_input:(id)arg1;
- (void)set_accessory:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (struct CGPoint { float x1; float x2; })_convertWindowPointToViewport:(struct CGPoint { float x1; float x2; })arg1;
- (void)_stopAssistingNode:(id)arg1;
- (void)_startAssistingNode:(id)arg1;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)accessoryTab:(BOOL)arg1;
- (id)_input;
- (BOOL)isAutoFilling;
- (void)webViewFormEditedStatusHasChanged:(id)arg1;
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)arg1;
- (void)autoFillWithElementValue;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (BOOL)alwaysDispatchesScrollEvents;
- (void)setAlwaysDispatchesScrollEvents:(BOOL)arg1;
- (id)_currentAssistedNode;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (BOOL)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (void)_startURLificationIfNeededCoalesce:(BOOL)arg1;
- (void)set_editingDelegateForEverythingExceptForms:(id)arg1;
- (void)setInputViewObeysDOMFocus:(BOOL)arg1;
- (BOOL)inputViewObeysDOMFocus;
- (void)_endAllowingFocusRedirects;
- (void)_beginAllowingFocusRedirects;
- (id)textDocument;
- (BOOL)playsNicelyWithGestures;
- (id)textFormElement;
- (void)assistFormNode:(id)arg1;
- (id)formElement;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_clearAllConsoleMessages;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)installGestureRecognizers;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)isAutoFillMode;
- (void)accessoryDone;
- (id)_editingDelegate;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)inputView;
- (BOOL)_requiresKeyboardResetOnReload;
- (id)_keyboardResponder;
- (void)_promptForReplace:(id)arg1;
- (void)copy:(id)arg1;
- (id)inputAccessoryView;
- (void)_didScroll;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end
