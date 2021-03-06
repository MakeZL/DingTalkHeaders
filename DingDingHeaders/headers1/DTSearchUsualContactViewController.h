//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTLoadMoreController, DTTableLoadingView, NSArray, NSString, UITableView;

@interface DTSearchUsualContactViewController : DTContactBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, DTLoadMoreDelegate>
{
    _Bool _noMoreAlias;
    NSString *_searchText;
    UITableView *_tableView;
    NSArray *_datasource;
    DTEmptyResultView *_searchEmptyView;
    DTLoadMoreController *_loadMoreController;
    DTTableLoadingView *_loadingView;
}

@property(nonatomic) _Bool noMoreAlias; // @synthesize noMoreAlias=_noMoreAlias;
@property(retain, nonatomic) DTTableLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTEmptyResultView *searchEmptyView; // @synthesize searchEmptyView=_searchEmptyView;
@property(copy, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)showsMoreSearchResultOfDingWithSearchText:(id)arg1;
- (void)showsMoreSearchResultOfChatWithSearchText:(id)arg1 uid:(long long)arg2;
- (void)showsContactInfoWithMobileContact:(id)arg1 uid:(long long)arg2;
- (void)showsContactInfoWithUID:(long long)arg1 item:(id)arg2;
- (id)showUsualContacts:(id)arg1 withSearchText:(id)arg2;
- (id)showsAliasContacts:(id)arg1 searchText:(id)arg2;
- (void)showsSearchResultsWithSearchText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)loadDataSource;
- (void)loadComponent;
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

