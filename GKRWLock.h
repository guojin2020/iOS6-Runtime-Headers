/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKRWLock : NSObject  {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    } _rwLock;
}


- (int)tryrdlock;
- (void)rdlock;
- (void)wrlock;
- (id)init;
- (void)dealloc;
- (void)unlock;

@end
