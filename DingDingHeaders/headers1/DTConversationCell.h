//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWSlideMenuCell.h"

@class DTAvatarView, DTBadgeView, DTBizConversation, NSMutableSet, UIImageView, UILabel;

@interface DTConversationCell : WWSlideMenuCell
{
    double avatarWidth;
    double cellHeight;
    double titleLabelMaxWidth;
    DTBizConversation *_conversation;
    DTAvatarView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
    UILabel *_alertLabel;
    DTBadgeView *_badgeView;
    UIImageView *_notifyDisabledView;
    UIImageView *_sendingIconView;
    long long _o2oFriendUId;
    NSMutableSet *_userIconsUIdSet;
    UIImageView *_rightIconView;
    UIImageView *_topIconView;
}

@property(retain, nonatomic) UIImageView *topIconView; // @synthesize topIconView=_topIconView;
@property(retain, nonatomic) UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) NSMutableSet *userIconsUIdSet; // @synthesize userIconsUIdSet=_userIconsUIdSet;
@property(nonatomic) long long o2oFriendUId; // @synthesize o2oFriendUId=_o2oFriendUId;
@property(retain, nonatomic) UIImageView *sendingIconView; // @synthesize sendingIconView=_sendingIconView;
@property(retain, nonatomic) UIImageView *notifyDisabledView; // @synthesize notifyDisabledView=_notifyDisabledView;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)displayNameForOTOWithUid:(long long)arg1;
- (void)displayNameChange:(id)arg1;
- (void)handlerContactUpdatedNotify:(id)arg1;
- (void)prepareForReuse;
- (void)refreshNotifyNumber;
- (void)refreshConversationIcon;
- (void)refreshAvatar;
- (void)refreshContentLabel;
- (void)refreshAlertLabel;
- (void)configWithConversation:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

