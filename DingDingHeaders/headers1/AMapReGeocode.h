//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapAddressComponent, NSArray, NSString;

@interface AMapReGeocode : AMapSearchObject
{
    NSString *_formattedAddress;
    AMapAddressComponent *_addressComponent;
    NSArray *_roads;
    NSArray *_roadinters;
    NSArray *_pois;
    NSArray *_aois;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *aois; // @synthesize aois=_aois;
@property(retain, nonatomic) NSArray *pois; // @synthesize pois=_pois;
@property(retain, nonatomic) NSArray *roadinters; // @synthesize roadinters=_roadinters;
@property(retain, nonatomic) NSArray *roads; // @synthesize roads=_roads;
@property(retain, nonatomic) AMapAddressComponent *addressComponent; // @synthesize addressComponent=_addressComponent;
@property(copy, nonatomic) NSString *formattedAddress; // @synthesize formattedAddress=_formattedAddress;
- (void).cxx_destruct;
- (id)init;

@end

