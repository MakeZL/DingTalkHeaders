//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayPathView.h"

@class MAPolyline;

@interface MAPolylineView : MAOverlayPathView
{
}

- (id)initWithPolyline:(id)arg1;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg1 atZoomScale:(double)arg2;
- (void)createPath;
@property(readonly, nonatomic) MAPolyline *polyline;

@end

