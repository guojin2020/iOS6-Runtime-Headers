/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject  {
}

@property(readonly) NSURL * URL;
@property(readonly) BOOL isBinary;
@property(readonly) NSString * fileName;
@property(readonly) NSString * fileFormat;
@property(readonly) NSNumber * fileSize;
@property(readonly) NSString * UUID;
@property(readonly) NSURL * localURL;


- (int)compareFileNames:(id)arg1;
- (BOOL)isBinary;
- (id)fileFormat;
- (id)localURL;
- (id)fileSize;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)UUID;
- (id)URL;
- (id)fileName;

@end
