/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData;

@interface FTValidationCertificateMessage : FTMessage <NSCopying> {
    NSData *_responseCertificateData;
    NSData *_pushToken;
}

@property(copy) NSData * responseCertificateData;
@property(copy) NSData * pushToken;


- (void)setResponseCertificateData:(id)arg1;
- (id)responseCertificateData;
- (void)setPushToken:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)bagKey;
- (int)responseCommand;
- (int)command;
- (id)pushToken;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (id)messageBody;
- (BOOL)wantsBinaryPush;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end