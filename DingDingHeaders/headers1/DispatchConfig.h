//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface DispatchConfig : NSObject <NSCopying>
{
    _Bool _isForcedHttps;
    _Bool _isForcedSpdy;
    _Bool _isEnableFailOver;
    _Bool _isForceUseFailOverDomain;
    int _type;
    NSString *_version;
    NSString *_domain;
    NSString *_unitPrefix;
    NSString *_failOverUnitPrefix;
    NSString *_failOverDomain;
    long long _threshold;
    long long _period;
}

@property(nonatomic) long long period; // @synthesize period=_period;
@property(nonatomic) long long threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSString *failOverDomain; // @synthesize failOverDomain=_failOverDomain;
@property(nonatomic) _Bool isForceUseFailOverDomain; // @synthesize isForceUseFailOverDomain=_isForceUseFailOverDomain;
@property(nonatomic) _Bool isEnableFailOver; // @synthesize isEnableFailOver=_isEnableFailOver;
@property(nonatomic) _Bool isForcedSpdy; // @synthesize isForcedSpdy=_isForcedSpdy;
@property(nonatomic) _Bool isForcedHttps; // @synthesize isForcedHttps=_isForcedHttps;
@property(retain, nonatomic) NSString *failOverUnitPrefix; // @synthesize failOverUnitPrefix=_failOverUnitPrefix;
@property(retain, nonatomic) NSString *unitPrefix; // @synthesize unitPrefix=_unitPrefix;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWith:(id)arg1 type:(int)arg2 domain:(id)arg3 unitPrefix:(id)arg4 isForcedHttps:(_Bool)arg5 isForcedSpdy:(_Bool)arg6 isEnableFailOver:(_Bool)arg7 failOverDomain:(id)arg8 failOverUnitPrefix:(id)arg9 threshold:(long long)arg10 period:(long long)arg11;

@end

