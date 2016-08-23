//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTMailGuideViewDatasource-Protocol.h"
#import "DTMailGuideViewDelegate-Protocol.h"

@class DTMailGuideView, DTTMSLoginEmailModel, NSString, UIButton, UILabel, UIView;

@interface DTAliYunMailCheckViewController : DTViewController <DTMailGuideViewDelegate, DTMailGuideViewDatasource>
{
    CDUnknownBlockType _completion;
    UIView *_bannerView;
    UIView *_headerView;
    UILabel *_headerTitleLbl;
    UIButton *_headerBtn;
    DTMailGuideView *_slidesView;
    UIButton *_aliyunLoginBtn;
    UIButton *_dingtalkLoginBtn;
    DTTMSLoginEmailModel *_configModel;
}

@property(retain, nonatomic) DTTMSLoginEmailModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) UIButton *dingtalkLoginBtn; // @synthesize dingtalkLoginBtn=_dingtalkLoginBtn;
@property(retain, nonatomic) UIButton *aliyunLoginBtn; // @synthesize aliyunLoginBtn=_aliyunLoginBtn;
@property(retain, nonatomic) DTMailGuideView *slidesView; // @synthesize slidesView=_slidesView;
@property(retain, nonatomic) UIButton *headerBtn; // @synthesize headerBtn=_headerBtn;
@property(retain, nonatomic) UILabel *headerTitleLbl; // @synthesize headerTitleLbl=_headerTitleLbl;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)enterpriseOrgAuthEmailModified:(id)arg1;
- (void)onDingMail:(id)arg1;
- (void)onAlimeiMail:(id)arg1;
- (void)onHeaderButtonClicked:(id)arg1;
- (id)pageAtIndex:(long long)arg1;
- (long long)numberOfPages;
- (void)didClickPage:(id)arg1 atIndex:(long long)arg2;
- (id)defaultTMSLoginEmailModel;
- (void)loadUIConfig;
- (double)slideWidth;
- (id)cacheFilePath;
- (id)getTMSURL;
- (void)requestTMSConfig;
- (void)reloadViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

