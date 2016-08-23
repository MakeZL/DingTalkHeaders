//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTVCSharedInstance-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class NSMutableArray, NSString, UIWindow;

@interface DTVCModuleManager : NSObject <DTVCSharedInstance, UIApplicationDelegate>
{
    NSMutableArray *_modules;
    NSString *_applicationIdentifier;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (void)_registerDefaultsModules;
- (id)modules;
- (void)releaseModules;
- (void)stopModules;
- (void)resumeModules;
- (void)pauseModules;
- (void)startModules;
- (void)initModules;
- (void)unregisterModule:(id)arg1;
- (void)registerModule:(id)arg1;
- (id)moduleByClass:(Class)arg1;
- (id)moduleById:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

