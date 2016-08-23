//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WKAlarmService : NSObject
{
    NSMutableArray *_delegateItems;
}

+ (id)descriptionForSubtype:(long long)arg1;
+ (id)sharedAlarmService;
@property(retain, nonatomic) NSMutableArray *delegateItems; // @synthesize delegateItems=_delegateItems;
- (void).cxx_destruct;
- (void)setAlarmValue:(id)arg1 forKey:(id)arg2;
- (id)alarmValueForKey:(id)arg1;
- (void)alarm:(id)arg1 immediately:(_Bool)arg2 uploadLog:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)alarm:(id)arg1 immediately:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)alarm:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)alarmWithModel:(id)arg1 uploadLog:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (id)init;

@end
