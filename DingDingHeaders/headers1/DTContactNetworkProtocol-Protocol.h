//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTContact, DTDepartment, DTEnterpriseCard, DTFeedback, DTFilterModel, DTFriendRequest, DTLeavingReason, DTNameCardData, DTOrganization, DTRegion, DTReportItem, DTTeamCreation, NSArray, NSNumber, NSString;

@protocol DTContactNetworkProtocol <NSObject>
- (void)userIdsAndDeptIdsWithRuleId:(long long)arg1 corpId:(NSString *)arg2 agentId:(long long)arg3 successBlock:(void (^)(NSArray *, NSArray *))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)setRuleWithUserIds:(NSArray *)arg1 deptIds:(NSArray *)arg2 ruleId:(long long)arg3 ruleName:(NSString *)arg4 corpId:(NSString *)arg5 agentId:(long long)arg6 successBlock:(void (^)(long long))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)cityCanServiceWithRegion:(DTRegion *)arg1 successBlock:(void (^)(_Bool, NSString *, NSString *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)getExtContackInfoWithStaffId:(NSString *)arg1 oId:(long long)arg2 successBlock:(void (^)(DTEnterpriseCard *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)getExtContactInfoWithUid:(long long)arg1 oId:(long long)arg2 successBlock:(void (^)(DTEnterpriseCard *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)recognizeNameCard:(DTNameCardData *)arg1 successBlock:(void (^)(DTNameCard *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)crmFilterTagWithOrgId:(long long)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)searchCrmCustomersWithOrgId:(long long)arg1 keywords:(NSArray *)arg2 staffId:(NSString *)arg3 type:(unsigned long long)arg4 offset:(long long)arg5 size:(long long)arg6 successBlock:(void (^)(NSArray *, long long, _Bool, long long))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)crmCustomersWithOrgId:(long long)arg1 staffId:(NSString *)arg2 type:(unsigned long long)arg3 offset:(long long)arg4 size:(long long)arg5 successBlock:(void (^)(NSArray *, long long, _Bool, DTCRMCustomerPermission *, long long))arg6 failureBlock:(void (^)(id <IMError>))arg7;
- (void)crmContactsWithOrgId:(long long)arg1 staffId:(NSString *)arg2 offset:(long long)arg3 size:(long long)arg4 successBlock:(void (^)(NSArray *, long long, _Bool))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)queryPromotionSettingWithSuccessBlock:(void (^)(DTPromotionModel *))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)removeBossWithUid:(long long)arg1 orgId:(long long)arg2 successBlock:(void (^)(DTEnterpriseCard *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)addBossWithUid:(long long)arg1 orgId:(long long)arg2 successBlock:(void (^)(DTEnterpriseCard *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)getBossListWithOrgId:(long long)arg1 offset:(long long)arg2 size:(long long)arg3 successBlock:(void (^)(NSArray *, _Bool))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)getOrgEmpInfoByStaffIdsWithOrgID:(long long)arg1 staffIds:(NSArray *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)getOrgEmpInfoByUidsWithOrgID:(long long)arg1 uids:(NSArray *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)getLocalContactMatchSwitchWithSuccessBlock:(void (^)(_Bool))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)stopToMatchMobileContactWithSuccessBlock:(void (^)(void))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)mobileContactsOfServer:(long long)arg1 size:(long long)arg2 successBlock:(void (^)(NSArray *, long long, _Bool))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)uploadMobileContactsIncrementally:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)canUnbindEmailWithSuccessBlock:(void (^)(_Bool))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)unbindEmailWithSuccessBlock:(void (^)(_Bool))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)bindEmail:(NSString *)arg1 token:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)setDingAccount:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)subDepartmentsOfDepartId:(long long)arg1 orgId:(long long)arg2 cursor:(long long)arg3 size:(long long)arg4 successBlock:(void (^)(NSArray *, long long, _Bool))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)removeDepartEmpolyee:(long long)arg1 orgId:(long long)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateDepartEmpolyee:(DTEnterpriseCard *)arg1 successBlock:(void (^)(DTEnterpriseCard *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)setDepartEmpolyeeHighType:(long long)arg1 orgId:(long long)arg2 highLevel:(long long)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)setDepartEmpolyeeHidePhoneWithUid:(long long)arg1 orgId:(long long)arg2 open:(_Bool)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)getMemberPhoneWithOrgId:(long long)arg1 uId:(long long)arg2 successBlock:(void (^)(DTEnterpriseCard *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)getDepartEmployInfoWithuId:(long long)arg1 oId:(long long)arg2 successBlock:(void (^)(DTEnterpriseCard *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)addDepartEmployeeWithModel:(DTEnterpriseCard *)arg1 successBlock:(void (^)(DTEnterpriseCard *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)switchGroupInviteWithOrgId:(long long)arg1 on:(_Bool)arg2 successBlock:(void (^)(DTGroupInvite *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)removeApplyWithApplyId:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)blockApplyWithApplyId:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)refuseApplyWithApplyId:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)acceptApplyWithApplyId:(long long)arg1 name:(NSString *)arg2 departId:(long long)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)groupApplyListWithCursor:(long long)arg1 size:(long long)arg2 successBlock:(void (^)(NSArray *, long long, _Bool))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)orgDepartInviteWithOrgId:(long long)arg1 successBlock:(void (^)(DTGroupInvite *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)groupInviteOfServerWithOrgId:(long long)arg1 successBlock:(void (^)(DTGroupInvite *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)report:(DTReportItem *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)leaveOrganization:(DTLeavingReason *)arg1 successBlock:(void (^)(DTUserProfileExtensionModel *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)removeOrganization:(long long)arg1 successBlock:(void (^)(DTUserProfileExtensionModel *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)isMobileShow:(long long)arg1 successBlock:(void (^)(_Bool))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)loadOrgScoreWithSuccessBlock:(void (^)(DTOrgScoreModel *))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)loadTrendDataWithOrgId:(long long)arg1 successBlock:(void (^)(DTOrgTrendDataModel *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)orgManageInfoWithOrgId:(long long)arg1 successBlock:(void (^)(DTManageOrgInfoModel *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)setAutoJoinOrgGroupChat:(long long)arg1 deptId:(long long)arg2 isAuto:(_Bool)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)setOrgGroupRealNameSetting:(long long)arg1 isOpen:(_Bool)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)setOrgGroupWaterMarkSetting:(long long)arg1 isOpen:(_Bool)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)setOrgContactWaterMarkSetting:(long long)arg1 isOpen:(_Bool)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)setMobileShow:(long long)arg1 isShow:(_Bool)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateOrganization:(DTOrganization *)arg1 successBlock:(void (^)(DTOrganization *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)getIndustryListWithSuccessBlock:(void (^)(NSArray *))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)getCorpIdWithOrgId:(long long)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)manageOrganizationWithOid:(long long)arg1 orgName:(NSString *)arg2 industryCode:(NSNumber *)arg3 industryDesc:(NSString *)arg4 members:(NSArray *)arg5 successBlock:(void (^)(DTOrgManageModel *))arg6 failureBlock:(void (^)(id <IMError>))arg7;
- (void)teamCreationByTemplateId:(long long)arg1 successBlock:(void (^)(DTTeamCreation *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)orgDetailWithOrgId:(long long)arg1 successBlock:(void (^)(DTTeamCreation *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)createTeam:(DTTeamCreation *)arg1 successBlock:(void (^)(long long))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)createOrganizationWithName:(NSString *)arg1 employees:(NSArray *)arg2 successBlock:(void (^)(DTUserProfileExtensionModel *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)removeUsualContactWithUid:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)usualContactsWithSuccessBlock:(void (^)(NSArray *))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)uploadUsualContacts:(NSArray *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)unbindAccount:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)sendVerifyCodeToUnbindAccount:(NSString *)arg1 via:(unsigned long long)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)changeToNewPhoneV2:(NSString *)arg1 withSMSCode:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)changeToNewPhone:(NSString *)arg1 withSMSCode:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)sendVerifyCodeToChangingPhone:(NSString *)arg1 via:(unsigned long long)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateAvatarWithAvatarMediaId:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)sendFeedback:(DTFeedback *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)friendStatusWithUID:(long long)arg1 successBlock:(void (^)(unsigned long long, DTFriendRequest *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)removeFriendWithUID:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)friendsWithCursor:(long long)arg1 size:(long long)arg2 successBlock:(void (^)(NSArray *, long long))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)friendRequestsWithCursor:(long long)arg1 size:(long long)arg2 successBlock:(void (^)(NSArray *, long long))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)removeFriendRequests:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)acceptFriendRequestWithUID:(long long)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)sendFriendRequest:(DTFriendRequest *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)inactiveMembersInDepartment:(long long)arg1 orgId:(long long)arg2 offset:(unsigned long long)arg3 size:(unsigned long long)arg4 successBlock:(void (^)(NSArray *, unsigned long long, unsigned long long, _Bool))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)myAllDepartsOfOrgId:(long long)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)orgUsernameWithUids:(NSArray *)arg1 orgId:(long long)arg2 attachProfile:(_Bool)arg3 successBlock:(void (^)(NSArray *, NSArray *))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)orgUsernameWithUid:(long long)arg1 orgId:(long long)arg2 attachProfile:(_Bool)arg3 successBlock:(void (^)(DTOrgUserName *, DTContact *))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)simpleContactWithUIDs:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)createUidWithIdentifiers:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)createIdentifierWithIdentifier:(NSArray *)arg1 supportFixLine:(_Bool)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)userProfilesWithUids:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)enterpriseCardsByOrganizationWithSearchText:(NSString *)arg1 offset:(long long)arg2 size:(long long)arg3 successBlock:(void (^)(NSArray *, _Bool, long long))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)enterpriseCardsWithSearchText:(NSString *)arg1 offset:(long long)arg2 size:(long long)arg3 successBlock:(void (^)(NSArray *, _Bool, long long))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)enterpriseCardsWithSearchListText:(NSString *)arg1 oid:(long long)arg2 offset:(long long)arg3 size:(long long)arg4 filterModel:(DTFilterModel *)arg5 successBlock:(void (^)(NSArray *, _Bool))arg6 failureBlock:(void (^)(id <IMError>))arg7;
- (void)enterpriseCardsWithSearchText:(NSString *)arg1 oid:(long long)arg2 offset:(long long)arg3 size:(long long)arg4 successBlock:(void (^)(NSArray *, _Bool))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)departmentEmployeesWithOrgid:(long long)arg1 deptId:(long long)arg2 offset:(long long)arg3 size:(long long)arg4 successBlock:(void (^)(NSArray *, long long, _Bool))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)removeDepartmentWithOrgId:(long long)arg1 deptId:(long long)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateDepartmentWithOrgId:(long long)arg1 department:(DTDepartment *)arg2 successBlock:(void (^)(DTDepartment *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)addDepartmentWithOrgId:(long long)arg1 department:(DTDepartment *)arg2 successBlock:(void (^)(DTDepartment *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)deptsInfoWithOrgId:(long long)arg1 deptIds:(NSArray *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)deptInfoWithOrgId:(long long)arg1 deptId:(long long)arg2 successBlock:(void (^)(DTDepartment *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)membersInDepartments:(NSArray *)arg1 uids:(NSArray *)arg2 excludeDepartments:(NSArray *)arg3 excludeUids:(NSArray *)arg4 limit:(long long)arg5 filter:(DTFilterModel *)arg6 successBlock:(void (^)(NSArray *))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)deptsInfoWithDepartment:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)extOrgNodeListWithIdentifier:(NSString *)arg1 idtype:(long long)arg2 oid:(long long)arg3 offset:(long long)arg4 size:(long long)arg5 model:(DTFilterModel *)arg6 successBlock:(void (^)(NSArray *, _Bool, long long, _Bool))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)organizationNodeListAndManageRightWithIdentifier:(NSString *)arg1 idtype:(long long)arg2 oid:(long long)arg3 offset:(long long)arg4 size:(long long)arg5 model:(DTFilterModel *)arg6 successBlock:(void (^)(NSArray *, _Bool, long long, _Bool))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)organizationRelationAndManageRightWithIdentifier:(NSString *)arg1 idType:(long long)arg2 oid:(long long)arg3 departType:(long long)arg4 offset:(long long)arg5 size:(long long)arg6 successBlock:(void (^)(NSArray *, _Bool, long long, _Bool))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)organizationRelationWithIdentifier:(NSString *)arg1 idType:(long long)arg2 oid:(long long)arg3 departType:(long long)arg4 offset:(long long)arg5 size:(long long)arg6 successBlock:(void (^)(NSArray *, _Bool, long long))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)enterpriseCardsWithMobile:(NSString *)arg1 countryCode:(NSString *)arg2 successBlock:(void (^)(DTContact *, NSArray *, DTFriendRequest *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)enterpriseCardWithStaffID:(NSString *)arg1 oid:(long long)arg2 successBlock:(void (^)(DTContact *, DTEnterpriseCard *, DTOrgRelationModel *, DTFriendRequest *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)enterpriseCardsAndCrmsWithUID:(long long)arg1 oid:(long long)arg2 successBlock:(void (^)(DTContact *, NSArray *, NSArray *, DTOrgRelationModel *, DTFriendRequest *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)enterpriseCardsWithUID:(long long)arg1 oid:(long long)arg2 successBlock:(void (^)(DTContact *, NSArray *, DTFriendRequest *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateContact:(DTContact *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)contactsOfServerWithEmails:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)contactOfServerWithMobile:(NSString *)arg1 countryCode:(NSString *)arg2 successBlock:(void (^)(DTContact *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)contactOfServerWithUID:(long long)arg1 successBlock:(void (^)(DTContact *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
@end

