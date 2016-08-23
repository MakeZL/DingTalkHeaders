//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YapCacheItem;

@interface YapCache : NSObject
{
    Class keyClass;
    struct __CFDictionary *cfdict;
    unsigned long long countLimit;
    YapCacheItem *mostRecentCacheItem;
    YapCacheItem *leastRecentCacheItem;
    YapCacheItem *evictedCacheItem;
}

- (void).cxx_destruct;
- (id)description;
- (void)enumerateKeysAndObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)containsKey:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(nonatomic) unsigned long long countLimit;
- (void)dealloc;
- (id)initWithKeyClass:(Class)arg1 keyCallbacks:(CDStruct_90be15af)arg2 countLimit:(unsigned long long)arg3;
- (id)initWithKeyClass:(Class)arg1 countLimit:(unsigned long long)arg2;
- (id)initWithKeyClass:(Class)arg1;
- (id)init;

@end
