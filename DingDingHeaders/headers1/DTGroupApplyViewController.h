//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "DTShareMegCardDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class DTBizConversation, DTEmptyResultView, DTGroupInvite, DTOrganization, DTSectionItem, DTShareMsgCard, NSDictionary, NSString, UIView, UTShareContent;
@protocol DTContactManager;

@interface DTGroupApplyViewController : DTTableViewController <DTConversationSelectViewControllerDelegate, DTShareMegCardDelegate, MFMessageComposeViewControllerDelegate>
{
    _Bool _needToPopRoot;
    _Bool _isHideShareSection;
    long long _orgId;
    DTOrganization *_organization;
    id <DTContactManager> _contactManager;
    UTShareContent *_shareContent;
    DTShareMsgCard *_shareMsgCard;
    DTBizConversation *_conversation;
    DTEmptyResultView *_emptyView;
    NSDictionary *_shareData;
    DTGroupInvite *_inviteModel;
    UIView *_shareView;
    DTSectionItem *_shareSection;
}

@property(retain, nonatomic) DTSectionItem *shareSection; // @synthesize shareSection=_shareSection;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) DTGroupInvite *inviteModel; // @synthesize inviteModel=_inviteModel;
@property(retain, nonatomic) NSDictionary *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) DTShareMsgCard *shareMsgCard; // @synthesize shareMsgCard=_shareMsgCard;
@property(retain, nonatomic) UTShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) id <DTContactManager> contactManager; // @synthesize contactManager=_contactManager;
@property(nonatomic) _Bool isHideShareSection; // @synthesize isHideShareSection=_isHideShareSection;
@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
@property(nonatomic) _Bool needToPopRoot; // @synthesize needToPopRoot=_needToPopRoot;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)showMessageViewWithReceivers:(id)arg1 body:(id)arg2;
- (void)shareToSMSWithShareContent:(id)arg1;
- (void)copyLink;
- (void)StatisticsEventWithArg:(id)arg1;
- (void)shareWebWithTitle:(id)arg1 description:(id)arg2 imageUrl:(id)arg3 pageUrl:(id)arg4;
- (void)sendShareInfoToConversation:(id)arg1;
- (void)cancelSendShareInfoToConversation;
- (int)conversationSelectViewAttachmentType;
- (id)conversationSelectViewAttachmentDataForSend;
- (void)conversationIdForShare:(id)arg1;
- (void)shareToDTFriend;
- (void)showMenu;
- (void)onApplyListClicked:(id)arg1;
- (void)showApplyListControllerWithConversationId:(id)arg1;
- (void)switchShareStateWithItem:(id)arg1 cell:(id)arg2;
- (void)showTableView:(_Bool)arg1;
- (void)showFooterTipOfSwitchState:(_Bool)arg1;
- (void)showShareSection;
- (void)hideShareSection;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)setDataSoureWithInviteModel:(id)arg1;
- (void)loadData;
- (void)loadCache;
- (void)setRightBarButtonItem;
- (void)popToRoot;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

