//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSMutableArray;

@interface TBSDKThreadSafeMutableArry : NSArray
{
    struct _opaque_pthread_rwlock_t s_pthread_rwlock_t;
    NSMutableArray *_mutableArry;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)getCount;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

