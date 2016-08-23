//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTUserNameLabelDelegate-Protocol.h"

@class DTAmountLabel, DTAvatarImageView, DTUserNameLabel, NSString, UIButton, UIImageView, UILabel;
@protocol DTRedMineHeaderViewDelegate;

@interface DTRedMineHeaderView : UIView <DTUserNameLabelDelegate>
{
    id <DTRedMineHeaderViewDelegate> _delegate;
    long long _headerStyle;
    UILabel *_undrawTitleLable;
    DTAmountLabel *_undrawAmountLable;
    UIButton *_actionButton;
    UILabel *_undrawTipLable;
    DTAvatarImageView *_avaterView;
    DTUserNameLabel *_nameLabel;
    UIImageView *_splitView;
    UIImageView *_aliPayImage;
    UILabel *_aliPayAccount;
    UILabel *_aliPayDesLabl;
}

@property(retain, nonatomic) UILabel *aliPayDesLabl; // @synthesize aliPayDesLabl=_aliPayDesLabl;
@property(retain, nonatomic) UILabel *aliPayAccount; // @synthesize aliPayAccount=_aliPayAccount;
@property(retain, nonatomic) UIImageView *aliPayImage; // @synthesize aliPayImage=_aliPayImage;
@property(retain, nonatomic) UIImageView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) DTUserNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) DTAvatarImageView *avaterView; // @synthesize avaterView=_avaterView;
@property(retain, nonatomic) UILabel *undrawTipLable; // @synthesize undrawTipLable=_undrawTipLable;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) DTAmountLabel *undrawAmountLable; // @synthesize undrawAmountLable=_undrawAmountLable;
@property(retain, nonatomic) UILabel *undrawTitleLable; // @synthesize undrawTitleLable=_undrawTitleLable;
@property(nonatomic) long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(nonatomic) __weak id <DTRedMineHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userNameLabelTextDidChange:(id)arg1 change:(id)arg2;
- (void)layoutdrawViews;
- (void)layoutUndrawViews;
- (void)layoutSubviews;
- (void)bottomAction:(id)arg1;
- (void)resetViews;
- (void)configWithDrawViews:(id)arg1;
- (void)configUndrawViews:(id)arg1;
- (void)configHeaderWithText:(id)arg1 headerStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

