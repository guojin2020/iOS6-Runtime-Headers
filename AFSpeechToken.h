/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFSpeechToken : NSObject  {
    NSString *_text;
    int _confidence;
    double _startTime;
    double _endTime;
    BOOL _removeSpaceBefore;
    BOOL _removeSpaceAfter;
}

@property(copy) NSString * text;
@property int confidenceScore;
@property double startTime;
@property double endTime;
@property BOOL removeSpaceBefore;
@property BOOL removeSpaceAfter;


- (void)setRemoveSpaceBefore:(BOOL)arg1;
- (void)setRemoveSpaceAfter:(BOOL)arg1;
- (void)setConfidenceScore:(int)arg1;
- (int)confidenceScore;
- (id)dkPlistRepresentation;
- (id)initWithDKPlistRepresentation:(id)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (id)text;
- (void).cxx_destruct;
- (id)description;
- (BOOL)removeSpaceAfter;
- (BOOL)removeSpaceBefore;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void)setText:(id)arg1;

@end