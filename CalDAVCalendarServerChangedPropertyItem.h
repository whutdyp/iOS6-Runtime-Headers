/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, NSMutableSet;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem  {
    NSMutableSet *_changedParameters;
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

@property(retain) NSMutableSet * changedParameters;
@property(retain) NSString * nameAttribute;
@property(retain) NSString * typeAttribute;


- (id)typeAttribute;
- (void)addChangedParameter:(id)arg1;
- (id)changedParameters;
- (void)setChangedParameters:(id)arg1;
- (void)setTypeAttribute:(id)arg1;
- (id)nameAttribute;
- (void)setNameAttribute:(id)arg1;
- (void)parserFoundAttributes:(id)arg1;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)dealloc;

@end