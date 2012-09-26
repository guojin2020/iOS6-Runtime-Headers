/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, NSString, GKGame, GKAchievementInternal, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding> {
    GKAchievementInternal *_internal;
    BOOL _showsCompletionBanner;
    BOOL _hidden;
    GKGame *_game;
    GKPlayer *_player;
}

@property(retain) NSString * identifier;
@property double percentComplete;
@property(getter=isCompleted,readonly) BOOL completed;
@property(getter=isHidden) BOOL hidden;
@property(retain) NSDate * lastReportedDate;
@property BOOL showsCompletionBanner;
@property(retain) GKPlayer * player;
@property(readonly) NSString * groupIdentifier;
@property GKGame * game;
@property(retain) GKAchievementInternal * internal;

+ (void)resetAchievementsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id)arg4;
+ (void)loadAchievementsWithCompletionHandler:(id)arg1;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)achievementsForDescriptions:(id)arg1 achievements:(id)arg2 showHidden:(BOOL)arg3 game:(id)arg4 player:(id)arg5;
+ (void)loadAchievementsForGame:(id)arg1 player:(id)arg2 withCompletionHandler:(id)arg3;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (BOOL)canBeShared;
- (void)_gkSetSharingInfo:(id)arg1;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (void)issueChallengeForGame:(id)arg1 toPlayers:(id)arg2 message:(id)arg3;
- (void)reportAchievementWithCompletionHandler:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (BOOL)showsCompletionBanner;
- (void)setShowsCompletionBanner:(BOOL)arg1;
- (id)_gkSharingInfo;
- (void)setInternal:(id)arg1;
- (BOOL)isCompleted;
- (id)internal;
- (void)setGame:(id)arg1;
- (id)game;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (BOOL)isHidden;
- (id)init;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end