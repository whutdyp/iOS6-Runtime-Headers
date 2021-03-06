/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCertificateWrapperProfile : MCConfigurationProfile  {
}

+ (id)wrapperProfileDictionaryWithCertificateData:(id)arg1 fileName:(id)arg2;
+ (id)_wrapperProfileForCertificate:(struct __SecCertificate { }*)arg1 fileName:(id)arg2 certData:(id)arg3 type:(id)arg4;
+ (id)_wrapperProfileForWAPICertificate:(struct __SecCertificate { }*)arg1 fileName:(id)arg2 PEMData:(id)arg3;
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4;
+ (id)_wrapperPayloadDictWithCertData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 type:(id)arg5;
+ (id)_basicWrapperProfileForCertificateName:(id)arg1 fileName:(id)arg2 identifier:(id)arg3;
+ (id)_identifierHashFromData:(id)arg1;

- (int)trustLevel;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4;
- (id)_certificatePayload;
- (BOOL)isSigned;
- (id)earliestCertificateExpiryDate;
- (id)stubDictionary;

@end
