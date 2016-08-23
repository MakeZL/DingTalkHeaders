//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RGMPagingScrollViewDatasource-Protocol.h"
#import "RGMPagingScrollViewDelegate-Protocol.h"

@class NSArray, NSString, RGMPagingScrollView, UIButton, UIImageView, UIPageControl;
@protocol DTEnterpriseRedEnvelopTransitionViewDelegate;

@interface DTEnterpriseRedEnvelopTransitionView : UIView <RGMPagingScrollViewDelegate, RGMPagingScrollViewDatasource>
{
    id <DTEnterpriseRedEnvelopTransitionViewDelegate> _delegate;
    UIImageView *_bgView;
    NSArray *_redEnvelopModes;
    RGMPagingScrollView *_pagingScrollView;
    UIPageControl *_pageControl;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) RGMPagingScrollView *pagingScrollView; // @synthesize pagingScrollView=_pagingScrollView;
@property(copy, nonatomic) NSArray *redEnvelopModes; // @synthesize redEnvelopModes=_redEnvelopModes;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <DTEnterpriseRedEnvelopTransitionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)pagingScrollView:(id)arg1 viewForIndex:(long long)arg2;
- (long long)pagingScrollViewNumberOfPages:(id)arg1;
- (void)pagingScrollView:(id)arg1 scrolledToPage:(long long)arg2;
- (void)onClose:(id)arg1;
- (void)onClick:(id)arg1;
- (void)configWithRedEnvelopModes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

