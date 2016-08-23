//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView;

@interface DTMessagePanGesture : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _startPan;
    double _offset;
    UIPanGestureRecognizer *_panGesture;
    UIView *_targetView;
    struct CGPoint _beginPoint;
}

+ (id)shareInstance;
@property(nonatomic) _Bool startPan; // @synthesize startPan=_startPan;
@property(nonatomic) struct CGPoint beginPoint; // @synthesize beginPoint=_beginPoint;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePanGestures:(id)arg1;
- (void)removePanGesture;
- (void)addPanGesture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

