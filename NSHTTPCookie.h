/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject  {
    NSHTTPCookieInternal *_cookiePrivate;
}

+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;
+ (id)cookieWithProperties:(id)arg1;
+ (id)_cf2nsCookies:(struct __CFArray { }*)arg1;
+ (struct __CFArray { }*)_ns2cfCookies:(id)arg1;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;

- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)domain;
- (id)description;
- (id)replacementObjectForPortCoder:(id)arg1;
- (BOOL)_isExpired;
- (int)_compareForHeaderOrder:(id)arg1;
- (id)MaxAge;
- (id)Port;
- (id)Discard;
- (id)Secure;
- (id)Version;
- (id)OriginURL;
- (id)CommentURL;
- (id)Comment;
- (id)Expires;
- (id)Path;
- (id)Domain;
- (id)Value;
- (id)Name;
- (BOOL)isHTTPOnly;
- (struct OpaqueCFHTTPCookie { }*)_GetInternalCFHTTPCookie;
- (id)properties;
- (id)portList;
- (BOOL)isSecure;
- (id)commentURL;
- (id)comment;
- (id)expiresDate;
- (BOOL)isSessionOnly;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
- (id)initWithProperties:(id)arg1;
- (id)value;
- (unsigned int)version;
- (id)_key;
- (id)path;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
