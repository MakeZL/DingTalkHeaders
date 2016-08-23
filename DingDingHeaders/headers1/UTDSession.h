//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UTDSession : NSObject
{
    long long lastBackgroundTime;
    long long _pid;
    long long _utPid;
    NSString *_sessionID;
    NSString *_nick;
    NSString *_longNick;
    NSString *_userID;
    NSString *_longUserID;
    long long _sessionRefrshTime;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedUTDSession;
@property(nonatomic) long long sessionRefrshTime; // @synthesize sessionRefrshTime=_sessionRefrshTime;
@property(retain, nonatomic) NSString *longUserID; // @synthesize longUserID=_longUserID;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *longNick; // @synthesize longNick=_longNick;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long utPid; // @synthesize utPid=_utPid;
@property(nonatomic) long long pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)vaild;
- (id)generateSessionID;
- (void)updateSession;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

