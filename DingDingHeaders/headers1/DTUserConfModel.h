//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTUserConfModel : Marshal
{
    NSString *_domain;
    NSString *_os;
    NSString *_sdkVersion;
    NSString *_deviceId;
    NSString *_netType;
}

@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
