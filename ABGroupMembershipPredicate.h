/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate  {
    void *_group;
    void *_store;
    NSString *_accountIdentifier;
}

@property void* group;
@property void* store;
@property(copy) NSString * accountIdentifier;


- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;
- (void)setStore:(void*)arg1;
- (void*)store;
- (void)dealloc;
- (void)setGroup:(void*)arg1;
- (BOOL)isValid;
- (id)description;
- (void*)group;

@end
