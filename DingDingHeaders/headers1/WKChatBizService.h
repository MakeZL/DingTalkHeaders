//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WKChatBizService : NSObject
{
}

+ (id)getMsgIdsFromMsgs:(id)arg1;
+ (id)getMsgIds:(id)arg1 exludeIdsInMsgs:(id)arg2;
+ (id)createMsgsWithIds:(id)arg1 recallModelMap:(id)arg2 conversationId:(id)arg3;
+ (void)syncUserProfileWithMsgList:(id)arg1;
+ (void)processDeleteMsg:(id)arg1 msgsMap:(id)arg2;
+ (_Bool)processBatchMsgList:(id)arg1 noticeHandler:(id)arg2 readStatusList:(id)arg3 viewStatusList:(id)arg4 msgsMap:(id)arg5 userInfo:(id)arg6;
+ (void)batchProcessDeliveryMsgStatus:(id)arg1 msgsMap:(id)arg2 noticeHandler:(id)arg3;
+ (void)batchUpdateConversationUnread:(id)arg1 readStatusList:(id)arg2 msgViewStatus:(id)arg3;
+ (void)batchProcessMemberTag:(id)arg1 memberExt:(id)arg2 msgsMap:(id)arg3 memberTagAndExt:(id)arg4;
+ (id)updateMessageRecallModels:(id)arg1 msgExtensionModels:(id)arg2 msgsMap:(id)arg3 beforeBatchSave:(CDUnknownBlockType)arg4;
+ (void)receiveChatSyncData:(id)arg1 noticeHandler:(id)arg2;

@end

