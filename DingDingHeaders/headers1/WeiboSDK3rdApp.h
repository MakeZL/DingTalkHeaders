//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface WeiboSDK3rdApp : NSObject
{
    NSString *name;
    NSString *appKey;
    NSString *bundleID;
    NSData *iconData;
    NSString *_aid;
}

+ (id)appWithDictionary:(id)arg1;
+ (id)dictionaryWithApp:(id)arg1;
+ (id)currentApp;
+ (id)callbackSchemeWithAppKey:(id)arg1;
+ (id)callbackSchemePrefix;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isAppInstalled;
- (id)callbackScheme;

@end

