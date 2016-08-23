//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTClientInfoModel : Marshal
{
    NSString *_appName;
    NSString *_appVersion;
    NSString *_osName;
    NSString *_osVersion;
    NSString *_clientType;
    NSString *_timestamp;
    NSString *_umidToken;
    NSString *_wua;
    NSString *_cpuArch;
    NSString *_mobileModel;
    NSString *_livenessSdkName;
    NSString *_livenessSdkVersion;
}

@property(copy, nonatomic) NSString *livenessSdkVersion; // @synthesize livenessSdkVersion=_livenessSdkVersion;
@property(copy, nonatomic) NSString *livenessSdkName; // @synthesize livenessSdkName=_livenessSdkName;
@property(copy, nonatomic) NSString *mobileModel; // @synthesize mobileModel=_mobileModel;
@property(copy, nonatomic) NSString *cpuArch; // @synthesize cpuArch=_cpuArch;
@property(copy, nonatomic) NSString *wua; // @synthesize wua=_wua;
@property(copy, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *osName; // @synthesize osName=_osName;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

