//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSlideUnlockViewDelegate-Protocol.h"

@class DTSlideUnlockView, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;
@protocol DTSlideUnlockDelegate;

@interface DTSlideUnlockViewController : NSObject <DTSlideUnlockViewDelegate>
{
    _Bool _verifying;
    UIView *_view;
    DTSlideUnlockView *_unlockView;
    id <DTSlideUnlockDelegate> _delegate;
    NSString *_appKey;
    UIView *_statusView;
    UIImageView *_statusImageView;
    UIActivityIndicatorView *_statusIndicatorView;
    UILabel *_statusTextLabel;
    struct CGSize _noCaptchaSize;
}

@property(retain, nonatomic) UILabel *statusTextLabel; // @synthesize statusTextLabel=_statusTextLabel;
@property(retain, nonatomic) UIActivityIndicatorView *statusIndicatorView; // @synthesize statusIndicatorView=_statusIndicatorView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) struct CGSize noCaptchaSize; // @synthesize noCaptchaSize=_noCaptchaSize;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(nonatomic, getter=isVerifying) _Bool verifying; // @synthesize verifying=_verifying;
@property(nonatomic) __weak id <DTSlideUnlockDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DTSlideUnlockView *unlockView; // @synthesize unlockView=_unlockView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)didAuthFailure:(id)arg1;
- (void)didAuthSucceed:(id)arg1;
- (void)slideView:(id)arg1 touchesEnded:(struct CGPoint)arg2;
- (void)slideView:(id)arg1 touchesMoved:(struct CGPoint)arg2;
- (void)slideView:(id)arg1 touchesBegan:(struct CGPoint)arg2;
- (struct CGPoint)fixedPointWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)renderedPointWithPoint:(struct CGPoint)arg1;
- (void)generateNoCaptchaPoints;
- (void)setRenderPoints:(struct CGPoint)arg1 point2:(struct CGPoint)arg2;
- (void)refreshAction:(id)arg1;
- (void)hideStatusView;
- (void)showStatusView:(long long)arg1 text:(id)arg2;
- (void)refresh;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 appKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

