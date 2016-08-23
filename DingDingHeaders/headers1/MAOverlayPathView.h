//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayView.h"

@class NSArray, UIColor;

@interface MAOverlayPathView : MAOverlayView
{
    int _lineJoin;
    int _lineCap;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    double _miterLimit;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
    struct CGPath *_path;
}

@property(copy) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property double miterLimit; // @synthesize miterLimit=_miterLimit;
@property int lineCap; // @synthesize lineCap=_lineCap;
@property int lineJoin; // @synthesize lineJoin=_lineJoin;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOverlay:(id)arg1;
- (void)initDefaultAttributes;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
@property struct CGPath *path; // @synthesize path=_path;
- (void)invalidatePath;
- (void)createPath;

@end

