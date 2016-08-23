//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "H5AMMonitorDelegate-Protocol.h"

@class DTHPMInfoStatistics, NSMutableDictionary, NSRecursiveLock, NSString;

@interface DTHPMInfoManager : NSObject <H5AMMonitorDelegate>
{
    _Bool _hasActived;
    NSMutableDictionary *_homePathAppIdMap;
    NSRecursiveLock *_homePathAppIdLock;
    NSMutableDictionary *_homePathNativeEnableMap;
    NSRecursiveLock *_homePathNativeEnableLock;
    DTHPMInfoStatistics *_hpmInfoStatistics;
}

+ (id)sharedManager;
@property(nonatomic) _Bool hasActived; // @synthesize hasActived=_hasActived;
@property(retain, nonatomic) DTHPMInfoStatistics *hpmInfoStatistics; // @synthesize hpmInfoStatistics=_hpmInfoStatistics;
@property(retain, nonatomic) NSRecursiveLock *homePathNativeEnableLock; // @synthesize homePathNativeEnableLock=_homePathNativeEnableLock;
@property(retain, nonatomic) NSMutableDictionary *homePathNativeEnableMap; // @synthesize homePathNativeEnableMap=_homePathNativeEnableMap;
@property(retain, nonatomic) NSRecursiveLock *homePathAppIdLock; // @synthesize homePathAppIdLock=_homePathAppIdLock;
@property(retain, nonatomic) NSMutableDictionary *homePathAppIdMap; // @synthesize homePathAppIdMap=_homePathAppIdMap;
- (void).cxx_destruct;
- (void)installUserHPMApps;
- (void)checkAndClearHistoryFiles;
- (unsigned long long)hpmEnviromentType;
- (id)hpmEnviromentText;
- (void)switchHpmEnvironment;
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (_Bool)skipHpmAboutDocumentDirectoryBackupToiCloud;
- (void)handleCloudSettingNotify:(id)arg1;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)onAccountLoginNotification:(id)arg1;
- (void)cSConfigInfoUpdatedNotification:(id)arg1;
- (void)onHAMAppListUpdateNotification:(id)arg1;
- (_Bool)h5NativeEnabeForUrl:(id)arg1;
- (id)appIdInfoForUrl:(id)arg1;
- (id)betaH5AppIdForUrl:(id)arg1;
- (id)testH5AppIdForUrl:(id)arg1;
- (id)onlineH5AppIdForUrl:(id)arg1;
- (_Bool)shouldUpdateHpmPackages;
- (void)forceUpdateNativeHPMPackages;
- (void)updateNativeHPMPackages;
- (void)parseHPMExtInfoAsync;
- (id)hpmRootPath;
- (void)activeManager;
- (void)configHPMSetting;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

