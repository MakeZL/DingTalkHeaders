//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBCrashTouchListener : NSObject
{
    float _internal;
    double _currentTouchTimeStamp;
}

+ (id)shareInstance;
@property(nonatomic) float internal; // @synthesize internal=_internal;
@property(nonatomic) double currentTouchTimeStamp; // @synthesize currentTouchTimeStamp=_currentTouchTimeStamp;
- (_Bool)getIsUserIdle:(double)arg1;
- (id)init;

@end
