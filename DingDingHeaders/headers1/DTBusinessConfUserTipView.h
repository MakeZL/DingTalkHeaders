//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface DTBusinessConfUserTipView : UIView
{
    CALayer *_layerUp;
    CALayer *_layerDown;
}

@property(retain, nonatomic) CALayer *layerDown; // @synthesize layerDown=_layerDown;
@property(retain, nonatomic) CALayer *layerUp; // @synthesize layerUp=_layerUp;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)refreshTipUpString:(id)arg1 downString:(id)arg2;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

