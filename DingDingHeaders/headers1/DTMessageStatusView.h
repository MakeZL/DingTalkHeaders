//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTMessageStatusViewItem, UIActivityIndicatorView, UIButton;
@protocol DTMessageStatusViewDelegate;

@interface DTMessageStatusView : UIView
{
    id <DTMessageStatusViewDelegate> _delegate;
    UIButton *_unreadCountButton;
    UIButton *_failureButton;
    UIActivityIndicatorView *_loadingView;
    UIButton *_unreadAlertButton;
    DTMessageStatusViewItem *_statusItem;
    UIButton *_pauseUploadingButton;
}

@property(retain, nonatomic) UIButton *pauseUploadingButton; // @synthesize pauseUploadingButton=_pauseUploadingButton;
@property(retain, nonatomic) DTMessageStatusViewItem *statusItem; // @synthesize statusItem=_statusItem;
@property(retain, nonatomic) UIButton *unreadAlertButton; // @synthesize unreadAlertButton=_unreadAlertButton;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *failureButton; // @synthesize failureButton=_failureButton;
@property(retain, nonatomic) UIButton *unreadCountButton; // @synthesize unreadCountButton=_unreadCountButton;
@property(nonatomic) __weak id <DTMessageStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pauseButtonPressed:(id)arg1;
- (void)failureButtonPressed:(id)arg1;
- (void)unreadCountButtonPressed:(id)arg1;
- (void)unreadAlertButtonPressed;
- (void)changePauseButtonVisible:(_Bool)arg1;
- (void)updateUIWithItem:(id)arg1;
- (void)setUnreadAlertButtonDelayShow:(id)arg1;
- (void)setStatusAlertHidden:(_Bool)arg1;
- (void)configWithItem:(id)arg1;
- (void)updateCountDownNotification:(id)arg1;
- (void)layoutPauseButton;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;

@end
