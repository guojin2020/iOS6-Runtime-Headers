/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString;

@interface DOMCharacterData : DOMNode  {
}

@property(copy) NSString * data;
@property(readonly) unsigned int length;


- (void)replaceData:(unsigned int)arg1 :(unsigned int)arg2 :(id)arg3;
- (void)replaceData:(unsigned int)arg1 length:(unsigned int)arg2 data:(id)arg3;
- (void)deleteData:(unsigned int)arg1 :(unsigned int)arg2;
- (void)deleteData:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1 :(id)arg2;
- (void)insertData:(unsigned int)arg1 data:(id)arg2;
- (id)substringData:(unsigned int)arg1 :(unsigned int)arg2;
- (id)substringData:(unsigned int)arg1 length:(unsigned int)arg2;
- (id)data;
- (unsigned int)length;
- (void)setData:(id)arg1;
- (void)appendData:(id)arg1;

@end
