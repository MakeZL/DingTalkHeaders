//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewCell.h"

@class UILabel;

@interface DTRedMineTableCell : DTTableViewCell
{
    UILabel *_leftMainLable;
    UILabel *_leftSubLable;
    UILabel *_rightMainLable;
    UILabel *_rightSubLable;
}

+ (double)cellHeightWithItem:(id)arg1;
@property(retain, nonatomic) UILabel *rightSubLable; // @synthesize rightSubLable=_rightSubLable;
@property(retain, nonatomic) UILabel *rightMainLable; // @synthesize rightMainLable=_rightMainLable;
@property(retain, nonatomic) UILabel *leftSubLable; // @synthesize leftSubLable=_leftSubLable;
@property(retain, nonatomic) UILabel *leftMainLable; // @synthesize leftMainLable=_leftMainLable;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)configCellWithCellItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

