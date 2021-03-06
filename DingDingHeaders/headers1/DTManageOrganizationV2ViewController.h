//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DTDataDetailView, DTManageOrgInfoModel, DTOrgTitleView, DTOrgTrendDataModel, DTOrganization, DTTotalScoreView, NSArray, NSString, UIButton, UICollectionView, UIView;

@interface DTManageOrganizationV2ViewController : DTTableViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _showScoreDefault;
    DTOrganization *_organization;
    DTDataDetailView *_dataDetailView;
    UICollectionView *_collectionView;
    NSArray *_collectionViewDataSources;
    NSArray *_tableViewDataSources;
    DTManageOrgInfoModel *_infoModel;
    DTOrgTitleView *_orgTitleView;
    DTOrgTrendDataModel *_currentTrendData;
    UIView *_tableViewHeadView;
    UIView *_tableViewFooterView;
    UIButton *_footerButton;
    UIView *_headBgView;
    UIButton *_dropDownButton;
    DTTotalScoreView *_scoreView;
    NSString *_authUrlWithAt;
}

+ (id)dt_attributedTitleWithTitle:(id)arg1 subTitle:(id)arg2 icon:(id)arg3;
+ (id)dt_attributedTitleWithTitle:(id)arg1 subTitle:(id)arg2;
@property(copy, nonatomic) NSString *authUrlWithAt; // @synthesize authUrlWithAt=_authUrlWithAt;
@property(nonatomic) _Bool showScoreDefault; // @synthesize showScoreDefault=_showScoreDefault;
@property(retain, nonatomic) DTTotalScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) UIButton *dropDownButton; // @synthesize dropDownButton=_dropDownButton;
@property(retain, nonatomic) UIView *headBgView; // @synthesize headBgView=_headBgView;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UIView *tableViewFooterView; // @synthesize tableViewFooterView=_tableViewFooterView;
@property(retain, nonatomic) UIView *tableViewHeadView; // @synthesize tableViewHeadView=_tableViewHeadView;
@property(retain, nonatomic) DTOrgTrendDataModel *currentTrendData; // @synthesize currentTrendData=_currentTrendData;
@property(retain, nonatomic) DTOrgTitleView *orgTitleView; // @synthesize orgTitleView=_orgTitleView;
@property(retain, nonatomic) DTManageOrgInfoModel *infoModel; // @synthesize infoModel=_infoModel;
@property(retain, nonatomic) NSArray *tableViewDataSources; // @synthesize tableViewDataSources=_tableViewDataSources;
@property(retain, nonatomic) NSArray *collectionViewDataSources; // @synthesize collectionViewDataSources=_collectionViewDataSources;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) DTDataDetailView *dataDetailView; // @synthesize dataDetailView=_dataDetailView;
@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
- (void).cxx_destruct;
- (void)dt_setTitle:(id)arg1 subTitle:(id)arg2 iconImage:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)organizationWithName:(id)arg1 orgId:(long long)arg2;
- (id)generateNames;
- (id)authStatusDescWithType:(long long)arg1;
- (void)changeOrgName:(id)arg1;
- (void)onMailSettingItemClicked;
- (void)reloadTableViewData;
- (void)reloadCollectionViewData;
- (void)bespeakServiceItemClick;
- (void)openWebViewWithUrlString:(id)arg1 showRightBarButton:(_Bool)arg2;
- (void)openWebViewWithUrlString:(id)arg1;
- (void)improveButtonClicked;
- (void)levelDetailClicked;
- (void)showDetailData;
- (void)showDefaultDataWithAnimation:(_Bool)arg1 duration:(double)arg2;
- (id)reverseDropDownButtonImageOrientation;
- (void)showDefaultData;
- (void)dropDownButtonClick:(id)arg1;
- (void)guideBtnClicked:(id)arg1;
- (_Bool)isAuthOrg;
- (void)reloadCollectionView;
- (void)badgeRedDotChanged:(id)arg1;
- (void)orgTaskListChanged:(id)arg1;
- (void)authStatusChange:(id)arg1;
- (void)reloadData;
- (void)manageOrgPopBack:(id)arg1;
- (void)reloadTitleView;
- (double)readjustTableFooterView;
- (void)addObservers;
- (id)getTitleViewDetail;
- (void)resetStatus;
- (void)loadDataFromServer;
- (void)loadComponent;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)setRightNavigationItem;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

