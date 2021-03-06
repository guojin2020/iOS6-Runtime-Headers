/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficSegment : PBCodable  {
    int _speed;
    int _vertexCount;
    int _vertexOffset;
    int _width;
    struct { 
        unsigned int speed : 1; 
        unsigned int width : 1; 
    } _has;
}

@property int vertexOffset;
@property int vertexCount;
@property BOOL hasSpeed;
@property int speed;
@property BOOL hasWidth;
@property int width;


- (void)setHasWidth:(BOOL)arg1;
- (BOOL)hasWidth;
- (void)setVertexCount:(int)arg1;
- (void)setVertexOffset:(int)arg1;
- (int)vertexOffset;
- (void)setHasSpeed:(BOOL)arg1;
- (BOOL)hasSpeed;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setWidth:(int)arg1;
- (int)vertexCount;
- (void)setSpeed:(int)arg1;
- (int)speed;
- (int)width;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
