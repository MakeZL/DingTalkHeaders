//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel;

@interface DTFontScaleSettingView : UIView
{
    UIImageView *_line;
    UIImageView *_smallFont;
    UIImageView *_bigFont;
    UIView *_ruler;
    UIImageView *_rulerLine;
    NSMutableArray *_scaleArray;
    UIImageView *_pointer;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *pointer; // @synthesize pointer=_pointer;
@property(retain, nonatomic) NSMutableArray *scaleArray; // @synthesize scaleArray=_scaleArray;
@property(retain, nonatomic) UIImageView *rulerLine; // @synthesize rulerLine=_rulerLine;
@property(retain, nonatomic) UIView *ruler; // @synthesize ruler=_ruler;
@property(retain, nonatomic) UIImageView *bigFont; // @synthesize bigFont=_bigFont;
@property(retain, nonatomic) UIImageView *smallFont; // @synthesize smallFont=_smallFont;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
- (void).cxx_destruct;
- (void)handleTouchInPoint:(struct CGPoint)arg1;
- (void)handleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
