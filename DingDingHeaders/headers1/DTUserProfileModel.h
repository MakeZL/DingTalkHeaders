//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSDate, NSNumber, NSString;

@interface DTUserProfileModel : Marshal
{
    _Bool _isActive;
    _Bool _isDataComplete;
    _Bool _isOrgUser;
    NSNumber *_uid;
    NSString *_nick;
    NSString *_nickPinyin;
    NSString *_gender;
    NSString *_avatarMediaId;
    NSDate *_dob;
    NSString *_city;
    NSString *_stateCode;
    NSString *_mobile;
    NSNumber *_ver;
    NSArray *_labels;
    NSString *_name;
    NSNumber *_type;
    NSString *_extension;
    NSString *_dingTalkId;
    NSString *_email;
    NSArray *_authOrgs;
    NSNumber *_activeTime;
    NSNumber *_status;
    NSString *_orgEmail;
}

@property(copy, nonatomic) NSString *orgEmail; // @synthesize orgEmail=_orgEmail;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *activeTime; // @synthesize activeTime=_activeTime;
@property(copy, nonatomic) NSArray *authOrgs; // @synthesize authOrgs=_authOrgs;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *dingTalkId; // @synthesize dingTalkId=_dingTalkId;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isOrgUser; // @synthesize isOrgUser=_isOrgUser;
@property(nonatomic) _Bool isDataComplete; // @synthesize isDataComplete=_isDataComplete;
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSNumber *ver; // @synthesize ver=_ver;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *stateCode; // @synthesize stateCode=_stateCode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSDate *dob; // @synthesize dob=_dob;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *nickPinyin; // @synthesize nickPinyin=_nickPinyin;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

