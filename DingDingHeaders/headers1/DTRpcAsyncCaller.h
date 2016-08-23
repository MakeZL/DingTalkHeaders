//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSThread;

@interface DTRpcAsyncCaller : NSObject
{
    _Bool _cancelled;
    _Bool _finished;
    NSThread *_asyncThread;
}

+ (id)callAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak NSThread *asyncThread; // @synthesize asyncThread=_asyncThread;
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)handleException:(id)arg1;
- (void)afterCompleteAction;
- (void)beforeCompleteAction;
- (void)startAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)init;

@end

