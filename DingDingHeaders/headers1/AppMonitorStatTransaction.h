//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AppMonitorStatTransaction : NSObject
{
    NSString *_eventId;
    NSString *_module;
    NSString *_monitorPoint;
    NSString *_transactionId;
}

- (void).cxx_destruct;
- (void)endWithMeasureName:(id)arg1;
- (void)beginWithMeasureName:(id)arg1;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3;

@end

