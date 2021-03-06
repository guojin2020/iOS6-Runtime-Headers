/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPItemDownloadProperties, NSError, SSDownloadHandlerSession, AVAsset;

@interface MPItemDownloadSession : NSObject  {
    AVAsset *_asset;
    MPItemDownloadProperties *_downloadProperties;
    SSDownloadHandlerSession *_downloadSession;
    float _percentComplete;
    NSError *_sessionError;
    int _sessionState;
}

@property(readonly) MPItemDownloadProperties * downloadProperties;
@property AVAsset * AVAsset;
@property(retain) SSDownloadHandlerSession * downloadSession;
@property float percentComplete;
@property(retain) NSError * sessionError;
@property int sessionState;


- (void)setSessionState:(int)arg1;
- (int)sessionState;
- (void)setSessionError:(id)arg1;
- (id)sessionError;
- (id)downloadSession;
- (void)setAVAsset:(id)arg1;
- (id)AVAsset;
- (void)snapshotProgressForItem:(id)arg1;
- (void)setDownloadSession:(id)arg1;
- (void)reloadNetworkConstraints;
- (BOOL)isNetworkConstrainedForNetworkType:(int)arg1;
- (id)downloadProperties;
- (id)initWithItemDownloadProperties:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (float)percentComplete;
- (void)dealloc;
- (id)description;

@end
