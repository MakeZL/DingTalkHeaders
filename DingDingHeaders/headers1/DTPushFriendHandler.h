//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTPushHandlerProtocol-Protocol.h"

@class NSString;

@interface DTPushFriendHandler : NSObject <DTPushHandlerProtocol>
{
}

- (void)dealWithActiveMobileContacts:(id)arg1;
- (void)dealWithFriendAddingAndRemoving:(id)arg1;
- (void)dealWithFriendRequests:(id)arg1;
- (void)pushCaught:(id)arg1 error:(id)arg2;
- (void)pushReceived:(id)arg1 value:(id)arg2;
- (Class)returnedValueClass;
- (id)topicName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

