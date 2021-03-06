/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSArray, NSTimeZone, NSObject<OS_dispatch_queue>, EKDaemonConnection, NSMutableSet, EKCalendar, NSMutableDictionary, NSNumber;

@interface EKEventStore : NSObject  {
    NSMutableDictionary *_registeredObjects;
    NSMutableDictionary *_publicRegisteredObjects;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_updatedObjects;
    NSNumber *_defaultTimedAlarmOffset;
    NSNumber *_defaultAllDayAlarmOffset;
    EKCalendar *_defaultCalendarForNewEvents;
    EKCalendar *_defaultCalendarForNewReminders;
    EKDaemonConnection *_database;
    double _lastDatabaseNotificationTimestamp;
    unsigned long _flags;
    NSTimeZone *_timeZone;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableSet *_objectsPendingCommit;
    NSObject<OS_dispatch_queue> *_calendarQueue;
    NSObject<OS_dispatch_queue> *_registeredQueue;
    NSObject<OS_dispatch_queue> *_unsavedChangesQueue;
    NSObject<OS_dispatch_queue> *_dbChangedQueue;
    NSMutableDictionary *_cachedValidatedEmails;
}

@property(readonly) NSString * eventStoreIdentifier;
@property(readonly) NSArray * calendars;
@property(readonly) EKCalendar * defaultCalendarForNewEvents;
@property NSMutableDictionary * registeredObjects;
@property NSMutableDictionary * publicRegisteredObjects;
@property NSMutableSet * insertedObjects;
@property NSMutableSet * deletedObjects;
@property NSMutableSet * updatedObjects;
@property NSMutableSet * objectsPendingCommit;
@property(retain) NSNumber * defaultTimedAlarmOffset;
@property(retain) NSNumber * defaultAllDayAlarmOffset;
@property(retain) EKCalendar * _defaultCalendarForNewEvents;
@property(retain) EKCalendar * _defaultCalendarForNewReminders;
@property(retain) NSMutableDictionary * _calendars;
@property(retain) NSMutableDictionary * _sources;
@property(retain) EKDaemonConnection * database;
@property double lastDatabaseNotificationTimestamp;
@property unsigned long flags;
@property(copy) NSTimeZone * timeZone;
@property NSObject<OS_dispatch_queue> * calendarQueue;
@property NSObject<OS_dispatch_queue> * registeredQueue;
@property NSObject<OS_dispatch_queue> * unsavedChangesQueue;
@property NSObject<OS_dispatch_queue> * dbChangedQueue;
@property(retain) NSMutableDictionary * _cachedValidatedEmails;

+ (Class)publicClassForEntityName:(id)arg1;
+ (Class)classForEntityName:(id)arg1;
+ (int)authorizationStatusForEntityType:(unsigned int)arg1;
+ (BOOL)_isAuthorizationRestrictedForService:(struct __CFString { }*)arg1;

- (id)database;
- (void)set_cachedValidatedEmails:(id)arg1;
- (id)_cachedValidatedEmails;
- (void)setDbChangedQueue:(id)arg1;
- (id)dbChangedQueue;
- (void)setUnsavedChangesQueue:(id)arg1;
- (id)unsavedChangesQueue;
- (void)setRegisteredQueue:(id)arg1;
- (id)registeredQueue;
- (void)setCalendarQueue:(id)arg1;
- (id)calendarQueue;
- (void)setObjectsPendingCommit:(id)arg1;
- (id)objectsPendingCommit;
- (void)set_sources:(id)arg1;
- (id)_sources;
- (void)set_calendars:(id)arg1;
- (id)_calendars;
- (void)setLastDatabaseNotificationTimestamp:(double)arg1;
- (double)lastDatabaseNotificationTimestamp;
- (void)setDatabase:(id)arg1;
- (id)_defaultCalendarForNewReminders;
- (id)_defaultCalendarForNewEvents;
- (void)setPublicRegisteredObjects:(id)arg1;
- (id)publicRegisteredObjects;
- (void)setRegisteredObjects:(id)arg1;
- (int)emailAddressValidationStatus:(id)arg1;
- (void)cacheValidationStatusForEmail:(id)arg1 status:(int)arg2;
- (id)defaultAllDayAlarm;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;
- (id)defaultTimedAlarm;
- (void)setDefaultTimedAlarmOffset:(id)arg1;
- (void)_protectedDataDidBecomeAvailable;
- (void)_protectedDataWillBecomeUnavailable;
- (id)predicateForUpcomingEventsWithLimit:(int)arg1;
- (id)predicateForUnalertedEvents;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForNotificationCenterVisibleEvents;
- (id)predicateForNotifiableEvents;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(BOOL)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (void)locationBasedAlarmOccurrencesWithCompletion:(id)arg1;
- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3;
- (id)alarmWithUUID:(id)arg1;
- (void)cancelFetchRequest:(id)arg1;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(id)arg2;
- (id)eventsMatchingPredicate:(id)arg1;
- (void)_trackModifiedObject:(id)arg1;
- (id)publicObjectWithObjectID:(id)arg1;
- (void)refreshSourcesIfNecessary;
- (BOOL)removeInviteReplyNotification:(id)arg1 error:(id*)arg2;
- (int)inviteReplyNotificationsCount;
- (BOOL)removeResourceChange:(id)arg1 error:(id*)arg2;
- (id)resourceChangesForEntityTypes:(unsigned int)arg1;
- (id)earliestExpiringNotifiableEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2;
- (int)notifiableEventCount;
- (int)unacknowledgedEventCount;
- (void)markNotificationsAlertedAndSave:(id)arg1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(double)arg2;
- (BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
- (id)insertNewExceptionDateWithDate:(id)arg1;
- (id)insertNewEvent;
- (id)calendarWithExternalURI:(id)arg1;
- (id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2;
- (id)eventWithUUID:(id)arg1;
- (BOOL)fetchProperties:(id)arg1 forReminders:(id)arg2;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;
- (id)predicateForRemindersWithSearchTerm:(id)arg1;
- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(id)arg2;
- (int)countOfRemindersMatchingPredicate:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)insertNewReminder;
- (id)calendarItemsWithExternalIdentifier:(id)arg1;
- (id)reminderWithExternalURI:(id)arg1;
- (BOOL)removeReminder:(id)arg1 error:(id*)arg2;
- (BOOL)saveReminder:(id)arg1 error:(id*)arg2;
- (void)setDefaultCalendarForNewReminders:(id)arg1;
- (id)defaultCalendarForNewReminders;
- (void)setDefaultCalendarForNewEvents:(id)arg1;
- (id)defaultCalendarForNewEvents;
- (struct CGColor { }*)copyCGColorForNewCalendar;
- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (BOOL)setInvitationStatus:(unsigned int)arg1 forEvents:(id)arg2 error:(id*)arg3;
- (BOOL)setInvitationStatus:(unsigned int)arg1 forEvent:(id)arg2 error:(id*)arg3;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (id)eventWithUniqueId:(id)arg1;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;
- (id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2;
- (id)eventWithIdentifier:(id)arg1;
- (BOOL)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id*)arg3;
- (BOOL)removeCalendar:(id)arg1 error:(id*)arg2;
- (BOOL)saveCalendar:(id)arg1 error:(id*)arg2;
- (id)readWriteCalendarsForEntityType:(unsigned int)arg1;
- (int)readWriteCalendarCountForEntityType:(unsigned int)arg1;
- (BOOL)hideCalendarsFromNotificationCenter:(id)arg1 error:(id*)arg2;
- (id)calendars;
- (BOOL)removeSource:(id)arg1 error:(id*)arg2;
- (BOOL)saveSource:(id)arg1 error:(id*)arg2;
- (id)localSource;
- (id)eventStoreIdentifier;
- (id)changesSinceSequenceNumber:(int)arg1;
- (id)defaultAllDayAlarmOffset;
- (id)defaultTimedAlarmOffset;
- (id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(id)arg2;
- (void)_reregisterObject:(id)arg1 oldID:(id)arg2;
- (void)_forgetRegisteredObjects;
- (void)_registerObject:(id)arg1;
- (id)sourceWithIdentifier:(id)arg1;
- (id)calendarWithID:(id)arg1;
- (id)_addFetchedObjectWithID:(id)arg1;
- (void)_registerObjectImmediate:(id)arg1;
- (void)refreshSourcesIfNecessary:(BOOL)arg1;
- (void)_refreshSource:(id)arg1 accountsManager:(id)arg2 isUserRequested:(BOOL)arg3;
- (void)_refreshDASource:(id)arg1 isUserRequested:(BOOL)arg2;
- (void)_refreshSubscribedCalendar:(id)arg1 accountsManager:(id)arg2 isUserRequested:(BOOL)arg3;
- (void)_refreshDASubscribedCalendar:(id)arg1 isUserRequested:(BOOL)arg2;
- (id)calendarsForEntityType:(unsigned int)arg1;
- (BOOL)removeInviteReplyNotifications:(id)arg1 error:(id*)arg2;
- (id)inviteReplyNotifications;
- (BOOL)removeResourceChanges:(id)arg1 error:(id*)arg2;
- (id)publicObjectWithPersistentObject:(id)arg1;
- (BOOL)markInviteReplyNotificationAlerted:(id)arg1;
- (BOOL)markCalendarAlerted:(id)arg1;
- (BOOL)markResourceChangeAlerted:(id)arg1 error:(id*)arg2;
- (void)markEventAlerted:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned int)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned int)arg9;
- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7;
- (id)_calendarItemsMatchingPredicate:(id)arg1;
- (id)calendarItemWithIdentifier:(id)arg1;
- (BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3 completion:(id)arg4;
- (void)_performServerFunction:(id)arg1 replyHandler:(id)arg2;
- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (void)_deleteObject:(id)arg1;
- (void)_insertObject:(id)arg1;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 checkValid:(BOOL)arg3;
- (BOOL)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id*)arg3 options:(id*)arg4;
- (void)_addObjectToPendingCommits:(id)arg1;
- (BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (id)_calendarWithID:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (BOOL)_calendar:(id)arg1 supportsEntityType:(unsigned int)arg2;
- (id)registerFetchedObjectWithID:(id)arg1 defaultLoadedProperties:(id)arg2;
- (void)_saveWithoutNotify;
- (id)_allCalendars;
- (BOOL)commit:(id*)arg1;
- (id)registerFetchedObjectWithID:(id)arg1;
- (void)_databaseChangedExternally;
- (BOOL)isDataProtected;
- (void)_validateObjectIDs:(id)arg1 completion:(id)arg2;
- (void)set_defaultCalendarForNewReminders:(id)arg1;
- (void)set_defaultCalendarForNewEvents:(id)arg1;
- (void)_unregisterObject:(id)arg1;
- (void)daemonRestarted;
- (void)requestAccessToEntityType:(unsigned int)arg1 completion:(id)arg2;
- (void)_accessStatusChanged;
- (void)_requestAccessForEntityType:(unsigned int)arg1;
- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (int)sequenceNumber;
- (void)rollback;
- (id)registeredObjects;
- (void)setDeletedObjects:(id)arg1;
- (void)setUpdatedObjects:(id)arg1;
- (void)setInsertedObjects:(id)arg1;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;
- (id)sources;
- (void)reset;
- (void)setFlags:(unsigned long)arg1;
- (id)init;
- (void)dealloc;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (oneway void)release;
- (id)connection;
- (unsigned long)flags;
- (unsigned int)serverPort;

@end
