//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTContactProfileMoreOperationDelegate-Protocol.h"
#import "DTConversationSelectViewControllerDelegate-Protocol.h"

@class DTAvatarImageView, DTContactProfileMoreOperationController, DTEnterpriseCard, DTFriendRequest, DTMobileContact, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface DTUnregisterContactViewController : DTContactBaseViewController <DTContactProfileMoreOperationDelegate, DTConversationSelectViewControllerDelegate>
{
    _Bool _hidesOperations;
    _Bool _showsAccept;
    _Bool _showsSendMsg;
    _Bool _showsDing;
    _Bool _showsConference;
    _Bool _showsAddFriend;
    _Bool _showsHasSent;
    long long _uid;
    DTMobileContact *_mobileContact;
    UIScrollView *_background;
    UIView *_avatarBackgroundView;
    DTAvatarImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_mobileLabel;
    UILabel *_msgLabel;
    UIImageView *_msgBackgroundView;
    UIImageView *_triangleView;
    UIView *_actionBackground;
    UIButton *_msgButton;
    UIButton *_dingButton;
    UIButton *_conferenceButton;
    UIButton *_addFriendButton;
    UIButton *_acceptButton;
    UIButton *_hasSentButton;
    DTEnterpriseCard *_myEnterpriseCard;
    DTFriendRequest *_friendRequest;
    DTContactProfileMoreOperationController *_moreOperaController;
}

@property(retain, nonatomic) DTContactProfileMoreOperationController *moreOperaController; // @synthesize moreOperaController=_moreOperaController;
@property(nonatomic) _Bool showsHasSent; // @synthesize showsHasSent=_showsHasSent;
@property(nonatomic) _Bool showsAddFriend; // @synthesize showsAddFriend=_showsAddFriend;
@property(nonatomic) _Bool showsConference; // @synthesize showsConference=_showsConference;
@property(nonatomic) _Bool showsDing; // @synthesize showsDing=_showsDing;
@property(nonatomic) _Bool showsSendMsg; // @synthesize showsSendMsg=_showsSendMsg;
@property(nonatomic) _Bool showsAccept; // @synthesize showsAccept=_showsAccept;
@property(retain, nonatomic) DTFriendRequest *friendRequest; // @synthesize friendRequest=_friendRequest;
@property(retain, nonatomic) DTEnterpriseCard *myEnterpriseCard; // @synthesize myEnterpriseCard=_myEnterpriseCard;
@property(retain, nonatomic) UIButton *hasSentButton; // @synthesize hasSentButton=_hasSentButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UIButton *addFriendButton; // @synthesize addFriendButton=_addFriendButton;
@property(retain, nonatomic) UIButton *conferenceButton; // @synthesize conferenceButton=_conferenceButton;
@property(retain, nonatomic) UIButton *dingButton; // @synthesize dingButton=_dingButton;
@property(retain, nonatomic) UIButton *msgButton; // @synthesize msgButton=_msgButton;
@property(retain, nonatomic) UIView *actionBackground; // @synthesize actionBackground=_actionBackground;
@property(retain, nonatomic) UIImageView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UIImageView *msgBackgroundView; // @synthesize msgBackgroundView=_msgBackgroundView;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) DTAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *avatarBackgroundView; // @synthesize avatarBackgroundView=_avatarBackgroundView;
@property(retain, nonatomic) UIScrollView *background; // @synthesize background=_background;
@property(nonatomic) _Bool hidesOperations; // @synthesize hidesOperations=_hidesOperations;
@property(retain, nonatomic) DTMobileContact *mobileContact; // @synthesize mobileContact=_mobileContact;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)messageDidSend;
- (id)conversationSelectViewAttachmentDataForSend;
- (int)conversationSelectViewAttachmentType;
- (void)operationAddFriend;
- (void)operationRecommendFriend;
- (void)addFriendButtonPressed:(id)arg1;
- (void)makeSingleCall;
- (void)conferenceButtonPressed:(id)arg1;
- (void)dingButtonPressed:(id)arg1;
- (void)msgButtonPressed:(id)arg1;
- (void)configNavigationRightItem;
- (void)configActionButton;
- (void)resetShowTag;
- (double)navigationBarHeight;
- (void)createUidWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)showContactData;
- (void)didReceiveMemoryWarning;
- (void)moreOpearController:(id)arg1;
- (void)loadDatasource;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

