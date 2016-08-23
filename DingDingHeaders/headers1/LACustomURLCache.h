//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLCache.h>

@class NSMutableDictionary, NSString;

@interface LACustomURLCache : NSURLCache
{
    unsigned long long _cacheTime;
    NSString *_diskPath;
    NSMutableDictionary *_responseDictionary;
}

+ (void)configURLCache;
@property(retain, nonatomic) NSMutableDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(copy, nonatomic) NSString *diskPath; // @synthesize diskPath=_diskPath;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
- (void).cxx_destruct;
- (void)filterExpiredCachesAtPatch:(id)arg1 cacheTime:(long long)arg2;
- (id)dataForRequest:(id)arg1;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeAllCachedResponses;
- (id)cachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)clearAllCachedResponse;
- (void)dealloc;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 cacheTime:(unsigned long long)arg4;

@end
