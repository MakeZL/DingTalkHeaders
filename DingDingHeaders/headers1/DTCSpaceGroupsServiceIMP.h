//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpaceGroupsServiceProtocol-Protocol.h"

@class NSString;
@protocol DTCSpaceGroupsNetworkProtocol;

@interface DTCSpaceGroupsServiceIMP : NSObject <DTCSpaceGroupsServiceProtocol>
{
    id <DTCSpaceGroupsNetworkProtocol> _networkIMP;
}

@property(retain, nonatomic) id <DTCSpaceGroupsNetworkProtocol> networkIMP; // @synthesize networkIMP=_networkIMP;
- (void).cxx_destruct;
- (void)createCoFolderWithName:(id)arg1 withUids:(id)arg2 withOrgId:(long long)arg3 shouldCreateConversation:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

