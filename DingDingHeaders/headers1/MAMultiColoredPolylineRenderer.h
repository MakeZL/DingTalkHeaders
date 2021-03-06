//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAPolylineRenderer.h"

@class MAMultiPolyline, NSArray;

@interface MAMultiColoredPolylineRenderer : MAPolylineRenderer
{
    NSArray *_normalizedDrawIndexes;
    _Bool _gradient;
    NSArray *_strokeColors;
}

@property(nonatomic, getter=isGradient) _Bool gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) NSArray *strokeColors; // @synthesize strokeColors=_strokeColors;
- (void).cxx_destruct;
- (id)initWithMultiPolyline:(id)arg1;
- (void)normalizeDrawIndexes;
- (_Bool)checkStrokeColors:(id)arg1;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (id)getColorForIndexOfDrawIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) MAMultiPolyline *multiPolyline;

@end

