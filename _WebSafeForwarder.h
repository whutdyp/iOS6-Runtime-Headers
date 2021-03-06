/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject  {
    id target;
    id defaultTarget;
    BOOL catchExceptions;
    _WebSafeAsyncForwarder *asyncForwarder;
    long asyncForwarderPred;
}


- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2 catchExceptions:(BOOL)arg3;
- (void)clearTarget;
- (id)asyncForwarder;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
