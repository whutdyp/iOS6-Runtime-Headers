/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCAPNInfo : NSObject  {
    NSString *_apnName;
    NSString *_username;
    NSString *_password;
    NSString *_proxy;
    NSNumber *_proxyPort;
}

@property(retain) NSString * apnName;
@property(retain) NSString * username;
@property(retain) NSString * password;
@property(retain) NSString * proxy;
@property(retain) NSNumber * proxyPort;


- (id)proxy;
- (id)proxyPort;
- (id)apnName;
- (id)strippedDefaultsRepresentation;
- (id)defaultsRepresentation;
- (void)setProxyPort:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setApnName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)password;
- (void).cxx_destruct;
- (id)description;

@end