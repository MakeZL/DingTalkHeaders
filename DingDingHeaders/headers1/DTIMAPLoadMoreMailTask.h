//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class BLFolder, DTIMAPAccount, NSArray, NSMutableArray;

@interface DTIMAPLoadMoreMailTask : BLBaseAPITask
{
    BLFolder *_folder;
    NSArray *_folders;
    NSMutableArray *_shouldContinueList;
    NSMutableArray *_forceFullSyncList;
    unsigned long long _newItemCount;
    DTIMAPAccount *_imapAccount;
}

@property(retain, nonatomic) DTIMAPAccount *imapAccount; // @synthesize imapAccount=_imapAccount;
@property(nonatomic) unsigned long long newItemCount; // @synthesize newItemCount=_newItemCount;
@property(retain, nonatomic) NSMutableArray *forceFullSyncList; // @synthesize forceFullSyncList=_forceFullSyncList;
@property(retain, nonatomic) NSMutableArray *shouldContinueList; // @synthesize shouldContinueList=_shouldContinueList;
@property(retain, nonatomic) NSArray *folders; // @synthesize folders=_folders;
@property(retain, nonatomic) BLFolder *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (unsigned long long)canRetryWithError:(id)arg1;
- (void)fetchMailInfoWithUIDSet:(id)arg1 withFolder:(id)arg2;
- (void)fetchMailUIDSWithSet:(id)arg1 withFolder:(id)arg2;
- (void)process;
- (void)dealloc;

@end

