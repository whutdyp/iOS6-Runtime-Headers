/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSAttributedString, NSURL, IMAccount, NSData, NSDate, NSSet, NSArray, NSDictionary, IMServiceImpl, NSString, NSMutableArray, IMPerson;

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {
    NSString *_guid;
    IMAccount *_account;
    NSString *_id;
    NSString *_uncanonicalID;
    NSString *_countryCode;
    NSDictionary *_otherServiceIDs;
    NSDate *_idleSince;
    NSDate *_feedUpdatedDate;
    NSDictionary *_presenceProps;
    NSDictionary *_extraProps;
    NSDictionary *_certs;
    NSSet *_groups;
    IMPerson *_person;
    NSString *_abFirstName;
    NSString *_abLastName;
    NSString *_abFullName;
    NSString *_abNickname;
    NSString *_displayID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_nickname;
    NSArray *_emails;
    NSString *_normalizedFormOfID;
    NSString *_IDWithoutResource;
    NSString *_IDWithTrimmedServer;
    NSString *_uniqueName;
    NSData *_pictureData;
    NSString *_statusMsg;
    NSString *_processedStatusMsg;
    NSAttributedString *_richStatusMsg;
    NSDate *_whenWentOffline;
    NSDate *_whenStatusChanged;
    NSString *_prevStatusMsg;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    NSURL *_statusURL;
    struct __CFPhoneNumber { } *_phoneNumberRef;
    NSString *_formattedNumber;
    BOOL _hasCheckedPhoneNumber;
    unsigned int _status;
    unsigned int _prevStatus;
    unsigned long long _capabilities;
    unsigned int _authRequestStatus;
    unsigned int _resourceIndex;
    int _IDStatus;
    BOOL _isRetainingAccount;
    BOOL _blockNotifications;
    BOOL _hasTemporaryWatch;
    BOOL _isMobile;
    BOOL _isBot;
    BOOL _isAnonymous;
    BOOL _beingTornDown;
    BOOL _willUpdateIdleTime;
    BOOL _hasCheckedCardMap;
    BOOL _isRegistered;
    int _priority;
    int _addressBookIdentifier;
    int _notificationQueueCount;
    NSURL *_statusMessageURL;
}

@property(readonly) BOOL hasNoConferencingCaps;
@property(readonly) NSString * ID;
@property(retain) NSString * originalID;
@property(retain) NSString * countryCode;
@property(readonly) NSString * displayID;
@property(readonly) NSString * normalizedID;
@property(readonly) BOOL hasName;
@property(readonly) NSString * name;
@property(readonly) NSString * fullName;
@property(readonly) NSString * uniqueName;
@property(readonly) NSString * nameAndID;
@property(readonly) NSString * nameAndEmail;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * nickname;
@property(readonly) IMAccount * account;
@property(readonly) IMServiceImpl * service;
@property int IDStatus;
@property(readonly) NSURL * statusURL;
@property(retain) NSURL * statusMessageAsURL;
@property(readonly) unsigned int status;
@property(readonly) NSString * statusMessage;
@property(readonly) NSString * nameOfStatus;
@property(readonly) NSAttributedString * richStatusMessage;
@property(readonly) NSString * offlineString;
@property(readonly) unsigned int previousStatus;
@property(readonly) NSString * previousStatusMessage;
@property(readonly) double timeSinceWentOffline;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) unsigned int authRequestStatus;
@property(readonly) double idleTime;
@property(readonly) NSString * idleString;
@property(readonly) NSDate * feedUpdatedDate;
@property int priority;
@property(readonly) BOOL canBeAdded;
@property(readonly) BOOL canBeDeleted;
@property(readonly) unsigned long long capabilities;
@property(readonly) BOOL isBot;
@property(readonly) BOOL isBuddy;
@property(readonly) BOOL isLoginIMHandle;
@property(readonly) BOOL isVisiblyBlocked;
@property(setter=setBlocked:) BOOL isBlocked;
@property(readonly) BOOL isAnonymous;
@property(readonly) BOOL isSystemUser;
@property(readonly) BOOL isMobile;
@property(readonly) BOOL isLoginIMHandleForAnyAccount;
@property(readonly) NSString * mobileDeviceName;
@property(readonly) BOOL watchingIMHandle;
@property(readonly) NSData * pictureData;
@property(retain) NSDictionary * otherServiceIDs;
@property(readonly) NSDictionary * presenceProperties;
@property(readonly) NSDictionary * extraProperties;
@property(readonly) NSString * email;
@property(readonly) NSArray * emails;
@property(setter=setIMPerson:,retain) IMPerson * person;
@property(readonly) int addressBookIdentifier;
@property(readonly) NSArray * groupsArray;
@property(readonly) NSSet * groups;
@property(readonly) BOOL hasOtherSiblings;
@property(readonly) NSSet * siblings;
@property(readonly) NSArray * siblingsArray;
@property(readonly) NSArray * accountSiblingsArray;
@property(readonly) NSArray * existingAccountSiblingsArray;
@property(readonly) id bestSibling;
@property(readonly) id bestAccountSibling;
@property(readonly) BOOL isConferenceAvailable;
@property(readonly) BOOL hasConferencing;
@property(readonly) BOOL hasVideo;
@property(readonly) BOOL hasMultiwayVideo;
@property(readonly) BOOL hasAudio;
@property(readonly) BOOL hasMultiwayAudio;
@property(readonly) BOOL hasResource;
@property(readonly) NSString * resource;
@property(readonly) NSString * IDWithoutResource;
@property(readonly) NSString * server;
@property(readonly) NSString * accountTypeName;
@property(readonly) NSString * guid;
@property(readonly) BOOL supportsARDMuxing;
@property(readonly) BOOL hasLocation;
@property(readonly) id imHandleWithoutResource;
@property(readonly) id existingIMHandleWithoutResource;
@property(readonly) BOOL hasServer;
@property(readonly) IMPerson * _cachedPerson;
@property(readonly) NSArray * dependentIMHandles;
@property(readonly) BOOL areABPropertiesRecent;
@property(setter=_setIsRegisteredWithRegistrar:) BOOL _isRegisteredWithRegistrar;
@property(retain) NSData * customPictureData;

+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)nameOfStatus:(unsigned int)arg1;
+ (id)bestIMHandleInArray:(id)arg1;
+ (void)_loadStatusNames;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (BOOL)notificationsEnabled;
+ (void)setNotificationsEnabled:(BOOL)arg1;

- (void)requestValueOfProperty:(id)arg1;
- (void)setPersonStatus:(unsigned int)arg1;
- (BOOL)hasConferencing;
- (void)setBlocked:(BOOL)arg1;
- (id)imHandleRegistrarGUID;
- (void)_sendRemoteLogDumpRequest;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (int)addressBookIdentifier;
- (void)setStatusMessageAsURL:(id)arg1;
- (id)statusMessageAsURL;
- (BOOL)isBot;
- (void)setOtherServiceIDs:(id)arg1;
- (id)richStatusMessage;
- (id)previousStatusMessage;
- (id)feedUpdatedDate;
- (unsigned int)previousStatus;
- (id)presenceProperties;
- (id)statusURL;
- (void)_setIsRegisteredWithRegistrar:(BOOL)arg1;
- (BOOL)_isRegisteredWithRegistrar;
- (void)setCustomPictureData:(id)arg1;
- (id)customPictureData;
- (void)_imPersonPictureChanged:(id)arg1;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (void)_sendData:(id)arg1;
- (BOOL)hasMultiwayAudio;
- (BOOL)hasMultiwayVideo;
- (BOOL)isConferenceAvailable;
- (id)_bestChatSibling;
- (id)_chatSiblings;
- (BOOL)_isChatSiblingOf:(id)arg1;
- (BOOL)isSiblingOf:(id)arg1;
- (BOOL)isAccountSiblingOf:(id)arg1;
- (id)siblingsArray;
- (BOOL)hasOtherSiblings;
- (BOOL)matchesIMHandle:(id)arg1;
- (int)compareNormalizedIDs:(id)arg1;
- (int)compareLastNames:(id)arg1;
- (int)compareFirstNames:(id)arg1;
- (void)_updateIdleTime;
- (void)_scheduleIdleTimeUpdate;
- (id)statusMessage;
- (id)idleString;
- (id)offlineString;
- (void)setStatusURLFromString:(id)arg1;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (int)IDStatus;
- (void)requestIDStatus;
- (id)nameOfStatus;
- (void)statusMessageChanged:(id)arg1;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (id)dependentIMHandles;
- (id)accountTypeName;
- (unsigned int)sortOrderInGroup:(id)arg1;
- (BOOL)isVisiblyBlocked;
- (void)setPresenceProperties:(id)arg1;
- (id)bestSibling;
- (id)bestSiblingInGroup:(id)arg1;
- (id)bestIMHandleForAccount:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (BOOL)isLoginIMHandleForAnyAccount;
- (id)mobileDeviceName;
- (void)setIsBot:(BOOL)arg1;
- (void)setIsMobile:(BOOL)arg1;
- (BOOL)isSystemUser;
- (BOOL)canBeAdded;
- (void)setLocalNickname:(id)arg1;
- (id)nameAndID;
- (void)_clearABPersonLookup;
- (void)clearABPerson;
- (id)nameAndEmail;
- (void)setUniqueName:(id)arg1;
- (BOOL)canBeDeleted;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(BOOL)arg3;
- (id)_handleInfo;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (void)_registerForIMPersonPictureChanges;
- (void)_unregisterFromIMPersonPictureChanges;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (id)pictureData;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (id)_chatSiblingsArray;
- (id)chatSiblingsArray;
- (id)normalizedID;
- (id)_nameForComparisonPreferFirst:(BOOL)arg1;
- (void)_updateIdleTimer;
- (void)_clearStatusMessageURLCache;
- (void)_filterStatusMessage;
- (double)idleTime;
- (double)timeSinceStatusChanged;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (void)setStatus:(unsigned int)arg1 message:(id)arg2 richMessage:(id)arg3;
- (id)imHandleWithoutResource;
- (BOOL)_isMyIDInList:(id)arg1;
- (BOOL)isBlocked;
- (void)_setExtraProperties:(id)arg1;
- (void)setIDStatus:(int)arg1;
- (id)bestSiblingInGroup:(id)arg1 otherThan:(id)arg2;
- (id)siblings;
- (id)existingAccountSiblingsArray;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (double)timeSinceWentOffline;
- (BOOL)supportsARDMuxing;
- (BOOL)isMobile;
- (void)_createPhoneNumberRefIfNeeded;
- (id)accountSiblingsArray;
- (id)IDWithoutResource;
- (BOOL)hasResource;
- (id)extraProperties;
- (void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4;
- (void)setEmails:(id)arg1;
- (void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)_abPersonCreateIfNeeded;
- (id)_nameUsingUnique:(BOOL)arg1;
- (id)_IDWithTrimmedServer;
- (BOOL)hasServer;
- (id)_formattedPhoneNumber;
- (BOOL)_hasServiceNameProperties;
- (BOOL)_hasABName;
- (id)displayID;
- (void)sendNotificationABPersonChanged;
- (void)resetUniqueName;
- (void)_clearABProperties;
- (id)nickname;
- (void)resetABProperties;
- (BOOL)areABPropertiesRecent;
- (id)existingIMHandleWithoutResource;
- (void)_postNotification:(id)arg1;
- (BOOL)shouldQueueNotifications;
- (id)imHandleForOtherAccount:(id)arg1;
- (id)bestIMHandleForService:(id)arg1;
- (id)groupsArray;
- (BOOL)isAnonymous;
- (void)setAnonymous:(BOOL)arg1;
- (id)existingChatSiblingsArray;
- (void)_setOriginalID:(id)arg1 updateSiblings:(BOOL)arg2;
- (void)_registerForNotifications;
- (void)_setCountryCode:(id)arg1;
- (int)compareStatus:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)statusChanged:(unsigned int)arg1;
- (void)statusChanged:(unsigned int)arg1 message:(id)arg2;
- (void)setIMPerson:(id)arg1;
- (id)_cachedPerson;
- (BOOL)resetABPerson;
- (void)setHasTemporaryWatch:(BOOL)arg1;
- (BOOL)watchingIMHandle;
- (id)otherServiceIDs;
- (id)resource;
- (BOOL)_setCapabilities:(unsigned long long)arg1;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3;
- (void)_setOriginalID:(id)arg1;
- (id)originalID;
- (void)propertiesChanged:(id)arg1;
- (void)_stopRetainingAccount:(id)arg1;
- (void)releaseNotificationQueue;
- (void)beginNotificationQueue;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (id)ID;
- (id)groups;
- (BOOL)isBuddy;
- (unsigned int)authRequestStatus;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (int)compareIDs:(id)arg1;
- (int)compareAccountNames:(id)arg1;
- (void)_removeAccountReference:(id)arg1;
- (BOOL)isBetterThanIMHandle:(id)arg1;
- (BOOL)isLoginIMHandle;
- (id)publicAPIPropertiesDictionary;
- (id)bestAccountSibling;
- (void)setCapabilities:(unsigned long long)arg1;
- (unsigned long long)capabilities;
- (id)emails;
- (void)setEmail:(id)arg1;
- (id)email;
- (BOOL)hasLocation;
- (BOOL)hasName;
- (void)setImageData:(id)arg1;
- (id)fullName;
- (id)lastName;
- (id)firstName;
- (id)countryCode;
- (id)service;
- (id)account;
- (id)guid;
- (void)postNotificationName:(id)arg1;
- (id)server;
- (id)init;
- (void)dealloc;
- (unsigned int)hash;
- (id)name;
- (void)finalize;
- (oneway void)release;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)person;
- (id)uniqueName;
- (void)setPriority:(int)arg1;
- (int)priority;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)status;
- (BOOL)hasNoConferencingCaps;

@end
