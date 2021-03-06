/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSIndexSet;

@interface GKFlexibleSpaceSection : NSObject <GKTableSection> {
    float _maximumHeight;
    float _minimumHeight;
    float _currentHeight;
    float _weighting;
    BOOL _flexible;
    BOOL _needsRedisplay;
}

@property float maximumHeight;
@property float minimumHeight;
@property float currentHeight;
@property float weighting;
@property(getter=isFlexible) BOOL flexible;
@property BOOL needsRedisplay;
@property(retain) NSString * title;
@property(retain) NSString * secondaryTitle;
@property(retain) NSString * abbreviatedTitle;
@property(retain) NSIndexSet * indexesOfRowsWithLoadedData;

+ (id)flexibleSpaceSection;

- (BOOL)isFlexible;
- (float)currentHeightInTableView:(id)arg1;
- (float)maximumHeight;
- (void)setWeighting:(float)arg1;
- (void)setMinimumHeight:(float)arg1;
- (void)setMaximumHeight:(float)arg1;
- (void)setFlexible:(BOOL)arg1;
- (float)minimumHeight;
- (void)setCurrentHeight:(float)arg1;
- (float)weighting;
- (BOOL)needsRedisplay;
- (void)setNeedsRedisplay:(BOOL)arg1;
- (struct { unsigned int x1; unsigned char x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })currentMetricsInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)rowCountInTableView:(id)arg1;
- (id)init;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (float)currentHeight;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
