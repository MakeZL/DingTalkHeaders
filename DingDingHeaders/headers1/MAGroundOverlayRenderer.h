//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayRenderer.h"

@class MAGroundOverlay;

@interface MAGroundOverlayRenderer : MAOverlayRenderer
{
}

- (id)initWithGroundOverlay:(id)arg1;
- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
@property(readonly, nonatomic) MAGroundOverlay *groundOverlay;

@end

