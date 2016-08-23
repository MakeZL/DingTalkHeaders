//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTConferenceInfoDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "conferenceDataRefreshDelegate-Protocol.h"

@class DTConferenceHistoryModel, DTMenuButtonView, NSMutableArray, NSString, UIButton, UITableView;

@interface DTConferenceDetailViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, DTConferenceInfoDelegate, conferenceDataRefreshDelegate>
{
    DTConferenceHistoryModel *_historyInfo;
    NSMutableArray *_detailArray;
    UITableView *_historyDetailTableView;
    DTMenuButtonView *_bottomMenuView;
    UIButton *_msgButton;
    UIButton *_dingButton;
    UIButton *_singleConferenceButton;
    UIButton *_mutleConferenceButton;
    long long _navStackCount;
}

@property(nonatomic) long long navStackCount; // @synthesize navStackCount=_navStackCount;
@property(retain, nonatomic) UIButton *mutleConferenceButton; // @synthesize mutleConferenceButton=_mutleConferenceButton;
@property(retain, nonatomic) UIButton *singleConferenceButton; // @synthesize singleConferenceButton=_singleConferenceButton;
@property(retain, nonatomic) UIButton *dingButton; // @synthesize dingButton=_dingButton;
@property(retain, nonatomic) UIButton *msgButton; // @synthesize msgButton=_msgButton;
@property(retain, nonatomic) DTMenuButtonView *bottomMenuView; // @synthesize bottomMenuView=_bottomMenuView;
@property(retain, nonatomic) UITableView *historyDetailTableView; // @synthesize historyDetailTableView=_historyDetailTableView;
@property(retain, nonatomic) NSMutableArray *detailArray; // @synthesize detailArray=_detailArray;
@property(retain, nonatomic) DTConferenceHistoryModel *historyInfo; // @synthesize historyInfo=_historyInfo;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (id)targetUids;
- (_Bool)isSingleType;
- (_Bool)isModal;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)avtarTap:(long long)arg1;
- (void)secretButtonPressed:(id)arg1;
- (void)mulitVoipPressed:(id)arg1;
- (void)singleVoipPressed:(id)arg1;
- (void)makeCall;
- (void)conferenceButtonPressed:(id)arg1;
- (void)dingButtonPressed:(id)arg1;
- (void)msgButtonPressed:(id)arg1;
- (id)nItemsArray:(id)arg1 count:(int)arg2 row:(int)arg3;
- (id)avatarModelWithMobielContact:(id)arg1;
- (id)avatarModelWithFriend:(id)arg1;
- (id)avatarModelWithEnterpriseCard:(id)arg1;
- (id)getUsualContact:(long long)arg1;
- (void)loadUserInfoView;
- (void)loadCompoment;
- (void)configBottomViewData;
- (void)refreshData:(id)arg1;
- (void)loadData;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

