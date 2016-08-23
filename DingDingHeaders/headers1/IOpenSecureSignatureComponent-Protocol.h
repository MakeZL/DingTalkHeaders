//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, OpenSecurityGuardParamContext;

@protocol IOpenSecureSignatureComponent <NSObject>
- (NSString *)getSafeCookie:(NSString *)arg1 secretKey:(NSString *)arg2 authCode:(NSString *)arg3;
- (NSString *)signRequest:(OpenSecurityGuardParamContext *)arg1 authCode:(NSString *)arg2;
@end

