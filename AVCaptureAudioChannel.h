/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject  {
    AVCaptureAudioChannelInternal *_internal;
}

@property(readonly) float averagePowerLevel;
@property(readonly) float peakHoldLevel;


- (float)peakHoldLevel;
- (float)averagePowerLevel;
- (id)initWithConnection:(id)arg1;
- (void)dealloc;
- (void)invalidate;

@end