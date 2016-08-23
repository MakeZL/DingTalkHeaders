//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DTBadgeView, DTContactItem, UIImageView, UILabel;

@interface DTManageOrgCollectionViewCell : UICollectionViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    DTContactItem *_item;
    UIImageView *_rightLine;
    UIImageView *_bottomLine;
    DTBadgeView *_badgeView;
}

@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) DTContactItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

