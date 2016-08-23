//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "DTMAPageTabControllerDelegate-Protocol.h"

@class DTWebViewController, NSString;

@interface DTLAPWebContainerTab : LAPluginBase <DTMAPageTabControllerDelegate>
{
    DTWebViewController *_displayViewController;
}

+ (id)pluginExactName;
@property(nonatomic) __weak DTWebViewController *displayViewController; // @synthesize displayViewController=_displayViewController;
- (void).cxx_destruct;
- (void)pageTabController:(id)arg1 didSelectViewController:(id)arg2;
- (void)select:(id)arg1 to:(id)arg2;
- (void)__exported__select:(id)arg1 to:(id)arg2;
- (void)config:(id)arg1 to:(id)arg2;
- (void)__exported__config:(id)arg1 to:(id)arg2;
- (void)start:(id)arg1 to:(id)arg2;
- (void)__exported__start:(id)arg1 to:(id)arg2;
- (void)init:(id)arg1 to:(id)arg2;
- (void)__exported__init:(id)arg1 to:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

