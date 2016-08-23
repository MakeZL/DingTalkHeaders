//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface DTBizMessage : NSObject
{
    NSMutableDictionary *_userProperties;
    _Bool _isView;
    _Bool _isMine;
    _Bool _hasGap;
    _Bool _isDel;
    NSArray *_attachments;
    unsigned long long _primaryKey;
    NSString *_localMid;
    long long _mId;
    NSString *_cId;
    long long _bizType;
    unsigned long long _creatorType;
    long long _createdTime;
    long long _localSentTime;
    long long _readStatus;
    long long _unReadCount;
    long long _senderId;
    long long _senderVersion;
    long long _totalCount;
    NSString *_content;
    long long _attachmentsType;
    NSString *_attachmentsJson;
    long long _forwardedOriginalMid;
    NSString *_data;
    NSString *_extension;
    unsigned long long _sendStatus;
    long long _bizTag;
    NSDictionary *_bizDictionary;
    NSDictionary *_atList;
    long long _tag;
    long long _recallStatus;
    unsigned long long _isDecrypt;
}

+ (long long)playStatusWithMessageMediaId:(id)arg1;
+ (long long)playStatusWithMessage:(id)arg1;
@property(nonatomic) unsigned long long isDecrypt; // @synthesize isDecrypt=_isDecrypt;
@property(nonatomic) _Bool isDel; // @synthesize isDel=_isDel;
@property(nonatomic) _Bool hasGap; // @synthesize hasGap=_hasGap;
@property(nonatomic) long long recallStatus; // @synthesize recallStatus=_recallStatus;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy) NSDictionary *atList; // @synthesize atList=_atList;
@property(copy, nonatomic) NSDictionary *bizDictionary; // @synthesize bizDictionary=_bizDictionary;
@property(nonatomic) long long bizTag; // @synthesize bizTag=_bizTag;
@property(nonatomic) unsigned long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) long long forwardedOriginalMid; // @synthesize forwardedOriginalMid=_forwardedOriginalMid;
@property(copy, nonatomic) NSString *attachmentsJson; // @synthesize attachmentsJson=_attachmentsJson;
@property(nonatomic) long long attachmentsType; // @synthesize attachmentsType=_attachmentsType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long senderVersion; // @synthesize senderVersion=_senderVersion;
@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(nonatomic) long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) _Bool isView; // @synthesize isView=_isView;
@property(nonatomic) long long readStatus; // @synthesize readStatus=_readStatus;
@property(nonatomic) long long localSentTime; // @synthesize localSentTime=_localSentTime;
@property(nonatomic) long long createdTime; // @synthesize createdTime=_createdTime;
@property(nonatomic) unsigned long long creatorType; // @synthesize creatorType=_creatorType;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *cId; // @synthesize cId=_cId;
@property(nonatomic) long long mId; // @synthesize mId=_mId;
@property(copy, nonatomic) NSString *localMid; // @synthesize localMid=_localMid;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (id)description;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

@end

