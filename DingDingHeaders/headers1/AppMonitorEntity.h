//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AppMonitorMeasureValueSet, NSLock, NSMutableArray;

@interface AppMonitorEntity : NSObject
{
    _Bool _isDetail;
    long long _count;
    long long _noise;
    AppMonitorMeasureValueSet *_measureValues;
    NSMutableArray *_measureValuesArray;
    NSLock *_lock;
}

@property _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *measureValuesArray; // @synthesize measureValuesArray=_measureValuesArray;
@property(retain, nonatomic) AppMonitorMeasureValueSet *measureValues; // @synthesize measureValues=_measureValues;
@property(nonatomic) long long noise; // @synthesize noise=_noise;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)merge:(id)arg1 metric:(id)arg2;
- (void)incrNoise;
- (void)incrCount;
- (id)init;

@end
