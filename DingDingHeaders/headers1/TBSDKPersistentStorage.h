//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TBSDKPersistentStorage : NSObject
{
    NSString *_cachefile;
    NSMutableDictionary *_cache;
    struct _opaque_pthread_rwlock_t _rwlock;
}

+ (id)storageWithoutICloudBackup;
+ (id)standardStorage;
@property(nonatomic) struct _opaque_pthread_rwlock_t rwlock; // @synthesize rwlock=_rwlock;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSString *cachefile; // @synthesize cachefile=_cachefile;
- (void).cxx_destruct;
- (void)flush;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (long long)longLongForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (void)loadData;
- (id)getFileName;
- (id)init;

@end

