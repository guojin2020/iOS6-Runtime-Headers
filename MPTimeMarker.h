/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSURL, NSString, NSDictionary;

@interface MPTimeMarker : NSObject  {
    double _duration;
    unsigned int _index;
    double _time;
    NSString *_title;
    NSURL *_url;
    int _markerType;
    NSDictionary *_metadata;
}

@property(readonly) double comparableTime;
@property double duration;
@property unsigned int index;
@property(readonly) BOOL hasArtworkAtPlaybackTime;
@property double time;
@property(readonly) double maxTime;
@property(retain) NSString * title;
@property(retain) NSURL * url;
@property(retain) NSDictionary * metadata;
@property(readonly) int markerType;


- (id)urlTitleTrimmingCharacterSet;
- (BOOL)hasArtworkAtPlaybackTime;
- (double)maxTime;
- (double)comparableTime;
- (int)markerType;
- (id)initWithMarkerType:(int)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setTime:(double)arg1;
- (double)time;
- (void)setDuration:(double)arg1;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)setIndex:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (unsigned int)index;
- (double)duration;
- (id)url;

@end