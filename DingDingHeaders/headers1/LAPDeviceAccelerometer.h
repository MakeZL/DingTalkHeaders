//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@class CMMotionManager;

@interface LAPDeviceAccelerometer : LAPluginBase
{
    CMMotionManager *_motionManager;
}

+ (id)pluginExactName;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)checkAccelertionData:(CDStruct_39925896)arg1 withSensitivity:(double)arg2 callbackDelay:(double)arg3 response:(id)arg4;
- (void)startAccelerometerWithSensitivity:(double)arg1 frequency:(double)arg2 callbackDelay:(double)arg3 response:(id)arg4;
- (void)clearShake:(id)arg1 to:(id)arg2;
- (void)__exported__clearShake:(id)arg1 to:(id)arg2;
- (void)watchShake:(id)arg1 to:(id)arg2;
- (void)__exported__watchShake:(id)arg1 to:(id)arg2;

@end

