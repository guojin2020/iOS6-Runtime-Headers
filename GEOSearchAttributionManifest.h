/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOSearchAttributionManifest : PBCodable  {
    NSMutableArray *_searchAttributionSources;
}

@property(retain) NSMutableArray * searchAttributionSources;


- (id)searchAttributionSources;
- (id)searchAttributionSourcesAtIndex:(unsigned int)arg1;
- (void)clearSearchAttributionSources;
- (unsigned int)searchAttributionSourcesCount;
- (void)addSearchAttributionSources:(id)arg1;
- (void)setSearchAttributionSources:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
