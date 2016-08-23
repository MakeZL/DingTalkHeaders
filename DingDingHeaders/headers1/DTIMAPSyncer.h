//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BLSyncerProtocol-Protocol.h"

@class NSString;

@interface DTIMAPSyncer : NSObject <BLSyncerProtocol>
{
}

+ (id)sharedSyncer;
- (id)searchItemWithSearchTerm:(id)arg1 searchItemType:(int)arg2 account:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 extend:(id)arg6 fromSender:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)checkUserConfigWithEmail:(id)arg1 withPwd:(id)arg2 withProtocol:(long long)arg3 withSetting:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)refreshMailStatus:(id)arg1 account:(id)arg2 forFolder:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)buildDefaultMailReceivers:(id)arg1 account:(id)arg2;
- (void)refreshMailReceiverList:(id)arg1 account:(id)arg2 needCheckServer:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)logoutForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)sendMail:(id)arg1 forAccount:(id)arg2 fromSender:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)downloadAttachment:(id)arg1 inItem:(id)arg2 forAccount:(id)arg3 fromSender:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)sendLocalChanges:(id)arg1 inSpace:(id)arg2 forAccount:(id)arg3 fromSender:(id)arg4 successBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)loadMailDetailFor:(id)arg1 forAccount:(id)arg2 needTag:(_Bool)arg3 onlyBody:(_Bool)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)refreshItemsForFolders:(id)arg1 handleModuleType:(long long)arg2 filterType:(int)arg3 forAccount:(id)arg4 windowSize:(int)arg5 fromSender:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)syncAllFoldersForAccount:(id)arg1 fromSender:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)createAccountWithEmailAddress:(id)arg1;
- (void)loginWithAccountName:(id)arg1 password:(id)arg2 withSettingInfo:(id)arg3 openAPIToken:(id)arg4 intervalToken:(id)arg5 completionBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

