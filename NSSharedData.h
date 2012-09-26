/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSharedData : NSData  {
    unsigned int _dataLength;
    unsigned int _memLength;
    char *_mem;
    BOOL _allowWrite;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (const void*)bytes;
- (unsigned int)length;
- (void)finalize;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2 allowWrite:(BOOL)arg3;
- (BOOL)_allowsDirectEncoding;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end