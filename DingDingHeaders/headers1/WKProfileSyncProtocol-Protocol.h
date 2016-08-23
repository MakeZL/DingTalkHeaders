//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WKBizConversation;

@protocol WKProfileSyncProtocol <NSObject>
- (void)syncUsersInDatabase;
- (void)syncUsersByReceiverList:(NSArray *)arg1;
- (void)syncUsersByMessageList:(NSArray *)arg1;
- (void)syncUsersByConversations:(NSArray *)arg1;
- (void)syncUsersByConversation:(WKBizConversation *)arg1;
- (void)syncUserByOpenId:(long long)arg1 version:(long long)arg2;
@end

