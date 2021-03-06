//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTLoadMoreController, DTSectionInfo, NSArray, NSString, UIActivityIndicatorView, UITableView, UIView;

@interface DTFriendRequestViewController : DTContactBaseViewController <UITableViewDataSource, UITableViewDelegate, DTLoadMoreDelegate>
{
    long long _unreadCount;
    UITableView *_tableView;
    NSArray *_datasource;
    DTSectionInfo *_requestSection;
    DTLoadMoreController *_loadMoreController;
    UIActivityIndicatorView *_indicatorView;
    UIView *_headerView;
    DTEmptyResultView *_emptyResultView;
}

@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTSectionInfo *requestSection; // @synthesize requestSection=_requestSection;
@property(copy, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (void)hideEmptyView:(_Bool)arg1;
- (id)sourceName:(unsigned long long)arg1;
- (void)sendFriendRequest:(id)arg1 item:(id)arg2 cell:(id)arg3;
- (void)acceptFriendRequest:(id)arg1 item:(id)arg2 cell:(id)arg3;
- (id)authOrgNames:(id)arg1;
- (void)showsFriendRequestListBeforeCursor:(long long)arg1 size:(long long)arg2;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataSource;
- (void)loadComponent;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

