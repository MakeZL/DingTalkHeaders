//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWindow;

@interface ProtocolLoader : NSObject <UIApplicationDelegate, UIWebViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UISearchBarDelegate, UITextViewDelegate, UITabBarControllerDelegate>
{
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;
@end

