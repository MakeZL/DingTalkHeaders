//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface QPLightProgress : UIView
{
    UIImageView *_imageViewAdd;
    UIImageView *_imageViewSub;
    UIImageView *_imageViewLight;
    double _lineAddYFrom;
    double _lineAddYTo;
    double _lineSubYFrom;
    double _lineSubTo;
    double _lineX;
    double _lineCap;
    double _lineHeight;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)refreshPosition;
- (id)initWithFrame:(struct CGRect)arg1;

@end

