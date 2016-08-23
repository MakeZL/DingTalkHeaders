//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseModule.h"

@interface BLFolderModule : BLBaseModule
{
}

- (void)updateFolderModificationStatus:(id)arg1 status:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)unreadCountForUserCareFolders:(id)arg1;
- (_Bool)showDesktopBadgeForAccount:(id)arg1;
- (void)setShowDesktopBadge:(_Bool)arg1 account:(id)arg2;
- (void)updateLastVisitDate:(id)arg1;
- (id)findFoldersWithAncestorTypes:(id)arg1 ancestorType:(_Bool)arg2 path:(_Bool)arg3 account:(id)arg4;
- (id)findFirstMailFolderWithFolderID:(id)arg1 account:(id)arg2;
- (id)findFolderWithFolderUUID:(id)arg1 account:(id)arg2;
- (id)findFirstWithFolderID:(id)arg1 apiFolderType:(long long)arg2 account:(id)arg3;
- (id)allCalendarFoldersForAccount:(id)arg1;
- (id)findFirstWithType:(long long)arg1 account:(id)arg2;
- (id)findUserDefineFoldersWithAccount:(id)arg1;
- (id)allFoldersWithAccount:(id)arg1;
- (id)findContactFolderWithAccount:(id)arg1 withType:(long long)arg2;
- (id)contactFoldersWithAccount:(id)arg1;
- (id)allMailFolderWithAccount:(id)arg1;
- (id)trashFolderUUIDForAccount:(id)arg1;
- (id)allPushFoldersWithAccount:(id)arg1;
- (id)defaultMailFolder:(id)arg1;
- (void)refreshData:(id)arg1;
- (void)refreshAllFoldersForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

