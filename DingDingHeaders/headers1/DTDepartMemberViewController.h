//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTPickViewController.h"

#import "DTCrumbViewDataSource-Protocol.h"
#import "DTCrumbViewDelegate-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"
#import "DTSearchDisplayControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTAllSelectPickItem, DTCrumbView, DTEmptyResultView, DTEnterpriseCard, DTLoadMoreController, DTPickIdentifier, DTReuseWaterMarkContainerView, DTSearchBar, DTSearchDisplayController, DTSectionInfo, NSArray, NSString, UIActivityIndicatorView, UITableView;

@interface DTDepartMemberViewController : DTPickViewController <UITableViewDataSource, UITableViewDelegate, DTCrumbViewDelegate, DTCrumbViewDataSource, DTLoadMoreDelegate, UISearchBarDelegate, DTSearchDisplayControllerDelegate>
{
    _Bool _neverMoreData;
    _Bool _showWaterMark;
    DTPickIdentifier *_identifier;
    NSArray *_crumbIdentifiers;
    UITableView *_contactTableView;
    NSArray *_contactDataSource;
    DTSectionInfo *_departSection;
    DTSectionInfo *_memberSection;
    DTSectionInfo *_selectAllSection;
    DTAllSelectPickItem *_allItem;
    DTCrumbView *_crumbView;
    NSArray *_crumbDataSource;
    DTLoadMoreController *_loadMoreController;
    UIActivityIndicatorView *_indicatorView;
    NSArray *_currentCrumbIndetifiers;
    DTEmptyResultView *_emptyView;
    DTReuseWaterMarkContainerView *_reuseWaterMarkContainerView;
    DTEnterpriseCard *_currentEnterpriseCard;
    DTSearchBar *_contactSearchBar;
    DTSearchDisplayController *_contactSearchDisplayController;
}

@property(retain, nonatomic) DTSearchDisplayController *contactSearchDisplayController; // @synthesize contactSearchDisplayController=_contactSearchDisplayController;
@property(retain, nonatomic) DTSearchBar *contactSearchBar; // @synthesize contactSearchBar=_contactSearchBar;
@property(nonatomic) _Bool showWaterMark; // @synthesize showWaterMark=_showWaterMark;
@property(retain, nonatomic) DTEnterpriseCard *currentEnterpriseCard; // @synthesize currentEnterpriseCard=_currentEnterpriseCard;
@property(retain, nonatomic) DTReuseWaterMarkContainerView *reuseWaterMarkContainerView; // @synthesize reuseWaterMarkContainerView=_reuseWaterMarkContainerView;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSArray *currentCrumbIndetifiers; // @synthesize currentCrumbIndetifiers=_currentCrumbIndetifiers;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) _Bool neverMoreData; // @synthesize neverMoreData=_neverMoreData;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) NSArray *crumbDataSource; // @synthesize crumbDataSource=_crumbDataSource;
@property(retain, nonatomic) DTCrumbView *crumbView; // @synthesize crumbView=_crumbView;
@property(retain, nonatomic) DTAllSelectPickItem *allItem; // @synthesize allItem=_allItem;
@property(retain, nonatomic) DTSectionInfo *selectAllSection; // @synthesize selectAllSection=_selectAllSection;
@property(retain, nonatomic) DTSectionInfo *memberSection; // @synthesize memberSection=_memberSection;
@property(retain, nonatomic) DTSectionInfo *departSection; // @synthesize departSection=_departSection;
@property(retain, nonatomic) NSArray *contactDataSource; // @synthesize contactDataSource=_contactDataSource;
@property(retain, nonatomic) UITableView *contactTableView; // @synthesize contactTableView=_contactTableView;
@property(copy, nonatomic) NSArray *crumbIdentifiers; // @synthesize crumbIdentifiers=_crumbIdentifiers;
@property(retain, nonatomic) DTPickIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)requestsSubListOfIdentifier:(id)arg1 offset:(long long)arg2 size:(long long)arg3 currentRestuls:(id)arg4 successBlock:(CDUnknownBlockType)arg5;
- (void)fetchAllDepartMembersWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)allSelectCellDidSelectWithItem:(id)arg1;
- (void)cellDidSelect:(id)arg1;
- (long long)indexOfCrumbIndetifier:(id)arg1;
- (void)gotoSubListOfIdentifier:(id)arg1 crumbIdentifiers:(id)arg2;
- (void)gotoSubListOfIdentifier:(id)arg1;
- (void)showsCrumbsWithIdentifiers:(id)arg1;
- (void)showsDepartMembers:(id)arg1 tableDidReloadBlock:(CDUnknownBlockType)arg2;
- (void)requestsSubListOfIdentifier:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (void)cancelButtonPressed;
- (void)backToHome;
- (void)popToBack;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)crumbView:(id)arg1 cellForColumnAtColumnIndex:(long long)arg2;
- (double)crumbView:(id)arg1 heightForColumnAtColumnIndex:(long long)arg2;
- (long long)numberOfColumnsInCrumbView:(id)arg1;
- (void)loadDatasource;
- (void)loadComponent;
- (void)pickerDatasourceDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

