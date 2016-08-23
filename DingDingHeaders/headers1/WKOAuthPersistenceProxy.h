//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WKOAuthPersistence;

@interface WKOAuthPersistenceProxy : NSObject
{
    WKOAuthPersistence *_oauthPersistence;
}

@property(retain, nonatomic) WKOAuthPersistence *oauthPersistence; // @synthesize oauthPersistence=_oauthPersistence;
- (void).cxx_destruct;
- (void)removeUserValueForKey:(id)arg1;
- (void)setUserValue:(id)arg1 forKey:(id)arg2;
- (id)userValueForKey:(id)arg1;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (void)setDeviceId:(id)arg1;
- (id)deviceId;
- (void)setOpenId:(long long)arg1;
- (long long)openId;
- (void)clearAuthorization;
- (void)saveAuthorization:(id)arg1;
- (id)authorization;
- (void)setProductSign:(id)arg1;
- (id)productSign;
- (void)setOrgnization:(id)arg1;
- (id)orgnization;
- (id)initWithDatabasePicker:(CDUnknownBlockType)arg1;

@end

