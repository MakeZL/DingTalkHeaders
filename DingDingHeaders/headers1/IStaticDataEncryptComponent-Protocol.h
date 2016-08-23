//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol IStaticDataEncryptComponent <NSObject>
- (NSData *)staticBinarySafeDecryptNoB64:(long long)arg1 forKey:(NSString *)arg2 forNeedProcessValue:(NSData *)arg3;
- (NSData *)staticBinarySafeEncryptNoB64:(long long)arg1 forKey:(NSString *)arg2 forNeedProcessValue:(NSData *)arg3;
- (NSData *)staticBinarySafeDecrypt:(long long)arg1 forKey:(NSString *)arg2 forNeedProcessValue:(NSData *)arg3;
- (NSData *)staticBinarySafeEncrypt:(long long)arg1 forKey:(NSString *)arg2 forNeedProcessValue:(NSData *)arg3;
- (NSString *)staticSafeDecrypt:(long long)arg1 forKey:(NSString *)arg2 forNeedProcessValue:(NSString *)arg3;
- (NSString *)staticSafeEncrypt:(long long)arg1 forKey:(NSString *)arg2 forNeedProcessValue:(NSString *)arg3;
@end

