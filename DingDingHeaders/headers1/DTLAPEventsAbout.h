//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "LAPPresetPluginProtocol-Protocol.h"

@class NSString;

@interface DTLAPEventsAbout : LAPluginBase <LAPPresetPluginProtocol>
{
    _Bool _needNotifyViewAppearToJs;
    _Bool _isWebViewDidAppear;
    _Bool _isWebScrollsToTop;
    NSString *_pageIdentifier;
    NSString *_domain;
}

+ (id)pluginExactName;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(nonatomic) _Bool isWebScrollsToTop; // @synthesize isWebScrollsToTop=_isWebScrollsToTop;
@property(nonatomic) _Bool isWebViewDidAppear; // @synthesize isWebViewDidAppear=_isWebViewDidAppear;
@property(nonatomic) _Bool needNotifyViewAppearToJs; // @synthesize needNotifyViewAppearToJs=_needNotifyViewAppearToJs;
- (void).cxx_destruct;
- (void)onWebViewScrollsToTopStatusChanged:(id)arg1;
- (void)onStatusBarTaped:(id)arg1;
- (void)notifyHostTaskFinish:(id)arg1 domain:(id)arg2 success:(_Bool)arg3;
- (void)onLwpHostTaskFailed:(id)arg1;
- (void)onLwpHostTaskSuccess:(id)arg1;
- (void)onConnectionStatusChanged:(id)arg1;
- (void)notifyPauseIfNessary;
- (void)notifyResumeIfNessary;
- (void)onAppWillTerminate:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onWebViewViewDidDisappearNotification:(id)arg1;
- (void)onWebViewViewDidAppearNotification:(id)arg1;
- (void)onWebViewDidLoadAllJSBridge:(id)arg1;
- (void)setWebViewInitialDomain:(id)arg1;
- (void)specialInit_V1:(id)arg1 to:(id)arg2;
- (void)__exported__specialInit_V1:(id)arg1 to:(id)arg2;
- (void)disposePlugin;
- (void)pluginInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

