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

@interface DTEnterpriseSearchResultsViewController : DTGlobalSearcherBaseViewController <UITableViewDataSource, UITableViewDelegate, DTLoadMoreDelegate>
{
    _Bool _isSearching;
    NSString *_searchText;
    long long _orgId;
    NSString *_orgName;
    UITableView *_tableView;
    NSMutableArray *_datasource;
    DTLoadMoreController *_loadMoreController;
    DTEmptyResultView *_searchEmptyView;
}

@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) DTEmptyResultView *searchEmptyView; // @synthesize searchEmptyView=_searchEmptyView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)showsSearchResult:(id)arg1 withSearchText:(id)arg2;
- (void)searchEnterpriseCardWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)showsContactInfoWithRelation:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

