/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class <WifiListenerDelegate>;

@interface GKWifiListener : NSObject  {
    struct __SCDynamicStore { } *_dynamicStore;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _storeMutex;
    <WifiListenerDelegate> *wifiListenerDelegate;
}

@property <WifiListenerDelegate> * wifiListenerDelegate;


- (BOOL)stopChangeListener;
- (BOOL)hasWifiConnection;
- (id)wifiListenerDelegate;
- (BOOL)startChangeListener;
- (void)setWifiListenerDelegate:(id)arg1;
- (id)init;
- (void)dealloc;

@end
