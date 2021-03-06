/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureMetadataOutputInternal, NSObject<OS_dispatch_queue>, <AVCaptureMetadataOutputObjectsDelegate>;

@interface AVCaptureMetadataOutput : AVCaptureOutput  {
    AVCaptureMetadataOutputInternal *_internal;
}

@property(readonly) <AVCaptureMetadataOutputObjectsDelegate> * metadataObjectsDelegate;
@property(readonly) NSObject<OS_dispatch_queue> * metadataObjectsCallbackQueue;
@property(readonly) NSArray * availableMetadataObjectTypes;
@property(copy) NSArray * metadataObjectTypes;

+ (void)initialize;

- (BOOL)_faceMetadataIsActive;
- (void)setMetadataObjectTypes:(id)arg1;
- (id)metadataObjectsCallbackQueue;
- (id)metadataObjectsDelegate;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (id)availableMetadataObjectTypes;
- (id)metadataObjectTypes;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_input;

@end
