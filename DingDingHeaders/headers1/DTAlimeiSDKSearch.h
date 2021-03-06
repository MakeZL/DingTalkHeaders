//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BLMailComposeContactSearcher-Protocol.h"

@class NSArray, NSString;

@interface DTAlimeiSDKSearch : NSObject <BLMailComposeContactSearcher>
{
    long long _nextCursor;
    double _lastQueryTime;
    NSArray *_cacheSpaceIds;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSArray *cacheSpaceIds; // @synthesize cacheSpaceIds=_cacheSpaceIds;
@property(nonatomic) double lastQueryTime; // @synthesize lastQueryTime=_lastQueryTime;
@property(nonatomic) long long nextCursor; // @synthesize nextCursor=_nextCursor;
- (void).cxx_destruct;
- (id)genRecordWithBLMail:(id)arg1;
- (id)genRecordWithCSpaceDentry:(id)arg1;
- (void)searchContactsWithString:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)loadMyEnterpriseConversationsWithSize:(long long)arg1;
- (id)loadMyEnterpriseConversations;
- (id)statusList;
- (void)loadEnterpriseGroupSpacesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSpaceIDsForSearchSpaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)searchCMailWithKeyword:(id)arg1 start:(unsigned long long)arg2 size:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)searchCSpaceWithKeyword:(id)arg1 start:(unsigned long long)arg2 size:(unsigned long long)arg3 withCancelHandler:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)searchCSpaceWithKeyword:(id)arg1 start:(unsigned long long)arg2 size:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

