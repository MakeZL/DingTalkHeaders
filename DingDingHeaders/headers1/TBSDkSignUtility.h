//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBSDkSignUtility : NSObject
{
    NSMutableDictionary *_appkeyApiDict;
    struct _opaque_pthread_rwlock_t _rwlock;
}

+ (id)md5:(id)arg1 value:(id)arg2;
+ (id)getMtopSignWithAppkey:(id)arg1 withApiName:(id)arg2 withApiVersion:(id)arg3 withT:(id)arg4 withSid:(id)arg5 withTtid:(id)arg6 withDeviceId:(id)arg7 withLatitude:(id)arg8 withLongitude:(id)arg9 withEcode:(id)arg10 withData:(id)arg11 withHeader:(id)arg12;
+ (id)shareInstance;
@property(nonatomic) struct _opaque_pthread_rwlock_t rwlock; // @synthesize rwlock=_rwlock;
@property(retain, nonatomic) NSMutableDictionary *appkeyApiDict; // @synthesize appkeyApiDict=_appkeyApiDict;
- (void).cxx_destruct;
- (void)addSecurity:(id)arg1;
- (void)removeSecurity:(id)arg1;
- (_Bool)isMtopSecurityAppkeySign:(id)arg1 withVersion:(id)arg2;
- (void)dealloc;
- (id)init;

@end

