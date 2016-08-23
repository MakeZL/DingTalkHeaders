//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSString;

@interface AppMonitorConfigSystem : NSObject
{
    _Bool _useUT;
    _Bool _discardAp;
    int _cacheFlushInterval;
    int _cacheTriggeCount;
    int _uploadInterval;
    int _orangeUploadInterval;
    NSDictionary *_systemDict;
    NSDictionary *_defaultSystemDict;
    NSString *_hotpatchVersion;
    NSLock *_lock;
}

+ (id)sharedInstance;
@property(nonatomic) int orangeUploadInterval; // @synthesize orangeUploadInterval=_orangeUploadInterval;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) NSString *hotpatchVersion; // @synthesize hotpatchVersion=_hotpatchVersion;
@property(retain, nonatomic) NSDictionary *defaultSystemDict; // @synthesize defaultSystemDict=_defaultSystemDict;
@property(retain, nonatomic) NSDictionary *systemDict; // @synthesize systemDict=_systemDict;
@property(nonatomic) int uploadInterval; // @synthesize uploadInterval=_uploadInterval;
@property(nonatomic) int cacheTriggeCount; // @synthesize cacheTriggeCount=_cacheTriggeCount;
@property(nonatomic) int cacheFlushInterval; // @synthesize cacheFlushInterval=_cacheFlushInterval;
@property _Bool discardAp; // @synthesize discardAp=_discardAp;
@property(nonatomic) _Bool useUT; // @synthesize useUT=_useUT;
- (void).cxx_destruct;
- (void)dealloc;
- (id)restoreHotpatchVersion;
- (int)cacheTriggeCount:(id)arg1;
- (void)setDicContent:(id)arg1;
- (id)reflectHotpatchVersion;
- (void)tbHotpatchDownloadRunPatch:(id)arg1;
- (id)init;

@end

