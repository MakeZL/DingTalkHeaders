//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppMonitorEvent.h"

@class AppMonitorMeasureValueSet, AppMonitorMetric, NSLock, NSMutableDictionary;

@interface AppMonitorDurationEvent : AppMonitorEvent
{
    AppMonitorMetric *_metric;
    AppMonitorMeasureValueSet *_measureValues;
    NSMutableDictionary *_string_x_measureValue_undonePeriod;
    double _initTime;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(retain, nonatomic) NSMutableDictionary *string_x_measureValue_undonePeriod; // @synthesize string_x_measureValue_undonePeriod=_string_x_measureValue_undonePeriod;
@property(retain, nonatomic) AppMonitorMeasureValueSet *measureValues; // @synthesize measureValues=_measureValues;
@property(retain, nonatomic) AppMonitorMetric *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (_Bool)endWithMeasureName:(id)arg1;
- (void)startWithMeasureName:(id)arg1;
- (_Bool)isExpired;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3;

@end

