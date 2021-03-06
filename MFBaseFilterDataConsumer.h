/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableArray, NSArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
    NSMutableArray *_consumers;
    BOOL _serialAppend;
}

@property(getter=isSerialAppend) BOOL serialAppend;
@property(readonly) NSArray * consumers;

+ (id)filterWithConsumer:(id)arg1;
+ (id)filterWithConsumers:(id)arg1;

- (id)consumers;
- (void)setSerialAppend:(BOOL)arg1;
- (BOOL)isSerialAppend;
- (id)initWithConsumers:(id)arg1;
- (id)initWithConsumer:(id)arg1;
- (void)done;
- (void)dealloc;
- (int)appendData:(id)arg1;

@end
