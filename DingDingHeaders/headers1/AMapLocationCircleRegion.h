//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapLocationRegion.h"

@interface AMapLocationCircleRegion : AMapLocationRegion
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)coordinateInCircumscribedRegion:(CDStruct_c3b9c2ee)arg1;
- (void)dealloc;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee center;
- (id)initWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 identifier:(id)arg3;

@end

