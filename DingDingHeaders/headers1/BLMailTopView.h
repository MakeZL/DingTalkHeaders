//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BLMailDetailHeader-Protocol.h"
#import "BLMailHeaderViewDelegate-Protocol.h"
#import "BLMailInfoViewDelegate-Protocol.h"

@class BLMailDetailPresenter, BLMailInfoView, BLMeetingAreaView, NSString, UILabel;
@protocol BLMailTopViewDelegate;

@interface BLMailTopView : UIView <BLMailHeaderViewDelegate, BLMailInfoViewDelegate, BLMailDetailHeader>
{
    _Bool _infoViewShouldShow;
    BLMailDetailPresenter *_eventHandler;
    id <BLMailTopViewDelegate> _delegate;
    BLMeetingAreaView *_meetintAreaView;
    UIView *_reminderContentView;
    UILabel *_reminderLabel;
    UILabel *_titleLabel;
    BLMailInfoView *_mailInfoView;
    struct CGRect _infoViewRect;
}

@property(nonatomic) _Bool infoViewShouldShow; // @synthesize infoViewShouldShow=_infoViewShouldShow;
@property(retain, nonatomic) BLMailInfoView *mailInfoView; // @synthesize mailInfoView=_mailInfoView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGRect infoViewRect; // @synthesize infoViewRect=_infoViewRect;
@property(retain, nonatomic) UILabel *reminderLabel; // @synthesize reminderLabel=_reminderLabel;
@property(retain, nonatomic) UIView *reminderContentView; // @synthesize reminderContentView=_reminderContentView;
@property(retain, nonatomic) BLMeetingAreaView *meetintAreaView; // @synthesize meetintAreaView=_meetintAreaView;
@property(nonatomic) __weak id <BLMailTopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BLMailDetailPresenter *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)mailInfoDidClickAttachment:(id)arg1;
- (void)mailInfoView:(id)arg1 didClickReceiver:(id)arg2;
- (void)mailInfoDidClickSender:(id)arg1;
- (void)mailInfoView:(id)arg1 frameHeightChanged:(double)arg2;
- (void)mailHeaderView:(id)arg1 didClickReceiver:(id)arg2;
- (void)mailHeaderViewDidClickSender:(id)arg1;
- (id)mailEventSection;
- (void)setReminderTime:(id)arg1;
- (void)setRecipientBrief:(id)arg1 andCount:(unsigned long long)arg2;
- (void)setCcFiledTokens:(id)arg1;
- (void)setToFiledTokens:(id)arg1;
- (void)setSendTime:(id)arg1;
- (void)setSenderName:(id)arg1 andEmail:(id)arg2;
- (void)setSubjectText:(id)arg1;
- (void)setAttachmentCount:(long long)arg1;
- (void)layoutUIIfNeeded;
- (void)toggleInfoButtonTaped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
