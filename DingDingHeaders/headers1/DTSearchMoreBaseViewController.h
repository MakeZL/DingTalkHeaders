//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTGlobalSearcherBaseViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTLoadMoreController, NSMutableArray, NSString, UITableView;

@interface DTSearchMoreBaseViewController : DTGlobalSearcherBaseViewController <UITableViewDataSource, UITableViewDelegate, DTLoadMoreDelegate>
{
    _Bool _isSearching;
    NSString *_searchText;
    DTLoadMoreController *_loadMoreController;
    NSMutableArray *_datasource;
    UITableView *_tableView;
    DTEmptyResultView *_searchEmptyView;
}

@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) DTEmptyResultView *searchEmptyView; // @synthesize searchEmptyView=_searchEmptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)searchDataWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)showsSearchMailResult:(id)arg1 withSearchText:(id)arg2;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)loadDataSource;
- (void)loadCompoment;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

