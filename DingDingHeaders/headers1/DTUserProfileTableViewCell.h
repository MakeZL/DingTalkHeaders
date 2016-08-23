//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewCell.h"

@class UIImageView, UILabel;

@interface DTUserProfileTableViewCell : DTTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconImage;
}

@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 detail:(id)arg2 icon:(id)arg3 isFirst:(_Bool)arg4 isLast:(_Bool)arg5;
- (void)setTitle:(id)arg1 detail:(id)arg2 iconIsHidden:(_Bool)arg3 isFirst:(_Bool)arg4 isLast:(_Bool)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

