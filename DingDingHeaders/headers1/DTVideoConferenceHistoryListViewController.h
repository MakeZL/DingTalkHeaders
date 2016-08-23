//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTButtonView, DTEmptyResultView, DTLoadMoreController, NSArray, NSString, UIActivityIndicatorView, UITableView;

@interface DTVideoConferenceHistoryListViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, DTLoadMoreDelegate>
{
    UITableView *_historyListTableView;
    NSArray *_historyDataSource;
    UIActivityIndicatorView *_indicatorView;
    DTLoadMoreController *_loadMoreController;
    DTButtonView *_launchBtn;
    DTEmptyResultView *_emptyView;
}

@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTButtonView *launchBtn; // @synthesize launchBtn=_launchBtn;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(copy, nonatomic) NSArray *historyDataSource; // @synthesize historyDataSource=_historyDataSource;
@property(retain, nonatomic) UITableView *historyListTableView; // @synthesize historyListTableView=_historyListTableView;
- (void).cxx_destruct;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)launchVideoConference:(id)arg1;
- (void)checkEmptyView;
- (id)showVideoConferenceItemsWithConfList:(id)arg1 insert:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadDataWithCursor:(long long)arg1;
- (void)videoRecordInsert:(id)arg1;
- (void)loadGuide;
- (void)loadCompoment;
- (void)loadNotify;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
