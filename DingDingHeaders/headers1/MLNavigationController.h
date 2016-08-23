//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UIView;

@interface MLNavigationController : UINavigationController <UIGestureRecognizerDelegate>
{
    struct CGPoint startTouch;
    UIImageView *lastScreenShotView;
    UIView *blackMask;
    _Bool _canDragBack;
    _Bool _disableGoBack;
    _Bool _isMoving;
    UIView *_backgroundView;
    NSMutableArray *_screenShotsList;
}

@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) NSMutableArray *screenShotsList; // @synthesize screenShotsList=_screenShotsList;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool disableGoBack; // @synthesize disableGoBack=_disableGoBack;
@property(nonatomic) _Bool canDragBack; // @synthesize canDragBack=_canDragBack;
- (void).cxx_destruct;
- (void)paningGestureReceive:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)moveViewWithX:(float)arg1;
- (id)capture;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

