//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, LALocationManager;

@protocol LALocationManagerDelegate <NSObject>
- (void)loactionManager:(LALocationManager *)arg1 didFailWithCode:(long long)arg2;
- (void)loactionManager:(LALocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)updateLocationDidBeganWithLocationManager:(LALocationManager *)arg1;
@end

