/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader  {
    OCPZipPackage *mZipPackage;
}

@property(retain) OCPZipPackage * zipPackage;


- (void)restartReaderToUseDecryptedDocument;
- (bool)isBinaryReader;
- (BOOL)retainDecryptorWithErrorCode:(int*)arg1;
- (BOOL)verifyFileFormat;
- (id)zipPackage;
- (id)read;
- (void)setZipPackage:(id)arg1;
- (void)dealloc;
- (BOOL)start;

@end
