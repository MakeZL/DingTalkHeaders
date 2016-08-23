//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class BLFolder, DTIMAPAccount, NSArray;

@interface DTIMAPMoveOrDeleteTask : BLBaseAPITask
{
    NSArray *_mails;
    BLFolder *_folder;
    BLFolder *_destFolder;
    long long _itemAction;
    DTIMAPAccount *_imapAccount;
}

@property(retain, nonatomic) DTIMAPAccount *imapAccount; // @synthesize imapAccount=_imapAccount;
@property(nonatomic) long long itemAction; // @synthesize itemAction=_itemAction;
@property(retain, nonatomic) BLFolder *destFolder; // @synthesize destFolder=_destFolder;
@property(retain, nonatomic) BLFolder *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSArray *mails; // @synthesize mails=_mails;
- (void).cxx_destruct;
- (unsigned long long)canRetryWithError:(id)arg1;
- (void)processMove;
- (void)processSetReadStatus;
- (void)processDelete;
- (void)process;
- (void)dealloc;

@end
