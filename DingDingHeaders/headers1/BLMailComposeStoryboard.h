//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLAccount, BLAssetPickerStoryboard, UIViewController;
@protocol BLFileBasedInterfaceRouteDelegate, BLMailComposeContactSearcher, BLMultiAccountsDataSource;

@interface BLMailComposeStoryboard : NSObject
{
    BLAssetPickerStoryboard *_assetPickerStoryboard;
    id <BLMultiAccountsDataSource> _accountDataSource;
    id <BLMailComposeContactSearcher> _contactSearcher;
    id <BLFileBasedInterfaceRouteDelegate> _mailRouteDelegate;
    id <BLFileBasedInterfaceRouteDelegate> _spaceRouteDelegate;
    BLAccount *_currentAccount;
    UIViewController *_currentMailComposeVC;
    Class _composeVCClass;
}

+ (id)defaultStoryboard;
@property(retain, nonatomic) Class composeVCClass; // @synthesize composeVCClass=_composeVCClass;
@property(nonatomic) __weak UIViewController *currentMailComposeVC; // @synthesize currentMailComposeVC=_currentMailComposeVC;
@property(readonly, nonatomic) __weak BLAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(readonly, nonatomic) __weak id <BLFileBasedInterfaceRouteDelegate> spaceRouteDelegate; // @synthesize spaceRouteDelegate=_spaceRouteDelegate;
@property(readonly, nonatomic) __weak id <BLFileBasedInterfaceRouteDelegate> mailRouteDelegate; // @synthesize mailRouteDelegate=_mailRouteDelegate;
@property(retain, nonatomic) id <BLMailComposeContactSearcher> contactSearcher; // @synthesize contactSearcher=_contactSearcher;
@property(retain, nonatomic) id <BLMultiAccountsDataSource> accountDataSource; // @synthesize accountDataSource=_accountDataSource;
@property(retain, nonatomic) BLAssetPickerStoryboard *assetPickerStoryboard; // @synthesize assetPickerStoryboard=_assetPickerStoryboard;
- (void).cxx_destruct;
- (id)createMailComposeInterfaceForAccount:(id)arg1 forwardMailWithID:(id)arg2 mailRouteDelegate:(id)arg3 spaceRouteDelegate:(id)arg4;
- (id)createMailComposeInterfaceForAccount:(id)arg1 forwardMail:(id)arg2 mailRouteDelegate:(id)arg3 spaceRouteDelegate:(id)arg4;
- (id)createMailComposeInterfaceForAccount:(id)arg1 forwardCalendar:(id)arg2 mailRouteDelegate:(id)arg3 spaceRouteDelegate:(id)arg4;
- (id)createMailComposeInterfaceForAccount:(id)arg1 replayMailWithID:(id)arg2 replyAll:(_Bool)arg3 mailRouteDelegate:(id)arg4 spaceRouteDelegate:(id)arg5;
- (id)createMailComposeInterfaceForAccount:(id)arg1 replayMail:(id)arg2 replyAll:(_Bool)arg3 withRecipients:(id)arg4 pageTitle:(id)arg5 mailRouteDelegate:(id)arg6 spaceRouteDelegate:(id)arg7;
- (id)createMailComposeInterfaceForAccount:(id)arg1 withNewMail:(id)arg2 mailRouteDelegate:(id)arg3 spaceRouteDelegate:(id)arg4;
- (id)createMailComposeInterfaceForAccount:(id)arg1 withDraftMail:(id)arg2 mailRouteDelegate:(id)arg3 spaceRouteDelegate:(id)arg4;
- (id)createMailComposeInterfaceForAccount:(id)arg1 withSubject:(id)arg2 andBody:(id)arg3 mailRouteDelegate:(id)arg4 spaceRouteDelegate:(id)arg5;
- (id)createMailComposeInterfaceForAccount:(id)arg1 withRecipient:(id)arg2 mailRouteDelegate:(id)arg3 spaceRouteDelegate:(id)arg4;
- (id)createMailComposeInterfaceForAccount:(id)arg1 withRecipients:(id)arg2 subject:(id)arg3 mailExtension:(id)arg4 dentries:(id)arg5 pageTitle:(id)arg6 mailRouteDelegate:(id)arg7 spaceRouteDelegate:(id)arg8;
- (void)registerMailComposeViewControllClass:(Class)arg1;

@end
