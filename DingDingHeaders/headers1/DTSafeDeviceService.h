//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTSafeDeviceService : NSObject
{
}

+ (id)sharedService;
- (void)saveSwitcherState:(_Bool)arg1;
- (_Bool)switcherState;
- (id)loadSafeDeviceList;
- (void)saveDeviceList:(id)arg1;
- (void)updateDeviceInfoWithDid:(id)arg1 newInfo:(id)arg2 SuccessBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)deleteDevicesWithDids:(id)arg1 SuccessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)changeSafeModel:(_Bool)arg1 SuccessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)SafeDevicesFromServiceWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;

@end

