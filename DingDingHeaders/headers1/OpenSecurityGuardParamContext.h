//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OpenSecurityGuardParamContext : NSObject
{
    NSString *_appKey;
    long long _requestType;
    NSMutableDictionary *_paramDict;
    NSString *_reserve1;
    NSString *_reserve2;
}

+ (id)createParamContextWithAppKey:(id)arg1 paramDict:(id)arg2 requestType:(long long)arg3;
@property(retain, nonatomic) NSString *reserve2; // @synthesize reserve2=_reserve2;
@property(retain, nonatomic) NSString *reserve1; // @synthesize reserve1=_reserve1;
@property(retain, nonatomic) NSMutableDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)init;

@end

