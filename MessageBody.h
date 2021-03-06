/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class Message;

@interface MessageBody : NSObject  {
    Message *_message;
}


- (id)textHtmlPart;
- (unsigned int)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (BOOL)isRich;
- (BOOL)isHTML;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)attachments;
- (id)message;
- (void)dealloc;
- (id)rawData;
- (void)setMessage:(id)arg1;

@end
