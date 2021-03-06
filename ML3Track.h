/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Track : ML3Entity  {
}

+ (id)importChaptersByParsingAsset:(id)arg1;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)_flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)orderingTermsForITTGTrackOrder:(unsigned long)arg1 descending:(BOOL)arg2;
+ (BOOL)trackValueAreInTheCloud:(id)arg1;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (id)composersDefaultOrderingProperties;
+ (id)albumAndArtistDefaultOrderingProperties;
+ (id)artistAllAlbumsDefaultOrderingProperties;
+ (BOOL)_clearLocationFromLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned int)arg3;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned int)arg3 deletedFileSize:(long long*)arg4;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (BOOL)_deleteAssetAtPath:(id)arg1;
+ (void)_enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned int)arg3 usingBlock:(id)arg4;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(const long long*)arg2 count:(unsigned int)arg3;
+ (id)containerQueryWithContainer:(id)arg1;
+ (BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)predisambiguatedProperties;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4;
+ (id)extraTablesToDelete;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (BOOL)libraryDynamicChangeForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)extraTablesToInsert;
+ (id)databaseTable;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)unsettableProperties;
+ (int)revisionTrackingCode;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)defaultOrderingProperties;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)podcastsEpisodesDefaultOrderingProperties;
+ (id)albumAllArtistsDefaultOrderingProperties;
+ (id)TVShowEpisodesDefaultOrderingProperties;
+ (id)podcastsDefaultOrderingProperties;
+ (id)genresDefaultOrderingProperties;
+ (id)artistsDefaultOrderingProperties;
+ (id)albumsDefaultOrderingProperties;
+ (id)allProperties;
+ (void)initialize;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (id)rawIntegrity;
- (BOOL)updateIntegrity;
- (id)absoluteFilePath;
- (void)updateUbiquitousBookmarkTimestamp;
- (void)updateCollectionCloudStatus;
- (id)chapterTOC;
- (void)didChangeValueForProperties:(const id*)arg1 count:(unsigned int)arg2;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (id)artworkCacheIDAtPlaybackTime:(double)arg1;

@end
