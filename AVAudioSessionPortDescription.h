/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSArray;

@interface AVAudioSessionPortDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSString * portType;
@property(readonly) NSString * portName;
@property(readonly) NSString * UID;
@property(readonly) NSArray * channels;

+ (id)privateCreatePortDescriptionsArrayWithCFArray:(struct __CFArray { }*)arg1;
+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary { }*)arg1;

- (id)UID;
- (id)portType;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; }*)privateGetImplementation;
- (id)channels;
- (id)portName;
- (id)init;
- (void)dealloc;
- (id)description;

@end