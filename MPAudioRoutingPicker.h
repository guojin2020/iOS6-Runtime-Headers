/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPAudioDeviceController;

@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    MPAudioDeviceController *_audioDeviceController;
    BOOL _ignoringInteractionEvents;
    NSArray *_routes;
}


- (void)setAVPlayer:(id)arg1;
- (BOOL)_pickRouteAtIndex:(unsigned int)arg1 withPassword:(id)arg2;
- (id)initWithAVPlayer:(id)arg1;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)dealloc;
- (BOOL)requiresPortraitOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end