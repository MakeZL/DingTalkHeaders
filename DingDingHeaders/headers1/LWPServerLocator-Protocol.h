//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol LWPServerLocator <NSObject>
- (void)reorderServerUrl:(NSString *)arg1;
- (void)updateServerListWithData:(NSData *)arg1;
- (void)updateServerList:(NSArray *)arg1;
- (void)asyncUpdateServerList:(_Bool)arg1;
- (void)clearServerCache;
- (void)lwpLocatorServerConnectFail:(NSString *)arg1 isShort:(_Bool)arg2;
- (void)lwpLocatorServerAuthed:(NSString *)arg1 isShort:(_Bool)arg2;
- (void)lwpLocatorServerConnected:(NSString *)arg1 isShort:(_Bool)arg2;
- (void)lwpLocatorServerBroken:(NSString *)arg1 isShort:(_Bool)arg2;
- (NSString *)lwpLocatorGetShortServerUrl;
- (NSString *)lwpLocatorGetServerUrl;

@optional
- (NSArray *)allServerUrls;
- (NSString *)lwpLocatorGetSecondServerUrl;
- (NSString *)lwpLocatorGetFirstServerUrl;
@end

