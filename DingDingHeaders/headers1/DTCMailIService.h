//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTCMailIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)cmailStatus:(id)arg1;
- (void)call4Aid:(id)arg1 callback:(id)arg2;
- (void)bind:(id)arg1 agentEmail:(id)arg2 identity:(id)arg3 settings:(id)arg4 checkCode:(id)arg5 callback:(id)arg6;
- (void)updateOrgAgentConfig:(id)arg1 orgId:(id)arg2 model:(id)arg3 callback:(id)arg4;
- (void)updateAgentConfig:(id)arg1 model:(id)arg2 callback:(id)arg3;
- (void)listAgentConfig:(id)arg1 orgId:(id)arg2 callback:(id)arg3;
- (void)getMailMessageReceiverMail:(id)arg1 callback:(id)arg2;
- (void)sendMailMessage:(id)arg1 batchId:(id)arg2 callback:(id)arg3;
- (void)getReceiverListByConversationId:(id)arg1 batchId:(id)arg2 offset:(id)arg3 size:(id)arg4 callback:(id)arg5;
- (void)getMailHelperConversationId:(id)arg1;

@end

