//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface DTGroupApplyShareCell : DTCell
{
    UILabel *_orgNameLbl;
    UIImageView *_verifyIcon;
    UIButton *_inviteOtherToJoinButton;
    UILabel *_shareTipsLbl;
    UIView *_topView;
    UIView *_bottomView;
    UIImageView *_topLineInBottomView;
    UIImageView *_leftLineInBottomView;
    UIImageView *_rightLineInBottomView;
    UILabel *_moreInviteWaysLbl;
    UIButton *_faceInviteBtn;
    UILabel *_faceInviteLbl;
    UIButton *_aCopyLinkBtn;
    UILabel *_aCopyLinkLbl;
}

@property(retain, nonatomic) UILabel *aCopyLinkLbl; // @synthesize aCopyLinkLbl=_aCopyLinkLbl;
@property(retain, nonatomic) UIButton *aCopyLinkBtn; // @synthesize aCopyLinkBtn=_aCopyLinkBtn;
@property(retain, nonatomic) UILabel *faceInviteLbl; // @synthesize faceInviteLbl=_faceInviteLbl;
@property(retain, nonatomic) UIButton *faceInviteBtn; // @synthesize faceInviteBtn=_faceInviteBtn;
@property(retain, nonatomic) UILabel *moreInviteWaysLbl; // @synthesize moreInviteWaysLbl=_moreInviteWaysLbl;
@property(retain, nonatomic) UIImageView *rightLineInBottomView; // @synthesize rightLineInBottomView=_rightLineInBottomView;
@property(retain, nonatomic) UIImageView *leftLineInBottomView; // @synthesize leftLineInBottomView=_leftLineInBottomView;
@property(retain, nonatomic) UIImageView *topLineInBottomView; // @synthesize topLineInBottomView=_topLineInBottomView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *shareTipsLbl; // @synthesize shareTipsLbl=_shareTipsLbl;
@property(retain, nonatomic) UIButton *inviteOtherToJoinButton; // @synthesize inviteOtherToJoinButton=_inviteOtherToJoinButton;
@property(retain, nonatomic) UIImageView *verifyIcon; // @synthesize verifyIcon=_verifyIcon;
@property(retain, nonatomic) UILabel *orgNameLbl; // @synthesize orgNameLbl=_orgNameLbl;
- (void).cxx_destruct;
- (void)setInviteOtherToJoinButtonBackgroud;
- (void)configCellWithItem:(id)arg1;
- (void)layoutCustomCell;
- (void)onInviteNewPersionToJoinClicked:(id)arg1;
- (void)onInviteCodeClicked:(id)arg1;
- (void)onFaceInviteClicked:(id)arg1;
- (void)addSubViewForCustomCell;

@end

