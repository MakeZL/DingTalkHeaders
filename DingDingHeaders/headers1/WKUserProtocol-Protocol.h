//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WKUserProtocol <NSObject>
@property(copy, nonatomic) NSDictionary *extension;
@property(copy, nonatomic) NSString *mobile;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *city;
@property(nonatomic) long long birthday;
@property(copy, nonatomic) NSString *remark;
@property(copy, nonatomic) NSString *avatar;
@property(nonatomic) long long gender;
@property(copy, nonatomic) NSString *nickname;
- (long long)remoteServerVersion;
- (_Bool)isActive;
- (NSString *)nickPinyin;
- (long long)openId;
@end

