/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {
    id source;
    id destination;
    NSString *label;
}


- (void)setSource:(id)arg1;
- (void)dealloc;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)source;
- (void)connect;
- (void)connectForSimulator;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end