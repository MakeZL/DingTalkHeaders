//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSData, NSNumber, NSString;

@interface DTOACheckInPushModel : Marshal
{
    NSString *_corpId;
    NSNumber *_planId;
    NSNumber *_startDate;
    NSNumber *_endDate;
    NSData *_wifiList;
    NSData *_positionList;
}

@property(retain, nonatomic) NSData *positionList; // @synthesize positionList=_positionList;
@property(retain, nonatomic) NSData *wifiList; // @synthesize wifiList=_wifiList;
@property(retain, nonatomic) NSNumber *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSNumber *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSNumber *planId; // @synthesize planId=_planId;
@property(copy, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

