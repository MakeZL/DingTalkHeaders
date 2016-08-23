//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapServices.h"

@class NSString;

@interface AMapServices (Private)
+ (id)requestWithReformer:(id)arg1;
+ (id)publicPostDataWithComponent:(id)arg1 logVersion:(id)arg2;
+ (id)commonHTTPHeadersWithComponent:(id)arg1 logVersion:(id)arg2 withXinfo:(_Bool)arg3;
+ (id)postRequestHTTPHeadersWithComponent:(id)arg1 logVersion:(id)arg2;
+ (id)commonHTTPHeadersWithComponent:(id)arg1;
- (void)showKeyAuthorizationInfo:(id)arg1 forComponent:(id)arg2;
- (void)sendStatisticsWithComponent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendAuthRequestWithComponent:(id)arg1 authKeys:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerWithComponent:(id)arg1;
- (void)sendInitInfoWithComponent:(id)arg1;
- (void)validatingAPIKey;

// Remaining properties
@property(readonly, nonatomic) NSString *authorizationInfo;
@property(readonly, nonatomic) long long authorizationStatus;
@end

