//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTDingEntityModel, DTUidExModel, NSArray, NSDictionary, NSNumber;

@interface DTDingModel : Marshal
{
    _Bool _sendReceipt;
    _Bool _commentNotify;
    NSNumber *_dingId;
    DTDingEntityModel *_dingEntity;
    DTUidExModel *_senderUidEx;
    NSNumber *_urgentLevel;
    NSNumber *_createAt;
    NSNumber *_modifyAt;
    NSNumber *_dingCommentCount;
    NSNumber *_dingStatus;
    NSArray *_dingAttachments;
    NSDictionary *_extension;
    NSNumber *_sendStatus;
    NSNumber *_memberCount;
    NSNumber *_senderIdentity;
    NSNumber *_sendAt;
    NSNumber *_modelTypeInTopic;
    NSNumber *_dingRemainTime;
    NSNumber *_totalCount;
    NSNumber *_unConfirmCount;
    NSNumber *_status;
    NSNumber *_confirmStatus;
    NSNumber *_finishReceiptCount;
    NSNumber *_handleStatus;
    NSNumber *_dingRemindAgainTime;
    NSNumber *_blockingTime;
    NSNumber *_finishStatus;
    NSNumber *_unFinishCount;
    NSNumber *_selfFinishStatus;
}

@property(retain, nonatomic) NSNumber *selfFinishStatus; // @synthesize selfFinishStatus=_selfFinishStatus;
@property(retain, nonatomic) NSNumber *unFinishCount; // @synthesize unFinishCount=_unFinishCount;
@property(retain, nonatomic) NSNumber *finishStatus; // @synthesize finishStatus=_finishStatus;
@property(retain, nonatomic) NSNumber *blockingTime; // @synthesize blockingTime=_blockingTime;
@property(nonatomic) _Bool commentNotify; // @synthesize commentNotify=_commentNotify;
@property(retain, nonatomic) NSNumber *dingRemindAgainTime; // @synthesize dingRemindAgainTime=_dingRemindAgainTime;
@property(retain, nonatomic) NSNumber *handleStatus; // @synthesize handleStatus=_handleStatus;
@property(retain, nonatomic) NSNumber *finishReceiptCount; // @synthesize finishReceiptCount=_finishReceiptCount;
@property(nonatomic) _Bool sendReceipt; // @synthesize sendReceipt=_sendReceipt;
@property(retain, nonatomic) NSNumber *confirmStatus; // @synthesize confirmStatus=_confirmStatus;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *unConfirmCount; // @synthesize unConfirmCount=_unConfirmCount;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSNumber *dingRemainTime; // @synthesize dingRemainTime=_dingRemainTime;
@property(retain, nonatomic) NSNumber *modelTypeInTopic; // @synthesize modelTypeInTopic=_modelTypeInTopic;
@property(retain, nonatomic) NSNumber *sendAt; // @synthesize sendAt=_sendAt;
@property(retain, nonatomic) NSNumber *senderIdentity; // @synthesize senderIdentity=_senderIdentity;
@property(retain, nonatomic) NSNumber *memberCount; // @synthesize memberCount=_memberCount;
@property(retain, nonatomic) NSNumber *sendStatus; // @synthesize sendStatus=_sendStatus;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSArray *dingAttachments; // @synthesize dingAttachments=_dingAttachments;
@property(retain, nonatomic) NSNumber *dingStatus; // @synthesize dingStatus=_dingStatus;
@property(retain, nonatomic) NSNumber *dingCommentCount; // @synthesize dingCommentCount=_dingCommentCount;
@property(retain, nonatomic) NSNumber *modifyAt; // @synthesize modifyAt=_modifyAt;
@property(retain, nonatomic) NSNumber *createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) NSNumber *urgentLevel; // @synthesize urgentLevel=_urgentLevel;
@property(retain, nonatomic) DTUidExModel *senderUidEx; // @synthesize senderUidEx=_senderUidEx;
@property(retain, nonatomic) DTDingEntityModel *dingEntity; // @synthesize dingEntity=_dingEntity;
@property(retain, nonatomic) NSNumber *dingId; // @synthesize dingId=_dingId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

