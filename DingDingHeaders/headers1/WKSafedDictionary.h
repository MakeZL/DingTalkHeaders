//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WKSafedDictionary : NSObject
{
    struct _opaque_pthread_rwlock_t rwlock;
    NSMutableDictionary *_dic;
}

@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void).cxx_destruct;
- (long long)count;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(long long)arg1;
- (id)init;

@end

