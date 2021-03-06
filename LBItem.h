/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

@class NSURL, NSMutableDictionary;

@interface LBItem : NSObject  {
    NSURL *_url;
    NSMutableDictionary *_attributes;
    id _replacement;
}

@property id replacement;


- (void)updateInfo:(id)arg1;
- (void)setReplacement:(id)arg1;
- (id)initWithURL:(id)arg1 itemUpdateInfo:(id)arg2;
- (id)replacement;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)_attributes;
- (id)attributeForName:(id)arg1;
- (id)attributesForNames:(id)arg1;
- (id)attributeNames;
- (id)url;
- (id)valueForKey:(id)arg1;
- (id)path;

@end
