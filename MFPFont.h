/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface MFPFont : NSObject  {
    float mSize;
    int mUnit;
    unsigned long mFlags;
    NSString *mName;
}


- (struct __CTFont { }*)createCTFontWithGraphics:(id)arg1;
- (void)setUnit:(int)arg1;
- (int)unit;
- (float)size;
- (void)setFlags:(unsigned long)arg1;
- (void)dealloc;
- (id)name;
- (void)setSize:(float)arg1;
- (void)setName:(id)arg1;
- (unsigned long)flags;

@end
