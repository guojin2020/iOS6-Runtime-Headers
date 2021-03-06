/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSData, NSDictionary, GKPlayerInternal;

@interface GKInviteInternal : GKInternalRepresentation  {
    GKPlayerInternal *_player;
    NSString *_peerID;
    NSString *_inviteID;
    NSData *_sessionToken;
    unsigned int _matchType;
    unsigned char _version;
    NSData *_peerPushToken;
    NSDictionary *_localizableMessage;
    NSString *_rid;
    NSString *_message;
    NSData *_peerNATIP;
    int _peerNATType;
    NSString *_bundleID;
    unsigned int _playerAttributes;
    NSString *_deviceID;
    unsigned int _playerGroup;
    NSData *_peerBlob;
}

@property(retain) NSString * inviteID;
@property(retain) NSData * sessionToken;
@property(retain) GKPlayerInternal * player;
@property(retain) NSString * message;
@property(retain) NSDictionary * localizableMessage;
@property unsigned int matchType;
@property unsigned int playerGroup;
@property unsigned int playerAttributes;
@property(retain) NSString * peerID;
@property(retain) NSData * peerPushToken;
@property int peerNATType;
@property(retain) NSData * peerNATIP;
@property(retain) NSData * peerBlob;
@property(retain) NSString * rid;
@property unsigned char version;
@property(retain) NSString * deviceID;
@property(retain) NSString * bundleID;
@property(readonly) BOOL isNearby;

+ (id)inviteFromNearbyPlayer:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3 connectionData:(id)arg4;
+ (id)inviteWithDictionary:(id)arg1;
+ (id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3;
+ (id)codedPropertyKeys;

- (id)deviceID;
- (id)peerNATIP;
- (id)peerBlob;
- (int)peerNATType;
- (id)peerPushToken;
- (void)setSessionToken:(id)arg1;
- (id)sessionToken;
- (void)setBundleID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (id)localizableMessage;
- (BOOL)isNearby;
- (id)inviteID;
- (void)setPeerBlob:(id)arg1;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerNATType:(int)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setInviteID:(id)arg1;
- (void)setMatchType:(unsigned int)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(unsigned int)arg1;
- (unsigned int)playerAttributes;
- (unsigned int)playerGroup;
- (unsigned int)matchType;
- (id)bundleID;
- (void)setRid:(id)arg1;
- (id)rid;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (id)message;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setMessage:(id)arg1;
- (void)setVersion:(unsigned char)arg1;
- (unsigned char)version;

@end
