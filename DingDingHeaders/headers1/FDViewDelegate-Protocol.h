//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ABFaceFrame;

@protocol FDViewDelegate <NSObject>
- (void)onVolumeNotify:(float)arg1;
- (void)onGoBack;
- (void)onShowProgressView;
- (void)onRestartDetect;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)showEnvironmentView:(id <ABFaceFrame>)arg1;
- (void)playPhaseSound;
- (void)showPhaseView;
@end

