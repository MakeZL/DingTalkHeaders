//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "DTUserNameLabelDelegate-Protocol.h"

@class DTAvatarImageView, DTBadgeView, DTContactItem, DTUserNameLabel, NSString, UIButton, UIImageView, UILabel;

@interface DTContactTableViewCell : UITableViewCell <DTUserNameLabelDelegate>
{
    _Bool _allowsSelection;
    UIImageView *_leftImageView;
    DTAvatarImageView *_avatarImageView;
    DTUserNameLabel *_nameLabel;
    UILabel *_detailLabel;
    UILabel *_commentLabel;
    UIImageView *_commentImageView;
    UIButton *_rightButton;
    UIImageView *_rightIconView;
    UIButton *_editButton;
    UIButton *_nextDepartButton;
    DTBadgeView *_badgeView;
    DTContactItem *_item;
    UIImageView *_topLine;
    UIImageView *_bottomLine;
    unsigned long long _style;
    double _topLineLeftMargin;
    double _bottomLineLeftMargin;
    long long _index;
    long long _number;
}

+ (id)cellIdentifier;
+ (id)detailLabelFont;
+ (id)nameLabelFont;
+ (double)calculateCellHeight:(id)arg1 cellWidth:(double)arg2;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) double bottomLineLeftMargin; // @synthesize bottomLineLeftMargin=_bottomLineLeftMargin;
@property(nonatomic) double topLineLeftMargin; // @synthesize topLineLeftMargin=_topLineLeftMargin;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) DTContactItem *item; // @synthesize item=_item;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(retain, nonatomic) UIButton *nextDepartButton; // @synthesize nextDepartButton=_nextDepartButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIImageView *commentImageView; // @synthesize commentImageView=_commentImageView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) DTUserNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)nextDepartButtonPressed:(id)arg1;
- (void)editButtonPressed:(id)arg1;
- (void)rightButtonPressed:(id)arg1;
- (void)drawSeperaterLineOfCell;
- (void)setLineHidden:(_Bool)arg1;
- (void)setLocationOfCellAtIndex:(long long)arg1 inNumberOfRowsInSelfSection:(long long)arg2;
- (void)configCellWithContactItem:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithCellStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
