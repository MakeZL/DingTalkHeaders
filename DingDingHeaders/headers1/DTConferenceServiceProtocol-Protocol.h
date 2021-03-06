//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizConfHistoryExtensionModel, DTConference, DTConferenceADModel, DTConferenceMember, DTConferenceShowPageModel, DTSmsModel, NSArray, NSDate, NSNumber, NSString;
@protocol DTConferenceServiceNetworkProtocol, DTConferenceServicePersistenceProtocol;

@protocol DTConferenceServiceProtocol <NSObject>
@property(nonatomic) _Bool canSystemCall;
@property(nonatomic, setter=setViaVoIP:) _Bool isViaVoIP;
@property(copy, nonatomic) CDUnknownBlockType conferenceEventHandler;
@property(retain, nonatomic) NSDate *lastConferenceEndTime;
@property(nonatomic) _Bool showWealfare;
@property(nonatomic) _Bool showInviteBtn;
@property(retain, nonatomic) DTConference *currentConference;
@property(retain, nonatomic) id <DTConferenceServiceNetworkProtocol> networkIMP;
@property(retain, nonatomic) id <DTConferenceServicePersistenceProtocol> persistenceIMP;
- (void)deleteUserMobilesWithUids:(NSArray *)arg1;
- (void)saveUserMobiles:(NSArray *)arg1;
- (NSArray *)userMobilesForUids:(NSArray *)arg1;
- (void)asyncLoadConfPageModelBlock:(void (^)(DTConferenceShowPageModel *))arg1;
- (DTConferenceShowPageModel *)loadConfPageModel;
- (_Bool)updateConfPage:(DTConferenceShowPageModel *)arg1;
- (_Bool)saveConfPage:(DTConferenceShowPageModel *)arg1;
- (void)asyncLoadConfADBlock:(void (^)(DTConferenceADModel *))arg1;
- (DTConferenceADModel *)loadConfAD;
- (_Bool)updateConfAD:(DTConferenceADModel *)arg1;
- (_Bool)saveConfAD:(DTConferenceADModel *)arg1;
- (void)asyncLoadConfHistoryByUUID:(NSString *)arg1 doneBlock:(void (^)(DTBizConfHistoryExtensionModel *))arg2;
- (DTBizConfHistoryExtensionModel *)loadConfHistoryByUUID:(NSString *)arg1;
- (_Bool)updateConfHistory:(DTBizConfHistoryExtensionModel *)arg1;
- (_Bool)saveConfHistory:(DTBizConfHistoryExtensionModel *)arg1;
- (void)cancelBizCall:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createBizCall:(NSNumber *)arg1 voIPToPSTN:(_Bool)arg2 bizCallNum:(NSString *)arg3 orgId:(NSNumber *)arg4 successBlock:(void (^)(DTBizCallResultModel *))arg5 failureBlock:(void (^)(NSError *))arg6;
- (void)getSupportedCallType:(NSArray *)arg1 preferType:(NSNumber *)arg2 cid:(NSString *)arg3 successBlock:(void (^)(DTCallTypeRspModel *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)queryCallQuotaInfoSuccessBlock:(void (^)(DTDetailQuotaModel *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)getConfFeedbackInfoSuccessBlock:(void (^)(NSNumber *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)putConfFeedbackInfo:(long long)arg1 sessionId:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getWealfareInfo:(long long)arg1 sessionId:(NSString *)arg2 successBlock:(void (^)(_Bool, NSNumber *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getWealfareStatus:(long long)arg1 successBlock:(void (^)(long long, _Bool))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getShowPage:(NSNumber *)arg1 successBlock:(void (^)(DTConferenceShowPageModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getConferenceCallAD:(NSNumber *)arg1 adID:(NSNumber *)arg2 successBlock:(void (^)(DTConferenceADModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)putSingleCallScore:(NSString *)arg1 score:(NSNumber *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getConferenceConfigs:(NSArray *)arg1 successBlock:(void (^)(NSDictionary *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)sendUpdateSMS:(DTSmsModel *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)sendInviteSMS:(NSNumber *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createConvByCallRecord:(NSArray *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)cancelCall:(NSString *)arg1 callerNumber:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)createCall:(NSNumber *)arg1 cid:(NSString *)arg2 voIPToPSTN:(_Bool)arg3 successBlock:(void (^)(NSString *, NSString *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)onReveicePush:(id)arg1 type:(long long)arg2;
- (void)pullConferenceStatus;
- (void)pullMembers:(void (^)(DTConference *))arg1;
- (void)pullConference:(void (^)(DTConference *))arg1;
- (void)unMuteAllSuccessBlock:(void (^)(void))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)muteAllSuccessBlock:(void (^)(void))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)unMuteMember:(NSNumber *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)muteMember:(NSNumber *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)kickOutMember:(DTConferenceMember *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)reconnectSuccessBlock:(void (^)(void))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)addMember:(DTConferenceMember *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)removeMember:(NSNumber *)arg1;
- (void)leaveConference;
- (void)enterConference:(DTConference *)arg1;
- (void)onConference:(DTConference *)arg1;
- (void)terminateConferencePanel;
- (void)terminateServerConference;
- (void)terminateConference;
- (void)initConferenceWithModel:(DTConference *)arg1;
- (void)createConference:(DTConference *)arg1;
@end

