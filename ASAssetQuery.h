/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@class NSString, NSPredicate, NSArray;

@interface ASAssetQuery : NSObject  {
    NSArray *_results;
    BOOL _queriesLocalAssetInformationOnly;
    NSPredicate *_predicate;
    NSString *_assetType;
}

@property(retain) NSPredicate * predicate;
@property BOOL queriesLocalAssetInformationOnly;
@property(retain) NSArray * results;
@property(copy) NSString * assetType;

+ (id)queryPredicateForProperties:(id)arg1;

- (void)setQueriesLocalAssetInformationOnly:(BOOL)arg1;
- (void)startQuery:(id)arg1;
- (id)initWithAssetType:(id)arg1;
- (BOOL)queriesLocalAssetInformationOnly;
- (id)runQueryAndReturnError:(id*)arg1;
- (void)setResults:(id)arg1;
- (void)setAssetType:(id)arg1;
- (void)dealloc;
- (void)setPredicate:(id)arg1;
- (id)assetType;
- (id)results;
- (void)stopQuery;
- (id)predicate;

@end
