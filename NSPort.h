/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPort : NSObject <NSCopying, NSCoding> {
}

+ (id)port;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)portWithMachPort:(unsigned int)arg1;

- (BOOL)isValid;
- (unsigned int)machPort;
- (void)invalidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeConnection:(id)arg1 fromRunLoop:(id)arg2 forMode:(id)arg3;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (Class)classForPortCoder;
- (unsigned int)reservedSpaceLength;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end