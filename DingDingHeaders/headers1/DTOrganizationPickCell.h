//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTPickCell.h"

@class DTAvatarImageView, DTOrganizationPickItem, UIImageView, UILabel;

@interface DTOrganizationPickCell : DTPickCell
{
    DTAvatarImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIImageView *_rightImageView;
    UIImageView *_icon;
    UILabel *_iconMsg;
}

+ (double)calculateCellHeightWithPickItem:(id)arg1 cellWidth:(double)arg2;
+ (id)detailFont;
+ (id)titleFont;
@property(retain, nonatomic) UILabel *iconMsg; // @synthesize iconMsg=_iconMsg;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)drawSeperaterLineOfCell;
- (void)configCellWithItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) DTOrganizationPickItem *item; // @dynamic item;

@end

