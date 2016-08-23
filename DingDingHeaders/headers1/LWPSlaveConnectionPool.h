//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface LWPSlaveConnectionPool : NSObject
{
    NSMutableDictionary *_maxConnectionCountMap;
    NSMutableDictionary *_connectionPool;
}

@property(retain, nonatomic) NSMutableDictionary *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(retain, nonatomic) NSMutableDictionary *maxConnectionCountMap; // @synthesize maxConnectionCountMap=_maxConnectionCountMap;
- (void).cxx_destruct;
- (void)updateSlavePoolSize:(long long)arg1 forSubMode:(unsigned long long)arg2;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)cancelRequestInSlaveConn:(id)arg1 subMode:(unsigned long long)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1 forSubMode:(unsigned long long)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)allObjects;
- (id)connectionWithId:(id)arg1;
- (id)anyObject:(unsigned long long)arg1;
- (id)firstObject:(unsigned long long)arg1;
- (id)connectionsForSubMode:(unsigned long long)arg1;
- (id)connectionAtIndex:(long long)arg1 forSubMode:(unsigned long long)arg2;
- (long long)countForSubMode:(unsigned long long)arg1;
- (long long)count;
- (void)removeAllObjects;
- (long long)maxForSubMode:(unsigned long long)arg1;
- (_Bool)isPoolFullForSubMode:(unsigned long long)arg1;
- (id)init;

@end
