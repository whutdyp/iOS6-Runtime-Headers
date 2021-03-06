/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSArray, NSString, ML3Predicate;

@interface ML3Container : ML3Entity  {
}

@property(readonly) ML3Predicate * staticPredicate;
@property(readonly) ML3Predicate * dynamicPredicate;
@property(getter=isLimitedByCount,readonly) BOOL limitedByCount;
@property(getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending;
@property(readonly) NSString * limitingProperty;
@property(readonly) NSArray * limitOrderingTerms;
@property(readonly) long long limitValue;
@property(readonly) NSArray * cloudDisplayOrderingTerms;
@property(readonly) NSArray * displayOrderingTerms;

+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2;
+ (void)populateDynamicContainersInLibrary:(id)arg1 createBuiltinSmartPlaylists:(BOOL)arg2;
+ (void)populateStaticItemsOfDynamicContainersInLibrary:(id)arg1;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (BOOL)smartCriteriaCanBeEvaluated:(id)arg1;
+ (BOOL)createMissingBuiltInSmartPlaylists:(id)arg1;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(BOOL)arg3;
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned long)arg3 limited:(BOOL)arg4 trackOrder:(unsigned long)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8;
+ (id)predicateForCriteriaList:(struct SearchCriteriaList { }*)arg1 dynamicCriteria:(BOOL)arg2;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (BOOL)hasCriterionInCriteriaList:(struct SearchCriteriaList { }*)arg1 forITDBTrackField:(int)arg2;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (void)populateDynamicContainersInLibrary:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)extraTablesToDelete;
+ (id)databaseTable;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (int)revisionTrackingCode;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)defaultOrderingProperties;
+ (void)initialize;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (BOOL)setTracksWithSwappedPersistentIDData:(id)arg1;
- (BOOL)removeTracksAtIndexes:(id)arg1;
- (id)displayOrderingTerms;
- (id)cloudDisplayOrderingTerms;
- (long long)limitValue;
- (id)limitingProperty;
- (BOOL)isLimitedByCount;
- (id)dynamicPredicate;
- (BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 size:(int)arg2;
- (BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned int)arg2;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 indexesTransformBlock:(id)arg3;
- (BOOL)addTracksWithPersistentIDs:(long long*)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2;
- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)arg1;
- (BOOL)_setSwappedItemPersistentIDs:(const long long*)arg1 size:(int)arg2 notify:(BOOL)arg3;
- (BOOL)setContainsTrack:(BOOL)arg1 forPersistentID:(long long)arg2 notify:(BOOL)arg3;
- (BOOL)setTracksWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2;
- (void)bindPopulateStatement:(id)arg1 withStaticTrackPersistentID:(id)arg2;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
- (id)staticPredicate;
- (id)evaluationOrderingTerms;
- (id)limitOrderingTerms;
- (BOOL)isCustomContainerOrderingDescending;
- (BOOL)isLimitOrderingDescending;
- (BOOL)isEvaluationOrderingDescending;
- (struct SearchCriteriaList { }*)importedCriteriaList;
- (void)didChangeValueForProperties:(const id*)arg1 count:(unsigned int)arg2;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (BOOL)addTrackWithPersistentID:(long long)arg1;
- (BOOL)removeAllTracks;
- (BOOL)moveTrackFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)removeTracksWithPersistentIDs:(const long long*)arg1 atFilteredIndexes:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;

@end
