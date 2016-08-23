//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTNewMessageNotificationItem, UIImageView, UILabel, UISwitch;

@interface DTNewMessageNotificationCellTableViewCell : UITableViewCell
{
    DTNewMessageNotificationItem *_item;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_indicatorView;
    UISwitch *_showDetailMessageSwitcher;
    long long _style;
    CDUnknownBlockType _selectBlock;
}

+ (id)cellIdentifierWithStyle:(long long)arg1;
+ (double)rowHeightWithItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UISwitch *showDetailMessageSwitcher; // @synthesize showDetailMessageSwitcher=_showDetailMessageSwitcher;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) DTNewMessageNotificationItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)showNewMessageNotificationSwitchChange;
- (void)configCellWithItem:(id)arg1;
- (id)initWithNewMessageNotificationCellStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

