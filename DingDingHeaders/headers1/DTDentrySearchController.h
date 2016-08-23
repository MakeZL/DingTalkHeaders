//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpacePhotoBrowserDataSource-Protocol.h"
#import "DTDentrySearchInterface-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BLSpaceEntry, DTCSpaceRouteHandler, DTSearchBar, NSIndexPath, NSString, UIActivityIndicatorView, UILabel, UITableView, UIView, UIViewController;
@protocol DTDentrySearchInterfaceModule;

@interface DTDentrySearchController : NSObject <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, DTCSpacePhotoBrowserDataSource, DTDentrySearchInterface>
{
    _Bool _isShowSearchHistory;
    id <DTDentrySearchInterfaceModule> _interfaceModule;
    UITableView *_tableView;
    DTSearchBar *_searchBar;
    DTCSpaceRouteHandler *_routeHandler;
    UIView *_fullView;
    UIViewController *_outViewController;
    NSIndexPath *_selectedIndexPath;
    BLSpaceEntry *_selectedSpace;
    UIActivityIndicatorView *_indicatorView;
    UIView *_emptyView;
    UIView *_tableFooterView;
    UIView *_loadMoreFooterView;
    UIActivityIndicatorView *_searchResultLoadMoreIndicatorView;
    UILabel *_searchResultLoadMoreTitleLabel;
}

@property(retain, nonatomic) UILabel *searchResultLoadMoreTitleLabel; // @synthesize searchResultLoadMoreTitleLabel=_searchResultLoadMoreTitleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *searchResultLoadMoreIndicatorView; // @synthesize searchResultLoadMoreIndicatorView=_searchResultLoadMoreIndicatorView;
@property(retain, nonatomic) UIView *loadMoreFooterView; // @synthesize loadMoreFooterView=_loadMoreFooterView;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool isShowSearchHistory; // @synthesize isShowSearchHistory=_isShowSearchHistory;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) BLSpaceEntry *selectedSpace; // @synthesize selectedSpace=_selectedSpace;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak UIViewController *outViewController; // @synthesize outViewController=_outViewController;
@property(retain, nonatomic) UIView *fullView; // @synthesize fullView=_fullView;
@property(retain, nonatomic) DTCSpaceRouteHandler *routeHandler; // @synthesize routeHandler=_routeHandler;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <DTDentrySearchInterfaceModule> interfaceModule; // @synthesize interfaceModule=_interfaceModule;
- (void).cxx_destruct;
- (id)sourceSpace;
- (unsigned long long)sourceOperationType;
- (id)photoRequestHeader;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photoes;
- (unsigned long long)currentPhotoIndex;
- (unsigned long long)photoCounts;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)utFromWithSpaceEntry:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelBtnClicked:(id)arg1;
- (void)didClearHistoryKeyword;
- (_Bool)isActive;
- (void)setUnActive:(id)arg1;
- (void)setActive:(id)arg1;
- (void)showMoreResultsFail;
- (void)showMoreResultsSuccess:(_Bool)arg1;
- (void)didSearchFail;
- (void)didSearchSuccess;
- (void)onLoadMoreClicked:(id)arg1;
- (void)stopLoadMoreAnimating;
- (void)startLoadMoreAnimating;
- (void)stopIndicatorAnimating;
- (void)startIndicatorAnimating;
- (void)configTableFooterView;
- (void)clearHistoryKeywords:(id)arg1;
- (void)hideEmptyVIew;
- (void)showEmptyViewWithTitle:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

