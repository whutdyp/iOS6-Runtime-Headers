/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSASSharingRelationship : NSObject <NSCopying> {
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_personID;
    int _state;
}

@property(retain) NSString * GUID;
@property(retain) NSString * albumGUID;
@property(retain) NSString * email;
@property(retain) NSString * fullName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSString * personID;
@property int state;

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)personID;
- (BOOL)isEqualToSharingRelationship:(id)arg1;
- (void)setAlbumGUID:(id)arg1;
- (id)albumGUID;
- (void)setPersonID:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (id)GUID;
- (void)setEmail:(id)arg1;
- (id)email;
- (id)fullName;
- (id)_fullName;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (void)setState:(int)arg1;
- (int)state;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end