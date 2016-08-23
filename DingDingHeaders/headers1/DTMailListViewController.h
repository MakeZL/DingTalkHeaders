//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BLFolderListViewControllerDelegate-Protocol.h"
#import "BLMailCellDelegate-Protocol.h"
#import "BLMailDetailViewControllerDelegate-Protocol.h"
#import "BLMailSearchDisplayViewControllerDelegate-Protocol.h"
#import "BLPhotoBrowserDataSource-Protocol.h"
#import "DTTipsViewDelegate-Protocol.h"
#import "SWTableViewCellDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BLAccount, BLFolder, BLMail, BLMailAdapter, DTBadgeView, DTBizConversation, DTMailSearchDisplayViewController, DTSearchBar, DTSubMailListTableHeaderView, DTTipsView, NSIndexPath, NSMutableArray, NSMutableSet, NSString, UIActivityIndicatorView, UIBarButtonItem, UILabel, UIRefreshControl, UITableView, UIToolbar, UIView;
@protocol BLFileBasedInterfaceRouteDelegate, BLMailListViewControllerDelegate;

@interface DTMailListViewController : DTViewController <UISearchBarDelegate, UISearchDisplayDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, BLMailDetailViewControllerDelegate, BLMailSearchDisplayViewControllerDelegate, SWTableViewCellDelegate, BLFolderListViewControllerDelegate, BLMailCellDelegate, BLPhotoBrowserDataSource, DTTipsViewDelegate>
{
    _Bool _isSwitchFolderHide;
    _Bool _isBottomToolBarHide;
    _Bool _isSearchBarHide;
    _Bool _isLoadingMore;
    _Bool _isPullingUp;
    _Bool _isSearchLoadingMore;
    _Bool _isSearchingOnline;
    _Bool _isThreading;
    _Bool _folderListIsMoving;
    _Bool _refreshingAccountFolder;
    _Bool _refreshingImportantMail;
    _Bool _hasMoreImportantMail;
    _Bool _isImportantMailMode;
    _Bool _hasShowImportantMailGuide;
    _Bool _willDisappear;
    _Bool _isOpenDebugTool;
    int _mailListViewControllerType;
    int _mailListMode;
    BLFolder *_folder;
    NSString *_searchTerm;
    long long _searchScope;
    id <BLMailListViewControllerDelegate> _delegate;
    BLMail *_parentMail;
    NSString *_sessionId;
    NSString *_sessionTitle;
    BLAccount *_account;
    UITableView *_tableView;
    UIRefreshControl *_refreshControl;
    BLMailAdapter *_adapter;
    UIBarButtonItem *_folderBarButtonItem;
    NSIndexPath *_currentIndexPath;
    UITableView *_currentTableView;
    UIView *_loadingMoreView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_titleLabel;
    NSMutableArray *_selectedMails;
    DTBadgeView *_badgeView;
    UIToolbar *_bottomBar;
    UIBarButtonItem *_composeBarButtonItem;
    UIBarButtonItem *_importantBarButtonItem;
    NSMutableArray *_photoDataSource;
    unsigned long long _curPhotoIndex;
    DTSubMailListTableHeaderView *_subMailListTableHeaderView;
    DTSearchBar *_searchBar;
    DTMailSearchDisplayViewController *_mailSearchController;
    NSMutableArray *_searchResults;
    long long _searchResultOffset;
    long long _searchResultTotalCount;
    UILabel *_searchHintLabel;
    UILabel *_defaultSearchHintLabel;
    UILabel *_searchResultLoadMoreTitleLabel;
    UIActivityIndicatorView *_searchIndicator;
    UIView *_searchResultdDefaultFooterView;
    UIView *_searchResultdLoadMoreFooterView;
    UIActivityIndicatorView *_searchResultLoadMoreIndicatorView;
    DTTipsView *_tipsView;
    NSMutableArray *_excludeMailUUIDs;
    NSMutableSet *_refreshingFolderUUIDs;
    UIView *_tableHeaderView;
    id <BLFileBasedInterfaceRouteDelegate> _spaceRouteHandler;
    DTBizConversation *_conversation;
    struct CGPoint _startPoint;
}

@property(nonatomic) _Bool isOpenDebugTool; // @synthesize isOpenDebugTool=_isOpenDebugTool;
@property(nonatomic) _Bool willDisappear; // @synthesize willDisappear=_willDisappear;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) id <BLFileBasedInterfaceRouteDelegate> spaceRouteHandler; // @synthesize spaceRouteHandler=_spaceRouteHandler;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) _Bool hasShowImportantMailGuide; // @synthesize hasShowImportantMailGuide=_hasShowImportantMailGuide;
@property(nonatomic) _Bool isImportantMailMode; // @synthesize isImportantMailMode=_isImportantMailMode;
@property(nonatomic) _Bool hasMoreImportantMail; // @synthesize hasMoreImportantMail=_hasMoreImportantMail;
@property(nonatomic) _Bool refreshingImportantMail; // @synthesize refreshingImportantMail=_refreshingImportantMail;
@property(nonatomic) _Bool refreshingAccountFolder; // @synthesize refreshingAccountFolder=_refreshingAccountFolder;
@property(retain, nonatomic) NSMutableSet *refreshingFolderUUIDs; // @synthesize refreshingFolderUUIDs=_refreshingFolderUUIDs;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) _Bool folderListIsMoving; // @synthesize folderListIsMoving=_folderListIsMoving;
@property(nonatomic) _Bool isThreading; // @synthesize isThreading=_isThreading;
@property(retain, nonatomic) NSMutableArray *excludeMailUUIDs; // @synthesize excludeMailUUIDs=_excludeMailUUIDs;
@property(retain, nonatomic) DTTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIActivityIndicatorView *searchResultLoadMoreIndicatorView; // @synthesize searchResultLoadMoreIndicatorView=_searchResultLoadMoreIndicatorView;
@property(retain, nonatomic) UIView *searchResultdLoadMoreFooterView; // @synthesize searchResultdLoadMoreFooterView=_searchResultdLoadMoreFooterView;
@property(retain, nonatomic) UIView *searchResultdDefaultFooterView; // @synthesize searchResultdDefaultFooterView=_searchResultdDefaultFooterView;
@property(retain, nonatomic) UIActivityIndicatorView *searchIndicator; // @synthesize searchIndicator=_searchIndicator;
@property(retain, nonatomic) UILabel *searchResultLoadMoreTitleLabel; // @synthesize searchResultLoadMoreTitleLabel=_searchResultLoadMoreTitleLabel;
@property(retain, nonatomic) UILabel *defaultSearchHintLabel; // @synthesize defaultSearchHintLabel=_defaultSearchHintLabel;
@property(retain, nonatomic) UILabel *searchHintLabel; // @synthesize searchHintLabel=_searchHintLabel;
@property(nonatomic) long long searchResultTotalCount; // @synthesize searchResultTotalCount=_searchResultTotalCount;
@property(nonatomic) long long searchResultOffset; // @synthesize searchResultOffset=_searchResultOffset;
@property(nonatomic) _Bool isSearchingOnline; // @synthesize isSearchingOnline=_isSearchingOnline;
@property(nonatomic) _Bool isSearchLoadingMore; // @synthesize isSearchLoadingMore=_isSearchLoadingMore;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) DTMailSearchDisplayViewController *mailSearchController; // @synthesize mailSearchController=_mailSearchController;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) DTSubMailListTableHeaderView *subMailListTableHeaderView; // @synthesize subMailListTableHeaderView=_subMailListTableHeaderView;
@property(nonatomic) unsigned long long curPhotoIndex; // @synthesize curPhotoIndex=_curPhotoIndex;
@property(retain, nonatomic) NSMutableArray *photoDataSource; // @synthesize photoDataSource=_photoDataSource;
@property(retain, nonatomic) UIBarButtonItem *importantBarButtonItem; // @synthesize importantBarButtonItem=_importantBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *composeBarButtonItem; // @synthesize composeBarButtonItem=_composeBarButtonItem;
@property(retain, nonatomic) UIToolbar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSMutableArray *selectedMails; // @synthesize selectedMails=_selectedMails;
@property(nonatomic) _Bool isPullingUp; // @synthesize isPullingUp=_isPullingUp;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *loadingMoreView; // @synthesize loadingMoreView=_loadingMoreView;
@property(retain, nonatomic) UITableView *currentTableView; // @synthesize currentTableView=_currentTableView;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UIBarButtonItem *folderBarButtonItem; // @synthesize folderBarButtonItem=_folderBarButtonItem;
@property(retain, nonatomic) BLMailAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *sessionTitle; // @synthesize sessionTitle=_sessionTitle;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) BLMail *parentMail; // @synthesize parentMail=_parentMail;
@property(nonatomic) __weak id <BLMailListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSearchBarHide; // @synthesize isSearchBarHide=_isSearchBarHide;
@property(nonatomic) _Bool isBottomToolBarHide; // @synthesize isBottomToolBarHide=_isBottomToolBarHide;
@property(nonatomic) _Bool isSwitchFolderHide; // @synthesize isSwitchFolderHide=_isSwitchFolderHide;
@property(nonatomic) int mailListMode; // @synthesize mailListMode=_mailListMode;
@property(nonatomic) int mailListViewControllerType; // @synthesize mailListViewControllerType=_mailListViewControllerType;
@property(nonatomic) long long searchScope; // @synthesize searchScope=_searchScope;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) BLFolder *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (void)syncFolderMailStatus;
- (void)fetchMailSummary;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photoes;
- (unsigned long long)currentPhotoIndex;
- (unsigned long long)photoCounts;
- (void)folderListViewDidSelectedFolder:(id)arg1;
- (_Bool)mailDetailViewController:(id)arg1 allowNavigateToThreading:(id)arg2;
- (void)mailDetailViewController:(id)arg1 gotoPreivousMail:(id)arg2;
- (void)mailDetailViewController:(id)arg1 gotoNextMail:(id)arg2;
- (id)mailDetailViewController:(id)arg1 previousMail:(id)arg2;
- (id)mailDetailViewController:(id)arg1 nextMail:(id)arg2;
- (void)mailDetailViewController:(id)arg1 didClickReceiver:(id)arg2 forMail:(id)arg3;
- (void)mailDetailViewController:(id)arg1 didClickSenderForMail:(id)arg2;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (_Bool)swipeableTableViewCell:(id)arg1 canSwipeToState:(long long)arg2;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidKeyboardReturnClicked:(id)arg1;
- (void)filterContentForSearchTerm:(id)arg1 scope:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)attachmentListView:(id)arg1 indexPath:(id)arg2 willPreviewAttachment:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)mailCellUnreadMemberListTapped:(id)arg1 indexPath:(id)arg2;
- (void)buildBackButton;
- (void)handleTapFooterView:(id)arg1;
- (void)searchItemPressed:(id)arg1;
- (void)showActionSheetForOutBoxForMail:(id)arg1;
- (void)hideRedBallAtFolderButton;
- (void)showBadgeAtFolderButton:(long long)arg1;
- (void)tipsViewDidClick:(id)arg1;
- (void)moveToTrash;
- (void)deleteFromTrash;
- (void)starButtonTaped:(id)arg1;
- (void)deleteButtonTaped:(id)arg1;
- (void)goDownBarButtonTaped:(id)arg1;
- (void)goUpBarButtonTaped:(id)arg1;
- (void)onImportantMailsButtonTapped:(id)arg1;
- (void)composeBarButtonTaped:(id)arg1;
- (void)folderBarButtonTaped:(id)arg1;
- (void)gotoDetailPage:(id)arg1 animated:(_Bool)arg2;
- (void)gotoSubmailList:(id)arg1 animated:(_Bool)arg2;
- (void)gotoDetailOrSubMailList:(id)arg1 animated:(_Bool)arg2;
- (void)popToBack;
- (void)receiveModifiedMail:(id)arg1;
- (void)loadMoreMails;
- (void)loadMoreSearchResults;
- (void)loadImportantMails:(_Bool)arg1;
- (void)checkFolderAndRefreshMails;
- (void)refreshFolder;
- (void)refreshMailIfNeeded;
- (void)refreshImportantMail;
- (void)showAlertViewWithTitle:(id)arg1 message:(id)arg2;
- (void)refreshCurrentFolderMail;
- (void)refreshData;
- (_Bool)isSearchMode:(id)arg1;
- (id)sendMailFailReason:(id)arg1;
- (id)convertToPhotoItemFromAttachment:(id)arg1 mail:(id)arg2;
- (id)convertToMail:(id)arg1;
- (id)convertedSelectedMails;
- (_Bool)shouldIgnoreMailReceiverStatus;
- (id)tableViewOfCell:(id)arg1;
- (id)mailForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)dataSourceForTableView:(id)arg1;
- (id)currentMail;
- (_Bool)isFirstVisitImportantMailList;
- (_Bool)isVisitingImportantMailList;
- (void)updateEmptyView;
- (void)updateNavigationTitle;
- (void)updateBottomToolBar;
- (void)removeRefreshControl;
- (void)addRefreshControl;
- (void)updateRefreshControl;
- (void)refreshMailsUnderDraftBox;
- (void)enableBarButtonItem;
- (void)disableBarButtonItem;
- (void)updateSearchHintLabelByKeyword:(id)arg1;
- (void)updateSearchResultTableFooterView;
- (void)reloadSearchResultTable;
- (void)emptyDefaultSearchHintLabel;
- (void)checkCountThenPopIfNeeded;
- (void)restoreComposeMailIfNeeded;
- (void)updateTableFooter:(_Bool)arg1;
- (void)updateTableFooter;
- (void)updateUIAfterLoading;
- (void)switchUIForFolder:(id)arg1;
- (void)checkTotalUnreadBadgeValue;
- (void)enterpriseOrgAuthEmailModified:(id)arg1;
- (void)bindStatusChanged:(id)arg1;
- (void)tokenExpired:(id)arg1;
- (void)registerNotifications;
- (void)initBottomBar;
- (void)initTipsViewIfNeed:(id)arg1;
- (void)initNavigationItems;
- (void)initTableView;
- (void)setupAdapter;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
