//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BusinessConfCellDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBusinessConfMainHeaderInfoView, DTQuotaManager, NSMutableArray, NSString, UITableView, UIView;

@interface DTBusinessConfMainViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, BusinessConfCellDelegate, TTTAttributedLabelDelegate>
{
    _Bool _hasMoreOnCall;
    _Bool _hasMoreWillCall;
    _Bool _hasMoreEndCall;
    _Bool _hasMoreCancelCall;
    _Bool _extendOnCall;
    _Bool _extendWillCall;
    _Bool _extendEndCall;
    _Bool _extendCancelCall;
    long long _corpId;
    UITableView *_tableView;
    UIView *_backGroundView;
    DTBusinessConfMainHeaderInfoView *_headerView;
    NSMutableArray *_onBusinessConfArray;
    NSMutableArray *_willBusinessConfArray;
    NSMutableArray *_endBusinessConfArray;
    NSMutableArray *_cancelBusinessConfArray;
    long long _lastOnCallTime;
    long long _lastwillCallTime;
    long long _lastEndCallTime;
    long long _lastHasCancelTime;
    DTQuotaManager *_quotaManager;
}

@property(retain, nonatomic) DTQuotaManager *quotaManager; // @synthesize quotaManager=_quotaManager;
@property(nonatomic) _Bool extendCancelCall; // @synthesize extendCancelCall=_extendCancelCall;
@property(nonatomic) _Bool extendEndCall; // @synthesize extendEndCall=_extendEndCall;
@property(nonatomic) _Bool extendWillCall; // @synthesize extendWillCall=_extendWillCall;
@property(nonatomic) _Bool extendOnCall; // @synthesize extendOnCall=_extendOnCall;
@property(nonatomic) _Bool hasMoreCancelCall; // @synthesize hasMoreCancelCall=_hasMoreCancelCall;
@property(nonatomic) _Bool hasMoreEndCall; // @synthesize hasMoreEndCall=_hasMoreEndCall;
@property(nonatomic) _Bool hasMoreWillCall; // @synthesize hasMoreWillCall=_hasMoreWillCall;
@property(nonatomic) _Bool hasMoreOnCall; // @synthesize hasMoreOnCall=_hasMoreOnCall;
@property(nonatomic) long long lastHasCancelTime; // @synthesize lastHasCancelTime=_lastHasCancelTime;
@property(nonatomic) long long lastEndCallTime; // @synthesize lastEndCallTime=_lastEndCallTime;
@property(nonatomic) long long lastwillCallTime; // @synthesize lastwillCallTime=_lastwillCallTime;
@property(nonatomic) long long lastOnCallTime; // @synthesize lastOnCallTime=_lastOnCallTime;
@property(retain, nonatomic) NSMutableArray *cancelBusinessConfArray; // @synthesize cancelBusinessConfArray=_cancelBusinessConfArray;
@property(retain, nonatomic) NSMutableArray *endBusinessConfArray; // @synthesize endBusinessConfArray=_endBusinessConfArray;
@property(retain, nonatomic) NSMutableArray *willBusinessConfArray; // @synthesize willBusinessConfArray=_willBusinessConfArray;
@property(retain, nonatomic) NSMutableArray *onBusinessConfArray; // @synthesize onBusinessConfArray=_onBusinessConfArray;
@property(retain, nonatomic) DTBusinessConfMainHeaderInfoView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)joinBusinessConf:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissBusinessConf;
- (void)extendCell:(id)arg1;
- (void)addMoreInfo:(long long)arg1;
- (void)createBusinessConference;
- (void)cancel:(id)arg1;
- (void)confPopBack:(id)arg1;
- (void)confStatusChange:(id)arg1;
- (void)updateConferenceCounter:(id)arg1;
- (void)reloadData:(id)arg1 withSection:(long long)arg2 more:(_Bool)arg3;
- (void)loadCancelCallDataMore:(_Bool)arg1;
- (void)loadEndCallDataMore:(_Bool)arg1;
- (void)loadWillCallDataMore:(_Bool)arg1;
- (void)loadOnCallDataMore:(_Bool)arg1;
- (void)loadDataMore:(_Bool)arg1;
- (void)loadBusinessStaticsInfo;
- (void)loadQuotaInfo:(_Bool)arg1;
- (void)loadCompoment;
- (void)loadNotification;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

