//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLBaseAdapter, BLMail, NSMutableArray, UITableView;
@protocol DTMailReceiverListInterface;

@interface DTMailReceiverListPresenter : NSObject
{
    _Bool _isExistDTUsers;
    id <DTMailReceiverListInterface> _userInterface;
    UITableView *_tableView;
    NSMutableArray *_receiverData;
    NSMutableArray *_receiverSectionTitles;
    BLBaseAdapter *_receiverAdapter;
    BLMail *_mail;
}

@property(nonatomic) _Bool isExistDTUsers; // @synthesize isExistDTUsers=_isExistDTUsers;
@property(nonatomic) BLMail *mail; // @synthesize mail=_mail;
@property(retain, nonatomic) BLBaseAdapter *receiverAdapter; // @synthesize receiverAdapter=_receiverAdapter;
@property(retain, nonatomic) NSMutableArray *receiverSectionTitles; // @synthesize receiverSectionTitles=_receiverSectionTitles;
@property(retain, nonatomic) NSMutableArray *receiverData; // @synthesize receiverData=_receiverData;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <DTMailReceiverListInterface> userInterface; // @synthesize userInterface=_userInterface;
- (void).cxx_destruct;
- (void)filterDTUserWithEmails:(id)arg1 contactDictionary:(id)arg2;
- (void)buildReceiverDataWithoutMailReceiver;
- (void)buildReceiverData;
- (void)cleanup;
- (void)loadReceiverListForMail:(id)arg1 isPreview:(_Bool)arg2;
- (id)receiverAtIndexPath:(id)arg1;
- (id)receiverSectionTitleAtSection:(long long)arg1;
- (long long)receiverCountAtSection:(long long)arg1;
- (long long)receiverSectionNum;
- (_Bool)existDTUsers;

@end

