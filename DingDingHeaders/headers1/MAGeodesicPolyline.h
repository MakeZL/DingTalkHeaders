//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAPolyline.h"

@interface MAGeodesicPolyline : MAPolyline
{
}

+ (id)polylineWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (CDStruct_c3b9c2ee *)geodesicLinesForMapPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 outCount:(unsigned long long *)arg3;
+ (double)longitudeSpanWithCoord1:(CDStruct_c3b9c2ee)arg1 coord2:(CDStruct_c3b9c2ee)arg2;

@end

