//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class LWDBHostModel, NSString;
@protocol LWHostTaskDelegate;

@interface LWHostTask : NSObject <NSCoding, NSCopying>
{
    NSString *_taskId;
    LWDBHostModel *_hostDBModel;
    CDUnknownBlockType _taskFinishBlock;
    id <LWHostTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <LWHostTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType taskFinishBlock; // @synthesize taskFinishBlock=_taskFinishBlock;
@property(retain, nonatomic) LWDBHostModel *hostDBModel; // @synthesize hostDBModel=_hostDBModel;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)taskFailedWithMaxRetryTimes:(unsigned long long)arg1;
- (void)taskFinished:(_Bool)arg1 needRetry:(_Bool)arg2;
- (void)taskFinished:(_Bool)arg1;
- (void)retryTask;
- (void)cancelTask;
- (void)startTask;
- (void)prepareTaskDate;
- (id)initTaskWithDBModel:(id)arg1;
- (id)initTaskWithTaskKey:(id)arg1 taskType:(id)arg2 atThread:(id)arg3 maxRetryTimes:(unsigned long long)arg4;
- (id)initTaskWithTaskKey:(id)arg1 taskType:(id)arg2 maxRetryTimes:(unsigned long long)arg3;

@end
