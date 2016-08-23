//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTPickCell.h"

@class DTDepartPickItem, UIButton, UIImageView, UILabel;

@interface DTDepartPickCell : DTPickCell
{
    UIImageView *_checkBoxView;
    UILabel *_nameLabel;
    UILabel *_commentLabel;
    UIImageView *_rightImageView;
    UIButton *_subsEntryButton;
    UIImageView *_disableMaskView;
}

+ (double)calculateCellHeightWithPickItem:(id)arg1 cellWidth:(double)arg2;
+ (id)titleFont;
@property(retain, nonatomic) UIImageView *disableMaskView; // @synthesize disableMaskView=_disableMaskView;
@property(retain, nonatomic) UIButton *subsEntryButton; // @synthesize subsEntryButton=_subsEntryButton;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
- (void).cxx_destruct;
- (void)subsEntryButtonPressed:(id)arg1;
- (void)drawSeperaterLineOfCell;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) DTDepartPickItem *item; // @dynamic item;

@end

