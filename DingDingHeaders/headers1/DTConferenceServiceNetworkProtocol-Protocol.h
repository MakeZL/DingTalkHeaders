//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTConference, DTSmsModel, NSArray, NSNumber, NSString;

@protocol DTConferenceServiceNetworkProtocol <NSObject>
- (void)cancelBizCall:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createBizCall:(NSNumber *)arg1 bizCallNum:(NSString *)arg2 orgId:(NSNumber *)arg3 successBlock:(void (^)(DTBizCallResultModel *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)getSupportedCallType:(NSArray *)arg1 preferType:(NSNumber *)arg2 cid:(NSString *)arg3 successBlock:(void (^)(DTCallTypeRspModel *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)queryCallQuotaInfoSuccessBlock:(void (^)(DTDetailQuotaModel *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)getConfFeedbackInfoSuccessBlock:(void (^)(NSNumber *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)putConfFeedbackInfo:(long long)arg1 sessionId:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getWealfareInfo:(long long)arg1 sessionId:(NSString *)arg2 successBlock:(void (^)(DTActivityRspModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getWealfareStatus:(long long)arg1 successBlock:(void (^)(DTActivitySwitchRspModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getShowPage:(NSNumber *)arg1 successBlock:(void (^)(DTShowPageRspModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getConferenceCallAD:(NSNumber *)arg1 adID:(NSNumber *)arg2 successBlock:(void (^)(DTAdRspModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)putSingleCallScore:(NSString *)arg1 score:(NSNumber *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getConferenceConfigs:(NSArray *)arg1 successBlock:(void (^)(NSDictionary *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)sendUpdateSMS:(DTSmsModel *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)sendInviteSMS:(NSNumber *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createConvByCallRecord:(NSArray *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)cancelCall:(NSString *)arg1 callerNumber:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)createCall:(NSNumber *)arg1 callee:(NSNumber *)arg2 calleeNumber:(NSString *)arg3 viaVoIP:(_Bool)arg4 cid:(NSString *)arg5 successBlock:(void (^)(DTTeleChatResultModel *))arg6 failureBlock:(void (^)(NSError *))arg7;
- (void)pullConferenceStatus:(NSNumber *)arg1 successBlock:(void (^)(DTConfStatusModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)pullMembers:(DTConference *)arg1 successBlock:(void (^)(DTConfPullListModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)pullConference:(DTConference *)arg1 successBlock:(void (^)(DTConferenceModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)unMuteAll:(DTConference *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)muteAll:(DTConference *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)unMuteMember:(DTConference *)arg1 calleeID:(NSNumber *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)muteMember:(DTConference *)arg1 calleeID:(NSNumber *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)kickOutMember:(DTConference *)arg1 calleeID:(NSNumber *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)addMember:(DTConference *)arg1 calleeID:(NSNumber *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)leaveConference:(DTConference *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)enterConference:(DTConference *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)terminateConference:(DTConference *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createConference:(DTConference *)arg1 successBlock:(void (^)(DTConfCreateModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
@end
