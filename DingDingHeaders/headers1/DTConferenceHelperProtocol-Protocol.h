//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTContactItem, NSArray, NSDictionary, NSString, UIViewController;

@protocol DTConferenceHelperProtocol <NSObject>
@property(nonatomic) _Bool supportFixLine;
@property(nonatomic) _Bool enableVoIP;
@property(nonatomic) _Bool enableVideoConf;
@property(nonatomic) unsigned long long feedCount;
@property(nonatomic) _Bool enableVoIP2PSTN;
@property(nonatomic) _Bool enableConferenceVIPMonitor;
@property(nonatomic) unsigned long long enableConferenceVideoMemberCount;
@property(nonatomic) unsigned long long enableConferenceMiniumMemberCount;
@property(nonatomic) unsigned long long enableConferenceMemberCount;
- (void)conferenceQuickStartWithUids:(NSArray *)arg1 cid:(NSString *)arg2 quickType:(long long)arg3 inModal:(UIViewController *)arg4;
- (void)conferenceStartWithUids:(NSArray *)arg1 cid:(NSString *)arg2 inModal:(UIViewController *)arg3;
- (NSString *)currentRadioAccessTechnology;
- (NSString *)getMobileService;
- (void)removeTeleCallStatusNotifiy;
- (void)triggerTeleCallStatusNotifiy;
- (long long)checkCurrentConferenceBusinessStatus;
- (_Bool)isInVideoConference;
- (_Bool)isInPSTN;
- (_Bool)isInVoIP;
- (_Bool)isInConference;
- (void)triggerConfAlarm:(NSDictionary *)arg1 type:(long long)arg2;
- (DTContactItem *)getUsualContact:(long long)arg1;
- (NSString *)getConferenceExtensionMessage:(NSString *)arg1;
- (NSString *)conferenceCellConversationId;
- (NSString *)conferenceConversationId;
@end
