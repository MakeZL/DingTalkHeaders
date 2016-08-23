//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface LWPFileUploadTaskManager : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_uploadTaskMap;
    NSMutableArray *_taskQueue;
    NSMutableDictionary *_taskRuningQueueMap;
}

@property(retain, nonatomic) NSMutableDictionary *taskRuningQueueMap; // @synthesize taskRuningQueueMap=_taskRuningQueueMap;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSMutableDictionary *uploadTaskMap; // @synthesize uploadTaskMap=_uploadTaskMap;
- (void).cxx_destruct;
- (long long)maxConcurrentForQueue:(id)arg1;
- (id)dequeueTasks;
- (void)removeTask:(id)arg1;
- (id)taskTypeForTask:(id)arg1;
- (id)taskQueueNames;
- (id)queueNameForTask:(id)arg1;
- (id)taskRunningQueueForName:(id)arg1;
- (void)addTask:(id)arg1;
- (id)init;

@end
