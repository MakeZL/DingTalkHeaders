//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTDcIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)unbindTagFromSubApp:(id)arg1 appId:(id)arg2 orgId:(id)arg3 subAppId:(id)arg4 callback:(id)arg5;
- (void)bindTagToSubApp:(id)arg1 appId:(id)arg2 orgId:(id)arg3 subAppId:(id)arg4 callback:(id)arg5;
- (void)queryAllTagSubAppMapping:(id)arg1 orgId:(id)arg2 callback:(id)arg3;
- (void)getPersonalAttendanceDetail:(id)arg1 staffId:(id)arg2 appId:(id)arg3 subAppId:(id)arg4 dateVar:(id)arg5 callback:(id)arg6;

@end

