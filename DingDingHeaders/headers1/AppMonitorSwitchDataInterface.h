//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock;

@interface AppMonitorSwitchDataInterface : NSObject
{
    _Bool _sample;
    NSLock *_lock;
}

+ (void)disableSample;
+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property _Bool sample; // @synthesize sample=_sample;
- (void).cxx_destruct;
- (void)setLocalConfig;
- (_Bool)GetResult:(id)arg1 MonitorPoint:(id)arg2 Type:(id)arg3 Dimension:(id)arg4 Arg:(id)arg5;
- (id)GetDetailPoint:(id)arg1 MonitorPoint:(id)arg2;
- (int)GetValidPoint:(id)arg1 MonitorPoint:(id)arg2 Measure:(id)arg3 measureValue:(id)arg4;
- (id)init;

@end
