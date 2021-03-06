//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTTabBarControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class BLAccount, DTOrganization, NSString;
@protocol DTFileBasedInterfaceRouteDelegate;

@interface DTCSpaceUIEntry : NSObject <DTTabBarControllerDelegate, UITabBarControllerDelegate>
{
    BLAccount *_account;
    DTOrganization *_selectOrganization;
    id <DTFileBasedInterfaceRouteDelegate> _routeHandler;
}

@property(retain, nonatomic) id <DTFileBasedInterfaceRouteDelegate> routeHandler; // @synthesize routeHandler=_routeHandler;
@property(retain, nonatomic) DTOrganization *selectOrganization; // @synthesize selectOrganization=_selectOrganization;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)showPickerViewController;
- (void)delayUTEventWithBlock:(CDUnknownBlockType)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)showCSpacePickerUI;
- (id)showCSpaceMainUI:(unsigned long long)arg1;
- (void)loadTabs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

