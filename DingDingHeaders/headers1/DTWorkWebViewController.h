//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTWebViewController.h"

#import "DTTabBarTouchProtocol-Protocol.h"
#import "DTWorkPageNavigatorDelegate-Protocol.h"

@class DTBizWorkInfoModel, DTWorkComponentSource, NSString, UIBarButtonItem;

@interface DTWorkWebViewController : DTWebViewController <DTTabBarTouchProtocol, DTWorkPageNavigatorDelegate>
{
    long long _organizationId;
    DTBizWorkInfoModel *_workInfo;
    UIBarButtonItem *_moreBtn;
    DTWorkComponentSource *_workViewDatasource;
}

@property(retain, nonatomic) DTWorkComponentSource *workViewDatasource; // @synthesize workViewDatasource=_workViewDatasource;
@property(retain, nonatomic) UIBarButtonItem *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) DTBizWorkInfoModel *workInfo; // @synthesize workInfo=_workInfo;
@property(nonatomic) long long organizationId; // @synthesize organizationId=_organizationId;
- (void).cxx_destruct;
- (void)openMicroAppWithItem:(id)arg1 ddParams:(id)arg2;
- (_Bool)pageNavigator:(id)arg1 openMicroAPPWithAppID:(id)arg2 ddParams:(id)arg3;
- (void)reloadNavigationComponents;
- (void)onUnreadWorkMessageChanged:(id)arg1;
- (void)organizationDidChangeNotification:(id)arg1;
- (void)tabBarItemDoubleClicked;
- (void)tabBarItemClickedInSelected;
- (void)configTitleViewWithText:(id)arg1;
- (void)moreBtnAction:(id)arg1;
- (void)setupWebViewTitle;
- (id)pageTitleView;
- (void)configOANavigationBar;
- (void)loadWorkInfo;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

