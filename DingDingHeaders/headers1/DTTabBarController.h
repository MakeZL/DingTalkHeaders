//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "DTTabBarDelegate-Protocol.h"

@class CMMotionManager, DTTabBar, NSString;
@protocol DTTabBarControllerDelegate><UITabBarControllerDelegate;

@interface DTTabBarController : UITabBarController <DTTabBarDelegate>
{
    DTTabBar *_customTabBar;
    CMMotionManager *_motionManager;
}

@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly, nonatomic) DTTabBar *customTabBar; // @synthesize customTabBar=_customTabBar;
- (void).cxx_destruct;
- (void)tabBar:(id)arg1 didDoubleSelectAtIndex:(int)arg2;
- (void)tabBar:(id)arg1 didSelectAtIndex:(int)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)cleanOriginalTabBar;
- (void)viewDidLayoutSubviews;
- (void)stopMotionDetect;
- (void)startMotionDetect;
- (void)layoutTabBarItem;
- (void)layoutTabBar;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <DTTabBarControllerDelegate><UITabBarControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
