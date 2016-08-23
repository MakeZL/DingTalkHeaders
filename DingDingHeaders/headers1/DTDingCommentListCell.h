//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class DTAvatarImageView, DTBizDingCommentModel, DTContact, DTDingDetailAttatchTextView, DTDingListAttachAudioView, NSString, UIButton, UILabel, UIView;
@protocol DTDingCommentCellDelegate;

@interface DTDingCommentListCell : UITableViewCell <TTTAttributedLabelDelegate>
{
    id <DTDingCommentCellDelegate> _delegate;
    UIView *_line;
    DTAvatarImageView *_avatarView;
    UIButton *_titleButton;
    UILabel *_timeLabel;
    DTDingDetailAttatchTextView *_textView;
    DTDingListAttachAudioView *_audioView;
    UIView *_currentAttachView;
    DTContact *_contact;
    DTBizDingCommentModel *_dingCommentModel;
}

+ (double)attachHeightWithAttach:(id)arg1;
+ (double)heightWithDingCommentModel:(id)arg1;
@property(retain, nonatomic) DTBizDingCommentModel *dingCommentModel; // @synthesize dingCommentModel=_dingCommentModel;
@property(retain, nonatomic) DTContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak UIView *currentAttachView; // @synthesize currentAttachView=_currentAttachView;
@property(retain, nonatomic) DTDingListAttachAudioView *audioView; // @synthesize audioView=_audioView;
@property(retain, nonatomic) DTDingDetailAttatchTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) DTAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak id <DTDingCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)displayNameChange:(id)arg1;
- (void)setUpNotification;
- (void)configWithModel:(id)arg1;
- (void)avatarclick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

