//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@class UIViewController;

@interface DTLAPUIEditor : LAPluginBase
{
    _Bool _popGestureRecognizerEnabled;
    _Bool _backupPopGestureRecognizerEnabled;
    UIViewController *_weakViewController;
}

+ (id)pluginExactName;
@property(nonatomic) __weak UIViewController *weakViewController; // @synthesize weakViewController=_weakViewController;
@property(nonatomic) _Bool backupPopGestureRecognizerEnabled; // @synthesize backupPopGestureRecognizerEnabled=_backupPopGestureRecognizerEnabled;
@property(nonatomic) _Bool popGestureRecognizerEnabled; // @synthesize popGestureRecognizerEnabled=_popGestureRecognizerEnabled;
- (void).cxx_destruct;
- (void)onWebViewViewDidDisappearNotification:(id)arg1;
- (void)onWebViewViewDidAppearNotification:(id)arg1;
- (void)popGesture:(id)arg1 to:(id)arg2;
- (void)__exported__popGesture:(id)arg1 to:(id)arg2;
- (void)finishEditor:(id)arg1 to:(id)arg2;
- (void)__exported__finishEditor:(id)arg1 to:(id)arg2;
- (void)createEditor:(id)arg1 to:(id)arg2;
- (void)__exported__createEditor:(id)arg1 to:(id)arg2;
- (void)disposePlugin;
- (void)pluginInitialize;

@end

