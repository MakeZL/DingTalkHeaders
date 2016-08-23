//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WeiboUser : NSObject
{
    _Bool _isFollowingMe;
    _Bool _isFollowingByMe;
    _Bool _isAllowAllActMsg;
    _Bool _isAllowAllComment;
    _Bool _isGeoEnabled;
    _Bool _isVerified;
    NSString *_userID;
    NSString *_userClass;
    NSString *_screenName;
    NSString *_name;
    NSString *_province;
    NSString *_city;
    NSString *_location;
    NSString *_userDescription;
    NSString *_url;
    NSString *_profileImageUrl;
    NSString *_coverImageUrl;
    NSString *_coverImageForPhoneUrl;
    NSString *_profileUrl;
    NSString *_userDomain;
    NSString *_weihao;
    NSString *_gender;
    NSString *_followersCount;
    NSString *_friendsCount;
    NSString *_pageFriendsCount;
    NSString *_statusesCount;
    NSString *_favouritesCount;
    NSString *_createdTime;
    NSString *_verifiedType;
    NSString *_remark;
    NSString *_statusID;
    NSString *_ptype;
    NSString *_avatarLargeUrl;
    NSString *_avatarHDUrl;
    NSString *_verifiedReason;
    NSString *_verifiedTrade;
    NSString *_verifiedReasonUrl;
    NSString *_verifiedSource;
    NSString *_verifiedSourceUrl;
    NSString *_verifiedState;
    NSString *_verifiedLevel;
    NSString *_onlineStatus;
    NSString *_biFollowersCount;
    NSString *_language;
    NSString *_star;
    NSString *_mbtype;
    NSString *_mbrank;
    NSString *_block_word;
    NSString *_block_app;
    NSString *_credit_score;
    NSDictionary *_originParaDict;
}

+ (_Bool)isValidForDictionary:(id)arg1;
+ (id)userWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *originParaDict; // @synthesize originParaDict=_originParaDict;
@property(retain, nonatomic) NSString *credit_score; // @synthesize credit_score=_credit_score;
@property(retain, nonatomic) NSString *block_app; // @synthesize block_app=_block_app;
@property(retain, nonatomic) NSString *block_word; // @synthesize block_word=_block_word;
@property(retain, nonatomic) NSString *mbrank; // @synthesize mbrank=_mbrank;
@property(retain, nonatomic) NSString *mbtype; // @synthesize mbtype=_mbtype;
@property(retain, nonatomic) NSString *star; // @synthesize star=_star;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *biFollowersCount; // @synthesize biFollowersCount=_biFollowersCount;
@property(retain, nonatomic) NSString *onlineStatus; // @synthesize onlineStatus=_onlineStatus;
@property(retain, nonatomic) NSString *verifiedLevel; // @synthesize verifiedLevel=_verifiedLevel;
@property(retain, nonatomic) NSString *verifiedState; // @synthesize verifiedState=_verifiedState;
@property(retain, nonatomic) NSString *verifiedSourceUrl; // @synthesize verifiedSourceUrl=_verifiedSourceUrl;
@property(retain, nonatomic) NSString *verifiedSource; // @synthesize verifiedSource=_verifiedSource;
@property(retain, nonatomic) NSString *verifiedReasonUrl; // @synthesize verifiedReasonUrl=_verifiedReasonUrl;
@property(retain, nonatomic) NSString *verifiedTrade; // @synthesize verifiedTrade=_verifiedTrade;
@property(retain, nonatomic) NSString *verifiedReason; // @synthesize verifiedReason=_verifiedReason;
@property(retain, nonatomic) NSString *avatarHDUrl; // @synthesize avatarHDUrl=_avatarHDUrl;
@property(retain, nonatomic) NSString *avatarLargeUrl; // @synthesize avatarLargeUrl=_avatarLargeUrl;
@property(retain, nonatomic) NSString *ptype; // @synthesize ptype=_ptype;
@property(retain, nonatomic) NSString *statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *verifiedType; // @synthesize verifiedType=_verifiedType;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) _Bool isGeoEnabled; // @synthesize isGeoEnabled=_isGeoEnabled;
@property(nonatomic) _Bool isAllowAllComment; // @synthesize isAllowAllComment=_isAllowAllComment;
@property(nonatomic) _Bool isAllowAllActMsg; // @synthesize isAllowAllActMsg=_isAllowAllActMsg;
@property(nonatomic) _Bool isFollowingByMe; // @synthesize isFollowingByMe=_isFollowingByMe;
@property(nonatomic) _Bool isFollowingMe; // @synthesize isFollowingMe=_isFollowingMe;
@property(retain, nonatomic) NSString *createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSString *favouritesCount; // @synthesize favouritesCount=_favouritesCount;
@property(retain, nonatomic) NSString *statusesCount; // @synthesize statusesCount=_statusesCount;
@property(retain, nonatomic) NSString *pageFriendsCount; // @synthesize pageFriendsCount=_pageFriendsCount;
@property(retain, nonatomic) NSString *friendsCount; // @synthesize friendsCount=_friendsCount;
@property(retain, nonatomic) NSString *followersCount; // @synthesize followersCount=_followersCount;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *weihao; // @synthesize weihao=_weihao;
@property(retain, nonatomic) NSString *userDomain; // @synthesize userDomain=_userDomain;
@property(retain, nonatomic) NSString *profileUrl; // @synthesize profileUrl=_profileUrl;
@property(retain, nonatomic) NSString *coverImageForPhoneUrl; // @synthesize coverImageForPhoneUrl=_coverImageForPhoneUrl;
@property(retain, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(retain, nonatomic) NSString *profileImageUrl; // @synthesize profileImageUrl=_profileImageUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSString *userClass; // @synthesize userClass=_userClass;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

