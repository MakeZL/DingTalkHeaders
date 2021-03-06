//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTConferenceButtonDelegate-Protocol.h"
#import "DTVideoConferencePreCellDataSource-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DTConferenceUserMobile, NSArray, NSDictionary, NSString, NSTimer, UIButton, UICollectionView, UICollectionViewFlowLayout;

@interface DTConferenceStartViewController : DTViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DTConferenceButtonDelegate, DTVideoConferencePreCellDataSource>
{
    _Bool _itemSelected;
    int _newStatus;
    NSArray *_calleeUids;
    NSString *_cid;
    long long _quickType;
    UICollectionView *_preCollectionView;
    UICollectionViewFlowLayout *_preCollectionLayout;
    UICollectionView *_buttonsCollectionView;
    UICollectionViewFlowLayout *_buttonsCollectionLayout;
    NSArray *_preMemberArrays;
    UIButton *_functionLabel;
    NSArray *_functionBtnsArrays;
    DTConferenceUserMobile *_mobileModel;
    NSTimer *_timer;
    NSString *_defaultTitle;
    NSDictionary *_netStatusMap;
}

@property(copy, nonatomic) NSDictionary *netStatusMap; // @synthesize netStatusMap=_netStatusMap;
@property(nonatomic) int newStatus; // @synthesize newStatus=_newStatus;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) DTConferenceUserMobile *mobileModel; // @synthesize mobileModel=_mobileModel;
@property(copy, nonatomic) NSArray *functionBtnsArrays; // @synthesize functionBtnsArrays=_functionBtnsArrays;
@property(retain, nonatomic) UIButton *functionLabel; // @synthesize functionLabel=_functionLabel;
@property(nonatomic, getter=isItemSelected) _Bool itemSelected; // @synthesize itemSelected=_itemSelected;
@property(copy, nonatomic) NSArray *preMemberArrays; // @synthesize preMemberArrays=_preMemberArrays;
@property(retain, nonatomic) UICollectionViewFlowLayout *buttonsCollectionLayout; // @synthesize buttonsCollectionLayout=_buttonsCollectionLayout;
@property(retain, nonatomic) UICollectionView *buttonsCollectionView; // @synthesize buttonsCollectionView=_buttonsCollectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *preCollectionLayout; // @synthesize preCollectionLayout=_preCollectionLayout;
@property(retain, nonatomic) UICollectionView *preCollectionView; // @synthesize preCollectionView=_preCollectionView;
@property(nonatomic) long long quickType; // @synthesize quickType=_quickType;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSArray *calleeUids; // @synthesize calleeUids=_calleeUids;
- (void).cxx_destruct;
- (void)onNetworkStatusChanged:(id)arg1;
- (void)onClientStatusChanged:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)functionBtnPress:(id)arg1;
- (void)popBackVC;
- (void)popBack;
- (void)cancelVC;
- (void)cancel;
- (void)dismiss;
- (void)sendUpdateSMS:(id)arg1 type:(long long)arg2;
- (void)openSysCallWithCalleeNumber:(id)arg1;
- (void)createSystemCall:(id)arg1 statusCode:(id)arg2;
- (void)createConference:(id)arg1;
- (void)createVideoConference:(id)arg1;
- (void)createSingleVideo:(id)arg1;
- (void)createVoIP:(id)arg1;
- (void)createNetCall:(id)arg1 tipTitle:(id)arg2;
- (void)createBizCall:(id)arg1 bizSubType:(unsigned long long)arg2;
- (id)getUidsWithoutSelf:(_Bool)arg1;
- (long long)getMinusIndex;
- (long long)getAddIndex;
- (id)getMemberModelByUid:(long long)arg1;
- (void)cancelShakeStatus;
- (void)removeMember:(id)arg1;
- (CDUnknownBlockType)contactPicked;
- (void)addMember;
- (unsigned long long)memberCount;
- (void)refreshButtonsEnableByModel:(id)arg1 defaultType:(id)arg2 errorCause:(id)arg3 calleeUids:(id)arg4;
- (void)checkCalleeUidsEnable:(id)arg1;
- (void)resetFunctionTitle;
- (void)refreshFunctionTitle:(id)arg1;
- (void)refreshMembers:(id)arg1;
- (void)loadData;
- (void)loadCompoment;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

