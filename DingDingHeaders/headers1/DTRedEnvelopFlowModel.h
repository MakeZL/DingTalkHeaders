//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTRedEnvelopFlowModel : Marshal
{
    _Bool _isLuck;
    NSNumber *_createTime;
    NSNumber *_modifyTime;
    NSNumber *_sender;
    NSString *_clusterId;
    NSNumber *_flowId;
    NSString *_amount;
    NSNumber *_receiver;
    NSNumber *_status;
    NSString *_leaveMessage;
}

@property(nonatomic) _Bool isLuck; // @synthesize isLuck=_isLuck;
@property(copy, nonatomic) NSString *leaveMessage; // @synthesize leaveMessage=_leaveMessage;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *receiver; // @synthesize receiver=_receiver;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSNumber *flowId; // @synthesize flowId=_flowId;
@property(copy, nonatomic) NSString *clusterId; // @synthesize clusterId=_clusterId;
@property(retain, nonatomic) NSNumber *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSNumber *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
