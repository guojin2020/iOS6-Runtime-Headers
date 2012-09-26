/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentOrganizer : EKPersistentParticipant  {
}

@property(getter=isCurrentUser) BOOL currentUser;

+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (void)setCurrentUser:(BOOL)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4;
- (BOOL)isCurrentUser;
- (id)owner;
- (int)entityType;
- (void)setOwner:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end