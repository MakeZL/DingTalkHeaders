//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLNetworkHelper : NSObject
{
    _Bool _isStarted;
    long long _curNetworkStatus;
}

+ (id)sharedNetworkHelper;
- (void)reachabilityChanged:(id)arg1;
- (void)startMonitoring;
- (_Bool)isNetworkReachabilityStatusReachable;
- (_Bool)isWifiEnvironment;
- (void)dealloc;
- (id)init;

@end

