//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIViewController;
@protocol DTWorkShortcutLoaderDelegate;

@interface DTWorkShortcutLoader : NSObject
{
    _Bool _isUpdating;
    long long _orgId;
    UIViewController *_viewController;
    id <DTWorkShortcutLoaderDelegate> _delegate;
    long long _lastEtag;
}

@property long long lastEtag; // @synthesize lastEtag=_lastEtag;
@property _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) __weak id <DTWorkShortcutLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)fetachCachedShortcutsInMemeory;
- (void)cacheShortcutsAsyc:(id)arg1 shortcuts:(id)arg2;
- (id)itemListWithShortcuts:(id)arg1;
- (void)queryWorkShortcus;
- (void)refreshShortcuts;
- (id)init;

@end

