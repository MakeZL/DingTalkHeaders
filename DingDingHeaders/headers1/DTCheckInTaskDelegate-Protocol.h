//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTCheckInTask, NSDictionary;

@protocol DTCheckInTaskDelegate <NSObject>
- (void)chekInTask:(DTCheckInTask *)arg1 handleWarning:(NSDictionary *)arg2;
- (void)checkInTaskHasComplete:(DTCheckInTask *)arg1 srcType:(long long)arg2;
- (void)checkInTaskHasExpired:(DTCheckInTask *)arg1;
@end

