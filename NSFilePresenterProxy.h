/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NSFilePresenterProxy : NSFileReactorProxy  {
    BOOL _isInSuperArbiter;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _prewritingProcedure;

    unsigned int _writingRelinquishmentCount;
    id _currentWriterPurposeID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _postwritingProcedure;

    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
}

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;

- (void)dealloc;
- (BOOL)didObserveMoving;
- (void)resetMoveObserving;
- (void)beforeReacquiringFromWriterInvokeProcedure:(id)arg1;
- (id)currentWriterPurposeID;
- (BOOL)hasRelinquishedToWriter;
- (void)afterRelinquishingToWriterInvokeProcedure:(id)arg1;
- (void)updateLastEventIdentifier:(unsigned long long)arg1;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeChangeOfSubitemAtURL:(id)arg1 byWriterWithPurposeID:(id)arg2;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveByWriterWithPurposeID:(id)arg1;
- (void)observeChangeByWriterWithPurposeID:(id)arg1;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(id)arg2;
- (void)saveChangesWithCompletionHandler:(id)arg1;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(id)arg5;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 resultHandler:(id)arg4;
- (void)setInSuperarbiter;
- (void)forwardObservationMessageWithKind:(id)arg1 parameters:(id)arg2;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 resultHandler:(id)arg3;
- (void)forwardUsingMessageSender:(id)arg1;
- (void)setItemLocation:(id)arg1;

@end
