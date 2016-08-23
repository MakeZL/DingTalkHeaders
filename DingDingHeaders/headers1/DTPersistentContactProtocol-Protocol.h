//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTCRMContact, DTContact, DTDepartment, DTEnterpriseCard, DTGroupInvite, DTOrgUserName, DTOrganization, DTUsualContact, NSArray, NSDate, NSString;

@protocol DTPersistentContactProtocol <NSObject>
- (void)updateOrgUsernameOfEnterpriseCard:(NSString *)arg1 withUid:(long long)arg2 orgId:(long long)arg3;
- (NSArray *)orgUsernameWithUids:(NSArray *)arg1 orgId:(long long)arg2;
- (DTOrgUserName *)orgUsernameWithUid:(long long)arg1 orgId:(long long)arg2;
- (void)saveOrgUsernames:(NSArray *)arg1;
- (void)saveOrgUsernamesToCache:(NSArray *)arg1;
- (void)saveOrgUsername:(DTOrgUserName *)arg1;
- (void)saveGroupInvite:(DTGroupInvite *)arg1;
- (DTGroupInvite *)groupInviteWithOrgId:(long long)arg1;
- (void)removeUsualContactWithUid:(long long)arg1;
- (NSArray *)findUsualContactWithKeyword:(NSString *)arg1 size:(long long)arg2;
- (NSArray *)findUsualContactAfterTime:(NSDate *)arg1 size:(long long)arg2;
- (void)updateUsualContactsName:(NSArray *)arg1;
- (void)updateOrSaveUsualContact:(DTUsualContact *)arg1;
- (void)saveUsualContact:(DTUsualContact *)arg1;
- (DTUsualContact *)usualContactLocallyWithUID:(long long)arg1;
- (void)saveSource:(unsigned long long)arg1 ofFriend:(DTContact *)arg2;
- (DTContact *)friendWithMobile:(NSString *)arg1 countryCode:(NSString *)arg2;
- (_Bool)isFriendWithMobile:(NSString *)arg1 countryCode:(NSString *)arg2;
- (void)removeFriendWithUID:(long long)arg1;
- (void)saveFriends:(NSArray *)arg1;
- (NSArray *)searchFriendsWithSearchText:(NSString *)arg1;
- (NSArray *)allFriends;
- (void)saveCRMContactList:(NSArray *)arg1;
- (void)saveCRMContact:(DTCRMContact *)arg1;
- (void)removeCrmContact:(DTCRMContact *)arg1;
- (NSArray *)crmContactsWithUID:(long long)arg1;
- (NSArray *)getLocalOrgUsernames:(NSArray *)arg1 orgId:(long long)arg2;
- (NSArray *)departmentsWithDeptIds:(NSArray *)arg1 oid:(long long)arg2;
- (void)saveDepartmentList:(NSArray *)arg1;
- (DTDepartment *)departmentWithDepartId:(long long)arg1 oid:(long long)arg2;
- (void)saveDepartment:(DTDepartment *)arg1;
- (NSArray *)allOrganizations;
- (_Bool)hasOrganization;
- (DTOrganization *)organizationWithOrgID:(long long)arg1;
- (void)removeOrganizationWithOrgID:(long long)arg1;
- (void)removeAllOrganizations;
- (void)updateOpenInviteOfOrganization:(DTOrganization *)arg1;
- (void)updateShowGroupRealNameOfOrganization:(DTOrganization *)arg1;
- (void)updateShowGroupWaterMarkOfOrganization:(DTOrganization *)arg1;
- (void)updateShowContactWaterMarkOfOrganization:(DTOrganization *)arg1;
- (void)saveOrganization:(DTOrganization *)arg1;
- (DTEnterpriseCard *)enterpriseCardWithStaffID:(NSString *)arg1 oid:(long long)arg2;
- (void)removeEnterpriseCardWithPK:(NSString *)arg1;
- (NSArray *)enterpriseCardPksWithUID:(long long)arg1;
- (NSArray *)enterpriseCardsWithUID:(long long)arg1;
- (DTEnterpriseCard *)enterpriseCardWithKey:(NSString *)arg1;
- (DTEnterpriseCard *)enterpriseCardWithUID:(long long)arg1 oid:(long long)arg2;
- (void)removeEnterpriseCardWithOrgID:(long long)arg1;
- (void)removeEnterpriseCardWithUID:(long long)arg1;
- (void)saveEnterpriseCardList:(NSArray *)arg1;
- (void)saveEnterpriseCard:(DTEnterpriseCard *)arg1;
- (NSArray *)allUserContacts;
- (NSArray *)contactsWithDingAccounts:(NSArray *)arg1;
- (NSArray *)contactsWithEmails:(NSArray *)arg1;
- (void)listContactsWithUIDs:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (NSArray *)listContactsWithUIDs:(NSArray *)arg1;
- (void)updateIsOrgUserOfContact:(DTContact *)arg1;
- (void)saveSimpleContactList:(NSArray *)arg1;
- (void)saveContactList:(NSArray *)arg1;
- (void)saveContact:(DTContact *)arg1;
- (NSArray *)contactsListWithMobiles:(NSArray *)arg1 countryCode:(NSString *)arg2;
- (DTContact *)contactWithMobile:(NSString *)arg1 countryCode:(NSString *)arg2;
- (DTContact *)contactWithUID:(long long)arg1;
- (void)saveRemarkNameWithUid:(long long)arg1 remarkName:(NSString *)arg2 remarkPingyin:(NSString *)arg3;
- (void)saveRemarkName:(NSArray *)arg1 finishBlock:(void (^)(NSArray *))arg2;
@end
