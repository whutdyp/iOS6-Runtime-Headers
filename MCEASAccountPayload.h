/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString, NSData;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    BOOL _useSSL;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    BOOL _syncDefaultFoldersOnly;
}

@property(readonly) NSString * accountDescription;
@property(readonly) NSString * hostname;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(copy) NSString * emailAddress;
@property(readonly) BOOL useSSL;
@property(readonly) NSNumber * mailNumberOfPastDaysToSync;
@property(readonly) NSData * embeddedCertificate;
@property(readonly) NSString * embeddedCertificateName;
@property(copy) NSString * embeddedCertificatePassword;
@property(readonly) NSString * certificateUUID;
@property(readonly) BOOL hasCertificate;
@property(copy) NSString * accountPersistentUUID;
@property(retain) NSData * certificatePersistentID;
@property BOOL syncDefaultFoldersOnly;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (BOOL)useSSL;
- (void)setSyncDefaultFoldersOnly:(BOOL)arg1;
- (BOOL)syncDefaultFoldersOnly;
- (void)setEmbeddedCertificatePassword:(id)arg1;
- (id)embeddedCertificatePassword;
- (id)embeddedCertificateName;
- (id)embeddedCertificate;
- (id)mailNumberOfPastDaysToSync;
- (BOOL)hasCertificate;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)accountPersistentUUID;
- (id)accountDescription;
- (id)certificateUUID;
- (void)setCertificatePersistentID:(id)arg1;
- (id)certificatePersistentID;
- (id)emailAddress;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setEmailAddress:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)hostname;
- (id)title;
- (id)password;
- (void).cxx_destruct;
- (id)description;

@end