//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface LmiIPhoneView : UIView
{
    struct LmiWindow_ *window;
}

+ (Class)layerClass;
- (void)hideOnMainThread:(id)arg1;
- (void)showOnMainThread:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)processTouches:(id)arg1 forTheState:(int)arg2;
- (void)setFrameFromLmiWindow;
- (id)initWithFrame:(struct CGRect)arg1 andItsLmiWindow:(struct LmiWindow_ *)arg2;

@end

