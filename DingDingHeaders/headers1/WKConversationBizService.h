//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WKConversationBizService : NSObject
{
}

+ (void)syncUserProfileWithConversation:(id)arg1;
+ (void)loadRemoteConversations:(id)arg1 noticeHandler:(id)arg2 conversationService:(id)arg3 messageId:(id)arg4;
+ (_Bool)conversationChangeUpdate:(id)arg1 conversationService:(id)arg2 noticeHandler:(id)arg3 changeConvMap:(id *)arg4 userInfo:(id)arg5;
+ (_Bool)batchProcessSortChange:(id)arg1 conversationService:(id)arg2 convFieldChangeDic:(id)arg3;
+ (_Bool)batchProcessNotificationOffChange:(id)arg1 conversationService:(id)arg2 convFieldChangeDic:(id)arg3;
+ (_Bool)batchProcessStatusChange:(id)arg1 conversationService:(id)arg2 convFieldChangeDic:(id)arg3;
+ (_Bool)receiveConversationSyncData:(id)arg1 noticeHandler:(id)arg2;

@end

