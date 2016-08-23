//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock;

@interface DTCSConfInfoManager : NSObject
{
    long long _currentUid;
    NSMutableSet *_reqTopicSet;
    NSRecursiveLock *_reqLock;
    NSMutableDictionary *_csTopicDic;
    NSRecursiveLock *_topicLock;
    NSMutableDictionary *_csConfigDic;
    NSRecursiveLock *_configLock;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSRecursiveLock *configLock; // @synthesize configLock=_configLock;
@property(retain, nonatomic) NSMutableDictionary *csConfigDic; // @synthesize csConfigDic=_csConfigDic;
@property(retain, nonatomic) NSRecursiveLock *topicLock; // @synthesize topicLock=_topicLock;
@property(retain, nonatomic) NSMutableDictionary *csTopicDic; // @synthesize csTopicDic=_csTopicDic;
@property(retain, nonatomic) NSRecursiveLock *reqLock; // @synthesize reqLock=_reqLock;
@property(retain, nonatomic) NSMutableSet *reqTopicSet; // @synthesize reqTopicSet=_reqTopicSet;
@property(nonatomic) long long currentUid; // @synthesize currentUid=_currentUid;
- (void).cxx_destruct;
- (id)requestingTopics;
- (void)discardDirtyDataIfNeed;
- (void)discardAllNativeData;
- (void)onScreenUnlockNotification:(id)arg1;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)onAccountLoginNotification:(id)arg1;
- (void)handleCloudSettingNotify:(id)arg1;
- (void)showTipsAlertIfNeed;
- (void)filterInvalidNotes:(id)arg1 parentDictionary:(id)arg2 key:(id)arg3;
- (id)filterDiffDictinary:(id)arg1;
- (void)updateDictionary:(id)arg1 withDictionary:(id)arg2 parentDictionary:(id)arg3 mKey:(id)arg4;
- (id)mergeJson:(id)arg1 subJson:(id)arg2;
- (_Bool)updateBizConfigWithCsConfigModel:(id)arg1;
- (void)updateBizTopicWithCsConfigModel:(id)arg1;
- (void)refreshConfigurationsWithTopics:(id)arg1;
- (void)checkAndRefreshTopic;
- (id)fetchLoncalBizCsConfigs;
- (id)fetchLocalBizCsTopics;
- (void)fetchLocalConfigurations;
- (void)loadLocalCsConfigs;
- (void)clearConfigurations;
- (long long)configVersionWithTopic:(id)arg1;
- (id)configDataWithTopic:(id)arg1;
- (void)dealloc;
- (id)init;

@end

