//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface WKIDLLoginModel : Marshal
{
    _Bool _withRegister;
    NSString *_org;
    NSString *_domain;
    NSString *_appKey;
    NSString *_appSecret;
    NSNumber *_openId;
    NSString *_openSecret;
    NSString *_deviceId;
}

@property(nonatomic) _Bool withRegister; // @synthesize withRegister=_withRegister;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *openSecret; // @synthesize openSecret=_openSecret;
@property(retain, nonatomic) NSNumber *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *org; // @synthesize org=_org;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

