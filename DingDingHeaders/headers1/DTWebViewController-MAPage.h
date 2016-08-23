//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTWebViewController.h"

#import "DTMAPageViewController-Protocol.h"

@class NSString;

@interface DTWebViewController (MAPage) <DTMAPageViewController>
+ (id)createPageViewControllerWithString:(id)arg1 relativeToURL:(id)arg2;
- (void)didRemovedFromParentViewController;
- (void)popAllPageViewControllerAnimated:(_Bool)arg1;
- (void)popToPageViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popPageViewControllerAnimated:(_Bool)arg1;
- (void)pushPageViewController:(id)arg1 animated:(_Bool)arg2;
- (void)reloadPageWithString:(id)arg1 relativeToURL:(id)arg2 pageLoadStartBlock:(CDUnknownBlockType)arg3 pageLoadFinishBlock:(CDUnknownBlockType)arg4 pageLoadFailBlock:(CDUnknownBlockType)arg5;
- (void)pageLoadDidFailWithError:(id)arg1;
- (void)pageLoadDidFinish;
- (void)pageLoadDidStart;
- (void)startLoadPage;
@property(copy, nonatomic) CDUnknownBlockType pageLoadFailBlock;
@property(copy, nonatomic) CDUnknownBlockType pageLoadFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType pageLoadStartBlock;
@property(readonly, copy, nonatomic) NSString *viewControllerId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
