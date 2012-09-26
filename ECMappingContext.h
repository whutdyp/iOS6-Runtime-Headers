/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject  {
    struct __CFDictionary { } *mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    struct __CFDictionary { } *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}

+ (id)mappingContext;

- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned int)arg3 andObject:(id)arg4;
- (id)mappingInfoAtIndex:(unsigned int)arg1;
- (id)mappingInfoForObject:(id)arg1;
- (unsigned int)mappedSheetIndexForSheetName:(id)arg1;
- (unsigned int)mappedSheetIndexForSheetIndex:(unsigned int)arg1;
- (unsigned int)mappingInfoCount;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)mappedSheetNames;
- (id)init;
- (void)dealloc;

@end