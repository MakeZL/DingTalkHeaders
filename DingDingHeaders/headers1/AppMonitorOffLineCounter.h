//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppMonitorCounter.h"

@interface AppMonitorOffLineCounter : AppMonitorCounter
{
}

+ (void)flushAllLog;
+ (long long)writeLogInterval;
+ (void)setWriteLogInterval:(long long)arg1;
+ (void)commitWithPage:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3 arg:(id)arg4;
+ (void)commitWithPage:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3;

@end

