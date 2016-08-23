//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface LWPV3ServerManager : NSObject
{
    NSMutableDictionary *_domainMap;
}

+ (id)parseServerListsFromData:(id)arg1 withMaxAge:(double)arg2;
@property(retain, nonatomic) NSMutableDictionary *domainMap; // @synthesize domainMap=_domainMap;
- (void).cxx_destruct;
- (id)LWPV3Path;
- (id)convertServerItemList:(id)arg1;
- (void)parseServerInfoMap:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *serverMap;
- (double)calcPoint:(id)arg1;
- (void)removeNetInfo:(id)arg1 domain:(id)arg2;
- (void)removeNetInfo:(id)arg1;
- (id)getServerNetInfo:(id)arg1;
- (_Bool)isVPNConnected;
- (id)currentNetInfoName;
- (_Bool)isLWSServer:(id)arg1;
- (id)findAnyServerItemWithNetName:(id)arg1 serverNetInfo:(id)arg2;
- (id)findBestServerItemWithNetName:(id)arg1 serverNetInfo:(id)arg2;
- (void)updateServersData:(id)arg1;
- (void)clear;
- (id)description;
- (void)save;
- (void)cleanIfNeed;
- (void)loadHistory;
- (id)init;

@end

