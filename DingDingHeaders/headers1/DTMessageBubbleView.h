//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class DTMessageBubbleTapMaskView, NSString, UIActivityIndicatorView, UIButton, UIImageView;
@protocol DTMessageBubbleViewDataSource, DTMessageBubbleViewDelegate;

@interface DTMessageBubbleView : UIView <UIGestureRecognizerDelegate>
{
    id <DTMessageBubbleViewDelegate> _delegate;
    id <DTMessageBubbleViewDataSource> _dataSource;
    DTMessageBubbleTapMaskView *_tapMaskView;
    UIImageView *_dingIconImageView;
    UIButton *_confirmDingButton;
    UIImageView *_bubbleBackgroundImageView;
    UIActivityIndicatorView *_confirmIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *confirmIndicatorView; // @synthesize confirmIndicatorView=_confirmIndicatorView;
@property(retain, nonatomic) UIImageView *bubbleBackgroundImageView; // @synthesize bubbleBackgroundImageView=_bubbleBackgroundImageView;
@property(retain, nonatomic) UIButton *confirmDingButton; // @synthesize confirmDingButton=_confirmDingButton;
@property(retain, nonatomic) UIImageView *dingIconImageView; // @synthesize dingIconImageView=_dingIconImageView;
@property(retain, nonatomic) DTMessageBubbleTapMaskView *tapMaskView; // @synthesize tapMaskView=_tapMaskView;
@property(nonatomic) __weak id <DTMessageBubbleViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <DTMessageBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)moreItem:(id)arg1;
- (void)untranslate:(id)arg1;
- (void)translate:(id)arg1;
- (void)translateAudioToText:(id)arg1;
- (void)collapseAudioContent:(id)arg1;
- (void)addEmotionFavorite:(id)arg1;
- (void)addFavorite:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)saveToSpace:(id)arg1;
- (void)recallItem:(id)arg1;
- (void)transmitItem:(id)arg1;
- (void)ding:(id)arg1;
- (void)saveImage:(id)arg1;
- (void)copyText:(id)arg1;
- (void)triggerMenuActionWithType:(long long)arg1;
- (id)menuItemsWithMessage:(id)arg1;
- (void)handleLongTap:(id)arg1;
- (_Bool)isDisplayingTranslationAudioContent:(id)arg1;
- (_Bool)isOnTranslatingAudio:(id)arg1;
- (_Bool)needSaveCSpace:(id)arg1;
- (_Bool)needShowUntranslate:(id)arg1;
- (_Bool)needShowTtranslate:(id)arg1;
- (_Bool)needShowRecall:(id)arg1;
- (_Bool)needShowFavorite:(id)arg1;
- (_Bool)needShowTransmit:(id)arg1;
- (_Bool)needShowDing:(id)arg1;
- (void)handleDoubleTap;
- (void)handleTap;
- (void)confirmReceived;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)addGestureRecognizers;
- (void)configWithItem:(id)arg1;
- (void)showAlphaLight:(_Bool)arg1;
- (void)showDingNeedConfirmButton:(id)arg1;
- (void)dismissDing;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
