//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber;

@interface DTDingSumModel : Marshal
{
    NSNumber *_startTimeOfDay;
    NSNumber *_count;
    NSNumber *_unConfirmedCount;
}

@property(retain, nonatomic) NSNumber *unConfirmedCount; // @synthesize unConfirmedCount=_unConfirmedCount;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *startTimeOfDay; // @synthesize startTimeOfDay=_startTimeOfDay;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

