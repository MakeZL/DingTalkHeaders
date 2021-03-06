//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAvatarView, DTBadgeView, DTContactSectionHeaderModel, UIButton, UIImageView, UILabel;

@interface DTContactSectionHeaderView : UIView
{
    UIImageView *_foldableIcon;
    DTAvatarView *_logoImageView;
    UILabel *_titleLabel;
    UIImageView *_safeImageView;
    UIImageView *_statusImageView;
    UIButton *_rightButton;
    DTBadgeView *_badgeView;
    DTContactSectionHeaderModel *_sectionModel;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) DTContactSectionHeaderModel *sectionModel; // @synthesize sectionModel=_sectionModel;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIImageView *safeImageView; // @synthesize safeImageView=_safeImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *foldableIcon; // @synthesize foldableIcon=_foldableIcon;
- (void).cxx_destruct;
- (void)didSectionSelected;
- (void)rightButtonPressed:(id)arg1;
- (id)getRequestOriginalUrl:(id)arg1;
- (void)configWithSectionModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

