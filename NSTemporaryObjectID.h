/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID  {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (Class)classForStore:(id)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)initWithEntity:(id)arg1;
+ (void)_storeDeallocated;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (void)_release_1;
+ (id)_retain_1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (void)release;
+ (id)retain;
+ (void)initialize;
+ (int)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)initWithEntity:(id)arg1;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (void)_setPersistentStore:(id)arg1;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (id)_referenceData;
- (id)_retainedURIString;
- (id)entity;
- (BOOL)isTemporaryID;
- (id)persistentStore;
- (id)URIRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (unsigned int)retainCount;
- (void)release;
- (id)retain;

@end