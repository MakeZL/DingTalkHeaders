//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface OpenGCDQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSString *_queueSpecific;
}

+ (id)sharedSerialQueue;
@property(retain, nonatomic) NSString *queueSpecific; // @synthesize queueSpecific=_queueSpecific;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void).cxx_destruct;
- (void *)getQueueSpecific;
- (void)dealloc;
- (void)dispatch_async:(CDUnknownBlockType)arg1;
- (void)dispatch_recursive_sync:(CDUnknownBlockType)arg1;
- (void)setQueuePriority:(long long)arg1;
- (id)init;

@end
