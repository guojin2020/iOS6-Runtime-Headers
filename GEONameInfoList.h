/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEONameInfoList : PBCodable  {
    NSMutableArray *_nameInfos;
}

@property(retain) NSMutableArray * nameInfos;


- (id)nameInfos;
- (id)nameInfoAtIndex:(unsigned int)arg1;
- (void)clearNameInfos;
- (unsigned int)nameInfosCount;
- (void)addNameInfo:(id)arg1;
- (void)setNameInfos:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
