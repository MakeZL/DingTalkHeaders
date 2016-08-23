//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PLCrashReportProcessorInfo;

@interface PLCrashReportMachineInfo : NSObject
{
    NSString *_modelName;
    PLCrashReportProcessorInfo *_processorInfo;
    unsigned long long _processorCount;
    unsigned long long _logicalProcessorCount;
}

@property(readonly, nonatomic) unsigned long long logicalProcessorCount; // @synthesize logicalProcessorCount=_logicalProcessorCount;
@property(readonly, nonatomic) unsigned long long processorCount; // @synthesize processorCount=_processorCount;
@property(readonly, nonatomic) PLCrashReportProcessorInfo *processorInfo; // @synthesize processorInfo=_processorInfo;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void)dealloc;
- (id)initWithModelName:(id)arg1 processorInfo:(id)arg2 processorCount:(unsigned long long)arg3 logicalProcessorCount:(unsigned long long)arg4;

@end

