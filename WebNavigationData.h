/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject  {
    WebNavigationDataPrivate *_private;
}


- (id)response;
- (id)clientRedirectSource;
- (BOOL)hasSubstituteData;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6;
- (void)dealloc;
- (id)title;
- (id)url;
- (id)originalRequest;

@end
