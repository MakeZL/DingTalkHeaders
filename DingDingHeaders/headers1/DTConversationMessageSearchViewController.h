//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DTBizConversation, DTEmptyResultView, DTLoadMoreController, DTSearchBar, NSArray, NSString, UIActivityIndicatorView, UIView;

@interface DTConversationMessageSearchViewController : DTTableViewController <UISearchBarDelegate, DTLoadMoreDelegate>
{
    _Bool _firstCallWillAppear;
    NSArray *_messageList;
    NSArray *_messageRowIds;
    NSString *_messageTabelName;
    DTSearchBar *_clientSearchBar;
    UIActivityIndicatorView *_searchIndicator;
    NSString *_searchText;
    DTLoadMoreController *_searchLoadMoreController;
    DTEmptyResultView *_emptyView;
    DTBizConversation *_conversation;
    UIView *_statusBarBackgroundView;
}

@property(nonatomic) _Bool firstCallWillAppear; // @synthesize firstCallWillAppear=_firstCallWillAppear;
@property(retain, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTLoadMoreController *searchLoadMoreController; // @synthesize searchLoadMoreController=_searchLoadMoreController;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) UIActivityIndicatorView *searchIndicator; // @synthesize searchIndicator=_searchIndicator;
@property(retain, nonatomic) DTSearchBar *clientSearchBar; // @synthesize clientSearchBar=_clientSearchBar;
@property(copy, nonatomic) NSString *messageTabelName; // @synthesize messageTabelName=_messageTabelName;
@property(copy, nonatomic) NSArray *messageRowIds; // @synthesize messageRowIds=_messageRowIds;
@property(retain, nonatomic) NSArray *messageList; // @synthesize messageList=_messageList;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 selectedCell:(id)arg2 cellItem:(id)arg3;
- (void)tableViewDidScroll:(id)arg1;
- (void)updateUI;
- (void)searchResultsWithSearchText;
- (void)showsSearchResultsWithMessages:(id)arg1 inConversation:(id)arg2 searchText:(id)arg3 loadMore:(_Bool)arg4;
- (id)contactsDicWithMessages:(id)arg1;
- (void)fetchMessages;
- (id)sortMessagesAndLimit:(id)arg1;
- (id)messageRowIdsWithLoadMoreController:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)beginSearch;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)tableViewBeginDragging:(id)arg1;
- (void)hideKeyboard:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

