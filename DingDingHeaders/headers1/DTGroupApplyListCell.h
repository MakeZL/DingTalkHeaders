//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTAvatarImageView, DTGroupApply, UIButton, UILabel;
@protocol DTGroupApplyListCellDelegate;

@interface DTGroupApplyListCell : UITableViewCell
{
    DTGroupApply *_groupApply;
    id <DTGroupApplyListCellDelegate> _delegate;
    DTAvatarImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_phoneLabel;
    UILabel *_remarkLabel;
    UIButton *_acceptButton;
    UIButton *_addGroupButton;
    UILabel *_statusLabel;
}

+ (double)SeparatorLeft;
+ (double)CellHeight;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIButton *addGroupButton; // @synthesize addGroupButton=_addGroupButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <DTGroupApplyListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DTGroupApply *groupApply; // @synthesize groupApply=_groupApply;
- (void).cxx_destruct;
- (void)addGroupButtonPressed:(id)arg1;
- (void)acceptButtonPressed:(id)arg1;
- (void)configWithGroupApply:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

