//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContent.h"

@class NSString;

@interface BLFavoriteLocation : BLFavoriteContent
{
    NSString *_locationName;
    double _longitude;
    double _latitude;
    NSString *_url;
    double _picWidth;
    double _picHeight;
}

@property(nonatomic) double picHeight; // @synthesize picHeight=_picHeight;
@property(nonatomic) double picWidth; // @synthesize picWidth=_picWidth;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (void).cxx_destruct;

@end

