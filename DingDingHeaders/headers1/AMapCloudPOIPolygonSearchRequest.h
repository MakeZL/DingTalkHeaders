//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapCloudSearchBaseRequest.h"

@class AMapGeoPolygon, NSString;

@interface AMapCloudPOIPolygonSearchRequest : AMapCloudSearchBaseRequest
{
    AMapGeoPolygon *_polygon;
    NSString *_keywords;
}

@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) AMapGeoPolygon *polygon; // @synthesize polygon=_polygon;
- (void).cxx_destruct;
- (id)description;

@end

