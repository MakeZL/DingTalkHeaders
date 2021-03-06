//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAShape.h"

#import "MAOverlay-Protocol.h"

@class NSString, UIImage;

@interface MAGroundOverlay : MAShape <MAOverlay>
{
    UIImage *_icon;
    double _zoomLevel;
    double _halfWidth;
    double _halfHeight;
    CDStruct_2c43369c _coordinate;
    CDStruct_34734122 _centerMapPoint;
    CDStruct_dafdc2cb _bounds;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)groundOverlayWithBounds:(CDStruct_90e2a262)arg1 icon:(id)arg2;
+ (id)groundOverlayWithCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 icon:(id)arg3;
@property(nonatomic) CDStruct_c3b9c2ee centerMapPoint; // @synthesize centerMapPoint=_centerMapPoint;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(nonatomic) double halfHeight; // @synthesize halfHeight=_halfHeight;
@property(nonatomic) double halfWidth; // @synthesize halfWidth=_halfWidth;
@property(readonly, nonatomic) CDStruct_90e2a262 bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithBounds:(CDStruct_90e2a262)arg1 icon:(id)arg2;
- (id)initWithPosition:(CDStruct_c3b9c2ee)arg1 zoomLevel:(double)arg2 icon:(id)arg3;
- (void)calculateWidthAndHeightOnMapPoint;
- (void)parseCoordinateBounds:(CDStruct_90e2a262)arg1;
- (void)calculateBoundingMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

