//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@interface NSThread (RHBlockAdditions)
+ (void)rh_performBlockInBackground:(CDUnknownBlockType)arg1;
+ (void)rh_performBlockOnMainThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
+ (void)rh_performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)_rh_runBlock:(CDUnknownBlockType)arg1;
- (void)rh_performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)rh_performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)rh_performBlock:(CDUnknownBlockType)arg1;
@end

