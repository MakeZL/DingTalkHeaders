//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol DTMessageBossAlertViewDelegate;

@interface DTMessageBossAlertView : UIView
{
    id <DTMessageBossAlertViewDelegate> _alertViewDelegate;
    UIImageView *_bgImgView;
    UIImageView *_iconImgView;
    UILabel *_titleView;
    UILabel *_quoteLabel;
    UILabel *_contentLabel1;
    UILabel *_contentLabel2;
    UILabel *_contentLabel3;
    UIView *_buttomLine;
    UIButton *_introBtn;
    UIButton *_enterBtn;
}

@property(retain, nonatomic) UIButton *enterBtn; // @synthesize enterBtn=_enterBtn;
@property(retain, nonatomic) UIButton *introBtn; // @synthesize introBtn=_introBtn;
@property(retain, nonatomic) UIView *buttomLine; // @synthesize buttomLine=_buttomLine;
@property(retain, nonatomic) UILabel *contentLabel3; // @synthesize contentLabel3=_contentLabel3;
@property(retain, nonatomic) UILabel *contentLabel2; // @synthesize contentLabel2=_contentLabel2;
@property(retain, nonatomic) UILabel *contentLabel1; // @synthesize contentLabel1=_contentLabel1;
@property(retain, nonatomic) UILabel *quoteLabel; // @synthesize quoteLabel=_quoteLabel;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(nonatomic) __weak id <DTMessageBossAlertViewDelegate> alertViewDelegate; // @synthesize alertViewDelegate=_alertViewDelegate;
- (void).cxx_destruct;
- (void)enterBtnClick:(id)arg1;
- (void)introBtnClick:(id)arg1;
- (void)configWithStyle:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

