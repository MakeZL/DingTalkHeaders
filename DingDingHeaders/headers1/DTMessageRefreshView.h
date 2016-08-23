//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton;
@protocol DTMessageRefreshViewDelegate;

@interface DTMessageRefreshView : UIView
{
    id <DTMessageRefreshViewDelegate> _delegate;
    UIButton *_refreshBtn;
    UIActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(nonatomic) __weak id <DTMessageRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshBtnPressed:(id)arg1;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

