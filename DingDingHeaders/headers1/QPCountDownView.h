//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAudioPlayer, UILabel;
@protocol QPCountDownViewDelegate;

@interface QPCountDownView : UIView
{
    UILabel *_label;
    AVAudioPlayer *_audioPlayer;
    long long _count;
    id <QPCountDownViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QPCountDownViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)endAnimation;
- (void)_startAnimation;
- (void)startAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)createLabel;
- (id)initWithFrame:(struct CGRect)arg1 count:(long long)arg2;

@end

