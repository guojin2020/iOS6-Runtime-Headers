/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMessagePort : NSPort  {
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)name;
- (BOOL)isValid;
- (void)invalidate;
- (void)finalize;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initWithRemoteName:(id)arg1;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (BOOL)setName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
