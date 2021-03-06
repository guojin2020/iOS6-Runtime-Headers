/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVPropFindTask, ICSDocument, <CoreDAVTaskGroupDelegate>, NSURL;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    NSURL *_inboxURL;
    CoreDAVPropFindTask *_fetchTask;
    ICSDocument *_calendarAvailability;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) ICSDocument * calendarAvailability;
@property(retain) NSURL * inboxURL;
@property(retain) CoreDAVPropFindTask * fetchTask;


- (id)calendarAvailability;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;
- (void)setCalendarAvailability:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (id)inboxURL;
- (void)_finishWithError:(id)arg1;
- (id)fetchTask;
- (void)setFetchTask:(id)arg1;
- (void)startTaskGroup;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)dealloc;

@end
