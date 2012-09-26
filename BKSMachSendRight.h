/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSMachSendRight : NSObject <NSCopying, BKSXPCCoding> {
    unsigned int _sendRight;
}

@property unsigned int sendRight;

+ (BOOL)portRightIsUsable:(unsigned int)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;

- (BOOL)isUsable;
- (unsigned int)sendRight;
- (void)setSendRight:(unsigned int)arg1;
- (id)_initWithSendRight:(unsigned int)arg1 insertRight:(BOOL)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end