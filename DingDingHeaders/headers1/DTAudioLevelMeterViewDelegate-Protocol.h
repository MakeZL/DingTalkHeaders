//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol DTAudioLevelMeterViewDelegate <NSObject>

@optional
- (void)audioLevelMeterRemainDuration:(double)arg1 needShow:(_Bool)arg2;
- (void)audioLevelMeterDidStop:(NSArray *)arg1 duration:(double)arg2;
@end

