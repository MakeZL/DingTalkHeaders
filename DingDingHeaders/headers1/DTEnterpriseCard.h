//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "NSCopying-Protocol.h"
#import "OpenModelProtocol-Protocol.h"

@class DTContact, DTOrganization, DTWorkStatus, NSArray, NSDate, NSString;

@interface DTEnterpriseCard : OpenModel <OpenModelProtocol, NSCopying>
{
    _Bool _hasSubordinate;
    _Bool _isOrgAuth;
    _Bool _mobileHide;
    NSString *_primaryKey;
    long long _uid;
    DTContact *_contact;
    long long _orgMasterUid;
    long long _orgId;
    NSString *_orgName;
    NSString *_orgMobile;
    NSString *_orgCountryCode;
    NSString *_orgUserName;
    NSString *_orgUserNamePinyin;
    NSString *_orgNickName;
    NSString *_orgAvatarMediaId;
    NSString *_orgTitle;
    NSString *_orgEmail;
    NSString *_orgStaffId;
    NSString *_orgMasterStaffId;
    NSString *_orgMasterDisplayName;
    NSString *_orgAuthEmail;
    NSArray *_orgDeparts;
    long long _orgLevel;
    NSString *_orgExtensionNumber;
    NSDate *_orgEntryDate;
    NSString *_orgWorkAddress;
    DTOrganization *_organization;
    NSArray *_orgRelations;
    NSArray *_properties;
    NSString *_unableClickReason;
    NSString *_unableSelectReason;
    unsigned long long _role;
    NSArray *_roles;
    DTWorkStatus *_workStatus;
    long long _customerCount;
}

+ (void)upgradeVersion3:(id)arg1;
+ (void)upgradeVersion2:(id)arg1;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)orgIdStringOfPrimaryKey:(id)arg1;
+ (id)uidStringOfPrimaryKey:(id)arg1;
+ (id)primaryKeyWithUID:(long long)arg1 staffID:(id)arg2 oid:(long long)arg3;
@property(nonatomic) long long customerCount; // @synthesize customerCount=_customerCount;
@property(retain, nonatomic) DTWorkStatus *workStatus; // @synthesize workStatus=_workStatus;
@property(retain, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(nonatomic) _Bool mobileHide; // @synthesize mobileHide=_mobileHide;
@property(copy, nonatomic) NSString *unableSelectReason; // @synthesize unableSelectReason=_unableSelectReason;
@property(copy, nonatomic) NSString *unableClickReason; // @synthesize unableClickReason=_unableClickReason;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSArray *orgRelations; // @synthesize orgRelations=_orgRelations;
@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
@property(nonatomic) _Bool isOrgAuth; // @synthesize isOrgAuth=_isOrgAuth;
@property(copy, nonatomic) NSString *orgWorkAddress; // @synthesize orgWorkAddress=_orgWorkAddress;
@property(retain, nonatomic) NSDate *orgEntryDate; // @synthesize orgEntryDate=_orgEntryDate;
@property(copy, nonatomic) NSString *orgExtensionNumber; // @synthesize orgExtensionNumber=_orgExtensionNumber;
@property(nonatomic) long long orgLevel; // @synthesize orgLevel=_orgLevel;
@property(copy, nonatomic) NSArray *orgDeparts; // @synthesize orgDeparts=_orgDeparts;
@property(copy, nonatomic) NSString *orgAuthEmail; // @synthesize orgAuthEmail=_orgAuthEmail;
@property(copy, nonatomic) NSString *orgMasterDisplayName; // @synthesize orgMasterDisplayName=_orgMasterDisplayName;
@property(copy, nonatomic) NSString *orgMasterStaffId; // @synthesize orgMasterStaffId=_orgMasterStaffId;
@property(copy, nonatomic) NSString *orgStaffId; // @synthesize orgStaffId=_orgStaffId;
@property(copy, nonatomic) NSString *orgEmail; // @synthesize orgEmail=_orgEmail;
@property(copy, nonatomic) NSString *orgTitle; // @synthesize orgTitle=_orgTitle;
@property(copy, nonatomic) NSString *orgAvatarMediaId; // @synthesize orgAvatarMediaId=_orgAvatarMediaId;
@property(copy, nonatomic) NSString *orgNickName; // @synthesize orgNickName=_orgNickName;
@property(copy, nonatomic) NSString *orgUserNamePinyin; // @synthesize orgUserNamePinyin=_orgUserNamePinyin;
@property(copy, nonatomic) NSString *orgUserName; // @synthesize orgUserName=_orgUserName;
@property(copy, nonatomic) NSString *orgCountryCode; // @synthesize orgCountryCode=_orgCountryCode;
@property(copy, nonatomic) NSString *orgMobile; // @synthesize orgMobile=_orgMobile;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) _Bool hasSubordinate; // @synthesize hasSubordinate=_hasSubordinate;
@property(nonatomic) long long orgMasterUid; // @synthesize orgMasterUid=_orgMasterUid;
@property(retain, nonatomic) DTContact *contact; // @synthesize contact=_contact;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *orgRelationsJsonOfCard;
@property(copy, nonatomic) NSString *orgRelationsJsonOfDepart;
@property(copy, nonatomic) NSString *orgDepartsJson;
- (long long)identifierType;
- (id)identifier;
- (id)joinedName;
- (id)displayName;
@property(copy, nonatomic) NSString *propertiesJson;
@property(nonatomic) long long orgEntryDateValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

