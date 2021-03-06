//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol WKBizConversation, WKBizMessage;

@protocol WKConversationServiceProtocol <NSObject>
- (void)cleanInactiveConversations:(NSArray *)arg1;
- (NSArray *)findInactiveConversationIdsWithStartIndex:(long long)arg1 beforeTime:(long long)arg2;
- (NSArray *)findInvisibleConversationIdsWithStartIndex:(long long)arg1;
- (void)childrenWithConversationId:(NSString *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (NSArray *)childrenWithConversationId:(NSString *)arg1;
- (_Bool)saveLocalConversation:(id <WKBizConversation>)arg1;
- (void)verifyQRCode:(NSString *)arg1 successBlock:(void (^)(long long, id <WKBizConversation>, _Bool))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)getQRCodeWithConversionId:(NSString *)arg1 successBlock:(void (^)(NSString *, long long))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)updateLatestMessageJson:(NSString *)arg1 conversationId:(NSString *)arg2;
- (long long)loadLatestMessageId:(NSString *)arg1;
- (void)setConversationMaxCount:(int)arg1;
- (void)setTopConversation:(NSString *)arg1 isTop:(_Bool)arg2 successBlock:(void (^)(NSNumber *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateAddMemberPermission:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateTag:(long long)arg1 extension:(NSDictionary *)arg2 ofConversation:(NSString *)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)updatePrivateExtension:(NSDictionary *)arg1 withOpenIds:(NSArray *)arg2 ofConversation:(NSString *)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)updateExtensionWithInfos:(NSDictionary *)arg1 andRemoveKeys:(NSArray *)arg2 ofConversation:(NSString *)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)updateExtension:(NSDictionary *)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateTag:(long long)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)setConversationsToActive:(NSArray *)arg1;
- (void)setConversationToActive:(NSString *)arg1;
- (void)setHidden:(_Bool)arg1 conversationIds:(NSArray *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateTypingStatusOfConversation:(NSString *)arg1 withType:(long long)arg2 andCommand:(long long)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)updateNotificationSound:(NSString *)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateNotification:(_Bool)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateDraft:(NSString *)arg1 atList:(NSDictionary *)arg2 ofConversation:(NSString *)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)updateDraft:(NSString *)arg1 ofConversation:(NSString *)arg2 message:(id <WKBizMessage>)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)updateIcon:(NSString *)arg1 ofConversation:(NSString *)arg2 message:(id <WKBizMessage>)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)updateTitle:(NSString *)arg1 ofConversation:(NSString *)arg2 message:(id <WKBizMessage>)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (_Bool)resetAllUnreadMessagesCount;
- (void)resetUnreadMessagesCountWithCids:(NSArray *)arg1;
- (void)resetUnreadMessagesCount:(NSString *)arg1;
- (unsigned long long)allUnreadAtMeMessagesCount;
- (unsigned long long)allUnreadMessagesCount;
- (void)updateOwner:(long long)arg1 ofGroup:(NSString *)arg2 message:(id <WKBizMessage>)arg3 successBlock:(void (^)(id <WKBizConversation>))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)disbandGroup:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (_Bool)markQuitedTheGroup:(NSString *)arg1;
- (void)quitGroupQuiet:(NSString *)arg1 message:(id <WKBizMessage>)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)quitGroup:(NSString *)arg1 message:(id <WKBizMessage>)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateGroupLevel:(int)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)updateMemberLimit:(int)arg1 ofConversation:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)membersOfGroup:(NSString *)arg1 offset:(long long)arg2 size:(int)arg3 successBlock:(void (^)(NSArray *))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)removeMembers:(NSArray *)arg1 fromGroup:(NSString *)arg2 message:(id <WKBizMessage>)arg3 receivers:(NSArray *)arg4 successBlock:(void (^)(void))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)removeMembers:(NSArray *)arg1 fromGroup:(NSString *)arg2 message:(id <WKBizMessage>)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (void)addMembers:(NSArray *)arg1 toGroup:(NSString *)arg2 message:(id <WKBizMessage>)arg3 successBlock:(void (^)(void))arg4 failureBlock:(void (^)(id <IMError>))arg5;
- (_Bool)clearLocalConversation:(NSString *)arg1;
- (void)clearConversation:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)removeAndClearConversation:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)removeConversations:(NSArray *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)removeConversation:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)createGroupWithConversation:(id <WKBizConversation>)arg1 message:(id <WKBizMessage>)arg2 successBlock:(void (^)(id <WKBizConversation>))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)createGroupWithOpenIds:(NSArray *)arg1 title:(NSString *)arg2 icon:(NSString *)arg3 tag:(int)arg4 memberLimit:(int)arg5 groupLevel:(int)arg6 extension:(NSDictionary *)arg7 message:(id <WKBizMessage>)arg8 successBlock:(void (^)(id <WKBizConversation>))arg9 failureBlock:(void (^)(id <IMError>))arg10;
- (void)createGroupWithOpenIds:(NSArray *)arg1 title:(NSString *)arg2 icon:(NSString *)arg3 tag:(long long)arg4 extension:(NSDictionary *)arg5 message:(id <WKBizMessage>)arg6 successBlock:(void (^)(id <WKBizConversation>))arg7 failureBlock:(void (^)(id <IMError>))arg8;
- (void)createGroupWithOpenIds:(NSArray *)arg1 title:(NSString *)arg2 icon:(NSString *)arg3 message:(id <WKBizMessage>)arg4 successBlock:(void (^)(id <WKBizConversation>))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (id <WKBizConversation>)createSingleConversationWithOtherOpenId:(long long)arg1 title:(NSString *)arg2 isSpecialized:(_Bool)arg3 icon:(NSString *)arg4;
- (id <WKBizConversation>)createSingleConversationWithOtherOpenId:(long long)arg1 title:(NSString *)arg2 icon:(NSString *)arg3;
- (NSArray *)loadLocalLatestMTMConversations:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)loadConversationTagAndExtensionFromServer:(NSString *)arg1 successBlock:(void (^)(id <WKBizConversation>))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)loadConversation:(NSString *)arg1 successBlock:(void (^)(id <WKBizConversation>))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)loadOwnGroupConversationsWithSize:(unsigned int)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)loadGroupConversationsWithSuccessBlock:(void (^)(NSArray *))arg1 failureBlock:(void (^)(id <IMError>))arg2;
- (void)loadLatestConversationsWithCount:(int)arg1 type:(unsigned long long)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (NSArray *)conversationsWithSortDescriptors:(NSArray *)arg1 statuses:(NSArray *)arg2 tag:(long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned long long)arg5;
- (NSArray *)conversationsWithSortDescriptors:(NSArray *)arg1 statuses:(NSArray *)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (NSArray *)conversationsWithSortDescriptors:(NSArray *)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (NSArray *)loadLocalConversations:(NSArray *)arg1;
- (id <WKBizConversation>)conversationWithConversationId:(NSString *)arg1;
@end

