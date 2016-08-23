//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableView.h"

#import "DTDingDeadlineSummaryViewDelegate-Protocol.h"
#import "DTDingTableViewCellDelegate-Protocol.h"
#import "DTOpenLuckyMoneyViewDelegate-Protocol.h"
#import "LWFetchedResultsControllerDelegate-Protocol.h"
#import "SWTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBizDingModel, DTDingDeadlineSummaryView, DTDingMoreOperationHandler, DTSectionInfo, LWFetchRequest, LWFetchedResultsController, NSArray, NSMutableDictionary, NSSet, NSString, UIButton, UIImage, UINavigationController, UIRefreshControl, UIView, UIViewController;
@protocol DTDingListTableEventDelegate;

@interface DTDingListTable : DTTableView <UITableViewDataSource, UITableViewDelegate, DTDingTableViewCellDelegate, SWTableViewCellDelegate, LWFetchedResultsControllerDelegate, DTOpenLuckyMoneyViewDelegate, DTDingDeadlineSummaryViewDelegate>
{
    _Bool _needLayoutSubviews;
    _Bool _isLoading;
    _Bool _hasMore;
    _Bool _isClikcJumpToCurrentType;
    _Bool _isShowingDeadlineSummary;
    _Bool _showFinishedDings;
    UINavigationController *_navigationController;
    UIViewController *_parentController;
    long long _listType;
    id <DTDingListTableEventDelegate> _listEventDelegate;
    CDUnknownBlockType _switchFilterBlock;
    UIView *_emptyResultView;
    NSMutableDictionary *_cacheHeightDictionary;
    NSMutableDictionary *_cacheConversation;
    UIRefreshControl *_dingRefreshControl;
    unsigned long long _currentListIdentifier;
    long long _requestLocalTimes;
    LWFetchRequest *_fetchRequest;
    LWFetchedResultsController *_fetchController;
    LWFetchRequest *_deadlineFetchRequest;
    LWFetchedResultsController *_deadlineFetchController;
    LWFetchRequest *_currentFetchRequest;
    LWFetchedResultsController *_currentFetchController;
    DTBizDingModel *_lastDing;
    DTDingMoreOperationHandler *_moreOperationHandler;
    NSArray *_currentDataSources;
    long long _tableListEditType;
    NSSet *_selectedDingList;
    NSArray *_deadlingSummaryList;
    DTDingDeadlineSummaryView *_deadlineSummaryView;
    long long _hasExpireDingCount;
    long long _willExpireDingCount;
    NSArray *_deadlingDataSource;
    DTSectionInfo *_hasFinishDeadlineSection;
    UIButton *_showFinishDingBtn;
    long long _hasFinishedDingsSectionIndex;
    NSArray *_deadlingTitles;
    UIImage *_sectionHeadRedImage;
    UIImage *_sectionHeadBlueImage;
    UIImage *_sectionHeadHasFinishImage;
}

@property(retain, nonatomic) UIImage *sectionHeadHasFinishImage; // @synthesize sectionHeadHasFinishImage=_sectionHeadHasFinishImage;
@property(retain, nonatomic) UIImage *sectionHeadBlueImage; // @synthesize sectionHeadBlueImage=_sectionHeadBlueImage;
@property(retain, nonatomic) UIImage *sectionHeadRedImage; // @synthesize sectionHeadRedImage=_sectionHeadRedImage;
@property(copy, nonatomic) NSArray *deadlingTitles; // @synthesize deadlingTitles=_deadlingTitles;
@property(nonatomic) long long hasFinishedDingsSectionIndex; // @synthesize hasFinishedDingsSectionIndex=_hasFinishedDingsSectionIndex;
@property(nonatomic) _Bool showFinishedDings; // @synthesize showFinishedDings=_showFinishedDings;
@property(retain, nonatomic) UIButton *showFinishDingBtn; // @synthesize showFinishDingBtn=_showFinishDingBtn;
@property(retain, nonatomic) DTSectionInfo *hasFinishDeadlineSection; // @synthesize hasFinishDeadlineSection=_hasFinishDeadlineSection;
@property(copy, nonatomic) NSArray *deadlingDataSource; // @synthesize deadlingDataSource=_deadlingDataSource;
@property(nonatomic) long long willExpireDingCount; // @synthesize willExpireDingCount=_willExpireDingCount;
@property(nonatomic) long long hasExpireDingCount; // @synthesize hasExpireDingCount=_hasExpireDingCount;
@property(retain, nonatomic) DTDingDeadlineSummaryView *deadlineSummaryView; // @synthesize deadlineSummaryView=_deadlineSummaryView;
@property(nonatomic) _Bool isShowingDeadlineSummary; // @synthesize isShowingDeadlineSummary=_isShowingDeadlineSummary;
@property(copy, nonatomic) NSArray *deadlingSummaryList; // @synthesize deadlingSummaryList=_deadlingSummaryList;
@property(retain, nonatomic) NSSet *selectedDingList; // @synthesize selectedDingList=_selectedDingList;
@property(nonatomic) long long tableListEditType; // @synthesize tableListEditType=_tableListEditType;
@property(nonatomic) _Bool isClikcJumpToCurrentType; // @synthesize isClikcJumpToCurrentType=_isClikcJumpToCurrentType;
@property(retain, nonatomic) NSArray *currentDataSources; // @synthesize currentDataSources=_currentDataSources;
@property(retain, nonatomic) DTDingMoreOperationHandler *moreOperationHandler; // @synthesize moreOperationHandler=_moreOperationHandler;
@property(retain, nonatomic) DTBizDingModel *lastDing; // @synthesize lastDing=_lastDing;
@property(retain, nonatomic) LWFetchedResultsController *currentFetchController; // @synthesize currentFetchController=_currentFetchController;
@property(retain, nonatomic) LWFetchRequest *currentFetchRequest; // @synthesize currentFetchRequest=_currentFetchRequest;
@property(retain, nonatomic) LWFetchedResultsController *deadlineFetchController; // @synthesize deadlineFetchController=_deadlineFetchController;
@property(retain, nonatomic) LWFetchRequest *deadlineFetchRequest; // @synthesize deadlineFetchRequest=_deadlineFetchRequest;
@property(retain, nonatomic) LWFetchedResultsController *fetchController; // @synthesize fetchController=_fetchController;
@property(retain, nonatomic) LWFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(nonatomic) long long requestLocalTimes; // @synthesize requestLocalTimes=_requestLocalTimes;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long currentListIdentifier; // @synthesize currentListIdentifier=_currentListIdentifier;
@property(retain, nonatomic) UIRefreshControl *dingRefreshControl; // @synthesize dingRefreshControl=_dingRefreshControl;
@property(retain, nonatomic) NSMutableDictionary *cacheConversation; // @synthesize cacheConversation=_cacheConversation;
@property(retain, nonatomic) NSMutableDictionary *cacheHeightDictionary; // @synthesize cacheHeightDictionary=_cacheHeightDictionary;
@property(retain, nonatomic) UIView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(copy, nonatomic) CDUnknownBlockType switchFilterBlock; // @synthesize switchFilterBlock=_switchFilterBlock;
@property(nonatomic) __weak id <DTDingListTableEventDelegate> listEventDelegate; // @synthesize listEventDelegate=_listEventDelegate;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(nonatomic) _Bool needLayoutSubviews; // @synthesize needLayoutSubviews=_needLayoutSubviews;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (id)hasFinishedSectionHeadViewWithSection:(long long)arg1;
- (_Bool)showDingsWithSection:(id)arg1;
- (void)refreshFinishButton;
- (void)finishDingSwitchClicked:(id)arg1;
- (unsigned long long)intervalDaysFromCurrent:(id)arg1;
- (id)sectionTitleInSection:(long long)arg1;
- (id)dateValueDescriptionWithMilliseconds:(long long)arg1;
- (void)delayReloadSummaryDataAndRefreshUI;
- (void)handleDeadlineFinishStatusChanged:(id)arg1;
- (void)handleSummaryDataChanged:(id)arg1;
- (id)conversationWithDing:(id)arg1;
- (void)showDingSourceWithCell:(id)arg1 dingModel:(id)arg2 indexPath:(id)arg3;
- (void)cleanSelectedDings;
- (id)selectedDings;
- (void)configEditType:(long long)arg1;
- (_Bool)hasDingInCurrentType;
- (id)headButtonWithTitle:(id)arg1;
- (_Bool)cellShowInCurrentTypeWithDing:(id)arg1;
- (_Bool)isSendWithDing:(id)arg1;
- (_Bool)isReceivedWithDing:(id)arg1;
- (unsigned long long)newNotifityNumberWithType:(long long)arg1;
- (void)updateTableViewHeadView;
- (void)innerRefreshDingTabBarRedDotNum;
- (void)refreshDingTabBarRedDotNum;
- (_Bool)isNextTargetCellWithDing:(id)arg1;
- (void)scrollInDeadlineListWithFirstVisibleIndexPath:(id)arg1;
- (void)asyncScrollInDeadlineListWithFirstVisibleIndexPath:(id)arg1;
- (void)scrollWithFirstVisibleIndexPath:(id)arg1;
- (void)didClickViewMore:(id)arg1 pickingStatus:(id)arg2;
- (void)loadMoreIfNeeded;
- (void)controllerDidRollback:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)gotoMessageWithDingModel:(id)arg1;
- (void)dinglistCellfinishButtonClick:(id)arg1;
- (void)moreOperation:(id)arg1 cell:(id)arg2;
- (void)reloadSummaryDataAndRefreshUI;
- (void)localPushSummaryInfo;
- (void)delayLocalPushSummaryInfo;
- (void)loadLastLocalDeadlineDings;
- (void)closeDeadlineSummaryView;
- (void)didSelectedMore:(id)arg1;
- (void)closeButtonClicked:(id)arg1 summaryView:(id)arg2;
- (void)dingDeadlineSummaryCellDidSelected:(id)arg1 dingModel:(id)arg2;
- (void)needOpenDingComment:(id)arg1 cell:(id)arg2;
- (void)openUrlInWebView:(id)arg1;
- (void)handleUrl:(id)arg1;
- (void)openCSpaceAttachment:(id)arg1 senderId:(long long)arg2;
- (void)openAttachmentLink:(id)arg1 senderId:(long long)arg2;
- (void)needConfirmDing:(id)arg1;
- (void)openUserProfile:(id)arg1;
- (void)jumpToDingStatusDingModel:(id)arg1 withType:(unsigned long long)arg2;
- (void)openDingFinishStatusList:(_Bool)arg1 dingModel:(id)arg2;
- (void)openDingReceiverStatusList:(_Bool)arg1 dingModel:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)swipeableTableViewCell:(id)arg1 canSwipeToState:(long long)arg2;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(id)arg1;
- (void)swipeableTableViewCell:(id)arg1 scrollingToState:(long long)arg2;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (void)loadMoreFinishedLoading;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)rightButtons;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showDingRemindGuideIfNeed;
- (void)hideEmpty;
- (void)showEmpty;
- (void)asyncCheckEmpty;
- (void)loadDataWithCursor:(long long)arg1 forward:(_Bool)arg2 pageSize:(long long)arg3 needLoadLocal:(_Bool)arg4;
- (void)loadDataSyncWithCursor:(long long)arg1 forward:(_Bool)arg2 pageSize:(long long)arg3 needLoadLocal:(_Bool)arg4;
- (_Bool)loadLocalDataWithForward:(_Bool)arg1 pageSize:(long long)arg2;
- (void)loadData;
- (long long)getCurrentListCursorBizType;
- (void)reGroupDeadlineDings;
- (void)cleanFetchControllerStatus;
- (void)loadDeadlineDing;
- (void)loadNoDeadlineDing;
- (void)reloadTableData;
- (void)cleanUpDeletedDingList;
- (void)jumpToNewMessage:(id)arg1;
- (void)cleanUp:(id)arg1;
- (void)handleRefresh:(id)arg1;
- (void)addObservers;
- (void)viewWillAppear;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

