//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeiboSDK.h"

@interface WeiboSDK (Statistics)
+ (void)forceUploadRecords;
+ (void)internalEvent:(id)arg1 withStartTime:(id)arg2;
+ (void)event:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
+ (void)event:(id)arg1;
+ (void)endLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
+ (void)beginLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
+ (void)endLogEvent:(id)arg1;
+ (void)beginLogEvent:(id)arg1;
+ (void)endLogPageView:(id)arg1;
+ (void)beginLogPageView:(id)arg1;
+ (void)setUploadFrequecy:(double)arg1;
+ (void)setVersion:(id)arg1;
+ (void)setChannelID:(id)arg1;
+ (void)setStatisticsLogEnabled:(_Bool)arg1;
+ (void)setStatisticsEnabled:(_Bool)arg1;
@end
