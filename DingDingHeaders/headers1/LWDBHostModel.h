//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSData, NSString;

@interface LWDBHostModel : OpenModel <OpenModelProtocol>
{
    NSString *_taskId;
    NSString *_taskKey;
    NSString *_taskType;
    NSData *_atThread;
    long long _createAt;
    unsigned long long _retryTimes;
    unsigned long long _maxRetryTimes;
    unsigned long long _taskStatus;
    NSData *_archivedTaskData;
    NSData *_extentions;
}

+ (id)copyWithModel:(id)arg1;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(retain, nonatomic) NSData *extentions; // @synthesize extentions=_extentions;
@property(retain, nonatomic) NSData *archivedTaskData; // @synthesize archivedTaskData=_archivedTaskData;
@property unsigned long long taskStatus; // @synthesize taskStatus=_taskStatus;
@property(nonatomic) unsigned long long maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) long long createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) NSData *atThread; // @synthesize atThread=_atThread;
@property(copy, nonatomic) NSString *taskType; // @synthesize taskType=_taskType;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

