//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppMonitorSdkAdapter.h"

@interface AppMonitorAPSdkAdapter : AppMonitorSdkAdapter
{
}

+ (id)sharedInstance;
- (void)addLogInSdk:(id)arg1 rawPoint:(_Bool)arg2;
- (void)uploadEventForEventId:(id)arg1;
- (void)parseRawEvent:(id)arg1;
- (void)sendRawEvent:(id)arg1;

@end

