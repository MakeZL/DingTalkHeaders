//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface WKIDLRegEventModel : Marshal
{
    NSNumber *_openid;
    NSString *_domain;
    NSNumber *_onlineTime;
    NSString *_deviceId;
    NSString *_deviceType;
    NSNumber *_pts;
    NSNumber *_seq;
    NSNumber *_time;
    NSNumber *_connReused;
}

@property(retain, nonatomic) NSNumber *connReused; // @synthesize connReused=_connReused;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(retain, nonatomic) NSNumber *seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSNumber *pts; // @synthesize pts=_pts;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSNumber *onlineTime; // @synthesize onlineTime=_onlineTime;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSNumber *openid; // @synthesize openid=_openid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

