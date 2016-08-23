//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTCMailPickerDelegate-Protocol.h"
#import "DTCSpacePickerDelegate-Protocol.h"
#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "DTConversationSettingsViewControllerDelegate-Protocol.h"
#import "DTMapViewControllerDelegate-Protocol.h"
#import "DTMessageBaseViewControllerProtocal-Protocol.h"
#import "DTMessageBubbleViewDataSource-Protocol.h"
#import "DTMessageBubbleViewDelegate-Protocol.h"
#import "DTMessageCameraDisplayViewControllerDelegate-Protocol.h"
#import "DTMessageCircleMenuViewDelegate-Protocol.h"
#import "DTMessageCollectionSystemCellDelegate-Protocol.h"
#import "DTMessageCollectionViewCellDataSource-Protocol.h"
#import "DTMessageCollectionViewCellDelegate-Protocol.h"
#import "DTMessageConllectionViewDelegate-Protocol.h"
#import "DTMessageKeyBoardControllerDelegate-Protocol.h"
#import "DTMessagePopupAlbumMenuViewDelegate-Protocol.h"
#import "DTMessageToolBarCamaraViewDelegate-Protocol.h"
#import "DTMessageToolBarContentViewDelegate-Protocol.h"
#import "DTMobileContactUIDelegate-Protocol.h"
#import "DTMoviePlayerViewControllerDelegate-Protocol.h"
#import "DTNewMessagesButtonDelegate-Protocol.h"
#import "DTOpenLuckyMoneyViewDelegate-Protocol.h"
#import "DTPhotoTableDelegate-Protocol.h"
#import "HPGrowingTextViewDelegate-Protocol.h"
#import "LWEmotionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class DTAT, DTBadgeView, DTBizConversation, DTBizDingModel, DTBizMessage, DTLinkToCardView, DTMessageATHandler, DTMessageAudioHandler, DTMessageAudioTranslationHandler, DTMessageBossHandler, DTMessageBubbleAlipayRedEnvelopView, DTMessageBubbleAttachmentAudioView, DTMessageBubbleAttachmentCMailView, DTMessageBubbleAttachmentCOAView, DTMessageBubbleAttachmentCRMView, DTMessageBubbleAttachmentCSpaceView, DTMessageBubbleAttachmentCardView, DTMessageBubbleAttachmentFileView, DTMessageBubbleAttachmentImageView, DTMessageBubbleAttachmentLinkView, DTMessageBubbleAttachmentLocationView, DTMessageBubbleAttachmentShareView, DTMessageBubbleAttachmentTextView, DTMessageBubbleAttachmentVideoView, DTMessageBubbleCTitleView, DTMessageBubbleConferenceView, DTMessageBubbleDecryptFailView, DTMessageBubbleEmailView, DTMessageBubbleEnterpriseRedEnvelopView, DTMessageBubbleRedEnvelopView, DTMessageBubbleTapHandler, DTMessageCameraDisplayViewController, DTMessageCircleMenuView, DTMessageCollectionView, DTMessageConferenceHandler, DTMessageControllerDataSource, DTMessageDingHandler, DTMessageEmotionHandler, DTMessageFavoriteHandler, DTMessageInputContainerView, DTMessageInputCustomMenuHandler, DTMessageKeyBoardController, DTMessageLiftCircleHandler, DTMessageLinkHandler, DTMessageMutipleInstanceHandler, DTMessagePickedAssetHandler, DTMessagePopupAlbumMenuView, DTMessageRuleTaskManager, DTMessageSendHandler, DTMessageSendTestHandler, DTMessageWorkHandler, DTNavigationIconTitleView, DTNewMessagesButton, DTPhotoBrowerHelper, DTPhotoTableHelper, DTSafeWaterMarkView, DTScrollMenuView, NSArray, NSDictionary, NSMutableArray, NSString, UIButton, UILabel, UILongPressGestureRecognizer, UIView;

@interface DTMessageBaseViewController : DTViewController <DTMessageConllectionViewDelegate, HPGrowingTextViewDelegate, DTMessageToolBarCamaraViewDelegate, UIGestureRecognizerDelegate, DTMessageToolBarContentViewDelegate, DTMessageCircleMenuViewDelegate, DTMessagePopupAlbumMenuViewDelegate, DTMessageCameraDisplayViewControllerDelegate, DTMessageKeyBoardControllerDelegate, DTNewMessagesButtonDelegate, DTCSpacePickerDelegate, DTCMailPickerDelegate, DTConversationSettingsViewControllerDelegate, LWEmotionViewDelegate, DTOpenLuckyMoneyViewDelegate, DTMapViewControllerDelegate, DTMobileContactUIDelegate, DTMessageBubbleViewDelegate, DTMessageBubbleViewDataSource, DTMessageCollectionViewCellDelegate, DTMessageCollectionViewCellDataSource, DTMessageBaseViewControllerProtocal, DTPhotoTableDelegate, DTMessageCollectionSystemCellDelegate, DTConversationSelectViewControllerDelegate, DTMoviePlayerViewControllerDelegate>
{
    _Bool _showHintIfNoCursorMsg;
    _Bool _isFromSearch;
    _Bool _statusBarHidden;
    _Bool _recordAudioOver60s;
    _Bool _playAuidoInCurCell;
    _Bool _hasReceivedQuitOrDisbandEvent;
    DTMessageRuleTaskManager *_ruleTaskManager;
    DTBizConversation *_conversation;
    DTMessageControllerDataSource *_dataSource;
    DTMessageCollectionView *_collectionView;
    DTMessageInputContainerView *_inputContainerView;
    DTAT *_dtAt;
    NSArray *_includeImageMessages;
    DTBizMessage *_cursorMessage;
    DTNewMessagesButton *_messageAlertButton;
    DTNavigationIconTitleView *_titleView;
    NSMutableArray *_settingItemArray;
    UIView *_settingPopdownBtn;
    long long _vcStyle;
    NSDictionary *_transmitAttachmentData;
    UILongPressGestureRecognizer *_blanklongGes;
    DTMessageKeyBoardController *_keyboardController;
    long long _leftBarStyle;
    DTMessageAudioHandler *_messageAudioHandler;
    DTMessageDingHandler *_messageDingHandler;
    DTMessageAudioTranslationHandler *_messageAudioTranslationHandler;
    DTMessageMutipleInstanceHandler *_messageMutipleInstanceHandler;
    DTMessageSendHandler *_sendHandler;
    DTMessageSendTestHandler *_sendTestHandler;
    DTMessageInputCustomMenuHandler *_customMenuHandler;
    DTMessageEmotionHandler *_emotionHandler;
    DTMessageFavoriteHandler *_favoriteHandler;
    DTMessageLinkHandler *_linkHandler;
    DTMessageBubbleTapHandler *_bubbleTapHandler;
    DTMessageConferenceHandler *_messageConferenceHandler;
    DTMessageLiftCircleHandler *_lifeCircleHandler;
    DTMessageWorkHandler *_workHandler;
    DTMessageATHandler *_atHandler;
    DTMessagePickedAssetHandler *_pickedAssetHandler;
    DTMessageBossHandler *_bossHandler;
    DTMessageCircleMenuView *_leftCircleMenuView;
    DTMessageCameraDisplayViewController *_camaraDisplayViewController;
    NSString *_curPlayIndentify;
    UIButton *_dingNotifyAnimationView;
    DTBizDingModel *_newestDingModel;
    UILabel *_dingNotifyLabel;
    CDUnknownBlockType _recordStopCallback;
    DTBadgeView *_badgeView;
    DTBadgeView *_emotionBadgeView;
    DTMessagePopupAlbumMenuView *_albumMenuView;
    NSArray *_photoTableDataSource;
    NSDictionary *_shareData;
    DTLinkToCardView *_cardView;
    NSMutableArray *_microAppsArray;
    DTPhotoBrowerHelper *_photoBrowerhelper;
    DTPhotoTableHelper *_photoTableHelper;
    DTScrollMenuView *_editBottomMenuView;
    DTSafeWaterMarkView *_safeWaterMark;
}

+ (id)messagesViewControllerWithConversation:(id)arg1 cursorMessage:(id)arg2;
+ (id)messagesViewControllerWithConversation:(id)arg1 cursorMessage:(id)arg2 showHintIfNoCursorMsg:(_Bool)arg3;
+ (id)messagesViewControllerWithConversation:(id)arg1;
@property(nonatomic) _Bool hasReceivedQuitOrDisbandEvent; // @synthesize hasReceivedQuitOrDisbandEvent=_hasReceivedQuitOrDisbandEvent;
@property(retain, nonatomic) DTSafeWaterMarkView *safeWaterMark; // @synthesize safeWaterMark=_safeWaterMark;
@property(retain, nonatomic) DTScrollMenuView *editBottomMenuView; // @synthesize editBottomMenuView=_editBottomMenuView;
@property(retain, nonatomic) DTPhotoTableHelper *photoTableHelper; // @synthesize photoTableHelper=_photoTableHelper;
@property(retain, nonatomic) DTPhotoBrowerHelper *photoBrowerhelper; // @synthesize photoBrowerhelper=_photoBrowerhelper;
@property(retain, nonatomic) NSMutableArray *microAppsArray; // @synthesize microAppsArray=_microAppsArray;
@property(retain, nonatomic) DTLinkToCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) NSDictionary *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) NSArray *photoTableDataSource; // @synthesize photoTableDataSource=_photoTableDataSource;
@property(retain, nonatomic) DTMessagePopupAlbumMenuView *albumMenuView; // @synthesize albumMenuView=_albumMenuView;
@property(retain, nonatomic) DTBadgeView *emotionBadgeView; // @synthesize emotionBadgeView=_emotionBadgeView;
@property(retain, nonatomic) DTBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(copy, nonatomic) CDUnknownBlockType recordStopCallback; // @synthesize recordStopCallback=_recordStopCallback;
@property(nonatomic) _Bool playAuidoInCurCell; // @synthesize playAuidoInCurCell=_playAuidoInCurCell;
@property(nonatomic) _Bool recordAudioOver60s; // @synthesize recordAudioOver60s=_recordAudioOver60s;
@property(retain, nonatomic) UILabel *dingNotifyLabel; // @synthesize dingNotifyLabel=_dingNotifyLabel;
@property(retain, nonatomic) DTBizDingModel *newestDingModel; // @synthesize newestDingModel=_newestDingModel;
@property(retain, nonatomic) UIButton *dingNotifyAnimationView; // @synthesize dingNotifyAnimationView=_dingNotifyAnimationView;
@property(retain, nonatomic) NSString *curPlayIndentify; // @synthesize curPlayIndentify=_curPlayIndentify;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) DTMessageCameraDisplayViewController *camaraDisplayViewController; // @synthesize camaraDisplayViewController=_camaraDisplayViewController;
@property(retain, nonatomic) DTMessageCircleMenuView *leftCircleMenuView; // @synthesize leftCircleMenuView=_leftCircleMenuView;
@property(retain, nonatomic) DTMessageBossHandler *bossHandler; // @synthesize bossHandler=_bossHandler;
@property(retain, nonatomic) DTMessagePickedAssetHandler *pickedAssetHandler; // @synthesize pickedAssetHandler=_pickedAssetHandler;
@property(retain, nonatomic) DTMessageATHandler *atHandler; // @synthesize atHandler=_atHandler;
@property(retain, nonatomic) DTMessageWorkHandler *workHandler; // @synthesize workHandler=_workHandler;
@property(retain, nonatomic) DTMessageLiftCircleHandler *lifeCircleHandler; // @synthesize lifeCircleHandler=_lifeCircleHandler;
@property(retain, nonatomic) DTMessageConferenceHandler *messageConferenceHandler; // @synthesize messageConferenceHandler=_messageConferenceHandler;
@property(retain, nonatomic) DTMessageBubbleTapHandler *bubbleTapHandler; // @synthesize bubbleTapHandler=_bubbleTapHandler;
@property(retain, nonatomic) DTMessageLinkHandler *linkHandler; // @synthesize linkHandler=_linkHandler;
@property(retain, nonatomic) DTMessageFavoriteHandler *favoriteHandler; // @synthesize favoriteHandler=_favoriteHandler;
@property(retain, nonatomic) DTMessageEmotionHandler *emotionHandler; // @synthesize emotionHandler=_emotionHandler;
@property(retain, nonatomic) DTMessageInputCustomMenuHandler *customMenuHandler; // @synthesize customMenuHandler=_customMenuHandler;
@property(retain, nonatomic) DTMessageSendTestHandler *sendTestHandler; // @synthesize sendTestHandler=_sendTestHandler;
@property(retain, nonatomic) DTMessageSendHandler *sendHandler; // @synthesize sendHandler=_sendHandler;
@property(retain, nonatomic) DTMessageMutipleInstanceHandler *messageMutipleInstanceHandler; // @synthesize messageMutipleInstanceHandler=_messageMutipleInstanceHandler;
@property(retain, nonatomic) DTMessageAudioTranslationHandler *messageAudioTranslationHandler; // @synthesize messageAudioTranslationHandler=_messageAudioTranslationHandler;
@property(retain, nonatomic) DTMessageDingHandler *messageDingHandler; // @synthesize messageDingHandler=_messageDingHandler;
@property(retain, nonatomic) DTMessageAudioHandler *messageAudioHandler; // @synthesize messageAudioHandler=_messageAudioHandler;
@property(nonatomic) long long leftBarStyle; // @synthesize leftBarStyle=_leftBarStyle;
@property(retain, nonatomic) DTMessageKeyBoardController *keyboardController; // @synthesize keyboardController=_keyboardController;
@property(retain, nonatomic) UILongPressGestureRecognizer *blanklongGes; // @synthesize blanklongGes=_blanklongGes;
@property(retain, nonatomic) NSDictionary *transmitAttachmentData; // @synthesize transmitAttachmentData=_transmitAttachmentData;
@property(nonatomic) long long vcStyle; // @synthesize vcStyle=_vcStyle;
@property(nonatomic) __weak UIView *settingPopdownBtn; // @synthesize settingPopdownBtn=_settingPopdownBtn;
@property(copy, nonatomic) NSMutableArray *settingItemArray; // @synthesize settingItemArray=_settingItemArray;
@property(retain, nonatomic) DTNavigationIconTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) DTNewMessagesButton *messageAlertButton; // @synthesize messageAlertButton=_messageAlertButton;
@property(nonatomic) _Bool isFromSearch; // @synthesize isFromSearch=_isFromSearch;
@property(nonatomic) _Bool showHintIfNoCursorMsg; // @synthesize showHintIfNoCursorMsg=_showHintIfNoCursorMsg;
@property(retain, nonatomic) DTBizMessage *cursorMessage; // @synthesize cursorMessage=_cursorMessage;
@property(copy, nonatomic) NSArray *includeImageMessages; // @synthesize includeImageMessages=_includeImageMessages;
@property(retain, nonatomic) DTAT *dtAt; // @synthesize dtAt=_dtAt;
@property(retain, nonatomic) DTMessageInputContainerView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) DTMessageCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) DTMessageControllerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) DTMessageRuleTaskManager *ruleTaskManager; // @synthesize ruleTaskManager=_ruleTaskManager;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)moviePlayerViewLongTappedFavorite:(id)arg1;
- (void)moviePlayerViewLongTappedSaveToSpace:(id)arg1;
- (void)moviePlayerStartPlayVideo:(id)arg1;
- (void)moviePlayerDownloadSuccess:(id)arg1;
- (void)moviePlayerViewLongTappedHandle:(id)arg1;
- (void)conversationSelectViewSendSuc;
- (id)conversationSelectViewAttachmentDataForSend;
- (id)conversationSelectViewMessageForTransmit;
- (id)conversationSelectViewMessageListForTransmit;
- (void)didClearConversation:(id)arg1;
- (void)toCrmHome:(id)arg1;
- (id)getConversationExtensionUrl;
- (void)sendLinkCardToConversation;
- (void)showLinkCardView:(id)arg1 type:(unsigned long long)arg2;
- (void)tidyLinkCardSource:(id)arg1;
- (void)judgeUrlText;
- (void)delayJudgeUrlText:(id)arg1;
- (void)removeLinkCardView;
- (void)cancelPreviousPerformDelayRemoveLinkCardView;
- (void)delayRemoveLinkCardView;
- (void)sendVersionMsg;
- (void)badgeCountChange:(id)arg1;
- (void)becomeActive:(id)arg1;
- (void)resignActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)messageDeleteNotify:(id)arg1;
- (void)messageTagUpdatedNotify:(id)arg1;
- (void)receivedDingFinishedNotification:(id)arg1;
- (void)receivedDingSelfConfirmedNotification:(id)arg1;
- (void)receivedLeaveEnterpriseMessage:(id)arg1;
- (void)conversationUpdatedNotification:(id)arg1;
- (void)receivedDingConfirmedNotification:(id)arg1;
- (void)receivedMessageNoticeUpdateNotification:(id)arg1;
- (void)receivedReadMessageNotification:(id)arg1;
- (void)receivedMessageListNotification:(id)arg1;
- (void)receivedMessageNotification:(id)arg1;
- (void)cMailpickerDidChooseMessages:(id)arg1 picker:(id)arg2;
- (void)cMailpickerDidCancel:(id)arg1;
- (void)cSpacePickerDidChooseMessages:(id)arg1 picker:(id)arg2;
- (void)cSpacePickerDidCancel:(id)arg1;
- (void)openPhotoBrowserWithMessage:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)checkRedEnvelopPickingStatus:(id)arg1 redEnvelopMode:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)didClickViewMore:(id)arg1 pickingStatus:(id)arg2;
- (void)openLuckyMoneyWithMessage:(id)arg1 redEnvelopMode:(id)arg2;
- (void)utShowRedEnvelop:(id)arg1;
- (void)openLuckyMoneyWithMessage:(id)arg1;
- (void)mapViewController:(id)arg1 didFailWithCode:(long long)arg2 error:(id)arg3;
- (void)mapViewController:(id)arg1 didUpdatePOI:(id)arg2;
- (void)didOpenedAlbumOnPopupAlbumMenuView:(id)arg1;
- (void)didOpenedCameraOnPopupAlbumMenuView:(id)arg1;
- (void)didSelectedPhotosInAlbumWithViewModels:(id)arg1 isOriginal:(_Bool)arg2;
- (_Bool)albumMenuViewNeedAutoDismissWhenSendPhotos;
- (void)didSelectedPhotosInAlbumWithSelectedIndexPaths:(id)arg1;
- (void)didFetchImage:(id)arg1;
- (void)refreshRemarkName:(id)arg1;
- (void)checkNeedShowBadgeView;
- (void)removeBadgeView;
- (void)messageCircleMenuView:(id)arg1 touchEndWithItemOption:(long long)arg2;
- (void)audioLevelMeterDidStop:(id)arg1 duration:(double)arg2;
- (void)didPressedSwitchButtonOnToolBarContentView:(id)arg1;
- (void)toolBarContentViewSendText:(id)arg1;
- (void)messageToolBar:(id)arg1 userAction:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)messageToolBarCameraView:(id)arg1 didLongTappedWithGestureRecognizer:(id)arg2;
- (void)chatInputModeDidChange:(id)arg1;
- (void)handleActionVendorsISVWithMicroApp:(id)arg1 workInfoList:(id)arg2;
- (void)handleActionFilebox;
- (void)handleActionEmail;
- (void)showAlertViewWithCard:(id)arg1;
- (void)onActionMultiConf:(id)arg1;
- (void)onActionSingleConf:(id)arg1;
- (void)onActionSendDing:(id)arg1;
- (void)onActionVideo:(id)arg1;
- (void)onActionMail:(id)arg1;
- (void)onActionFavorite:(id)arg1;
- (void)onActionNamecard:(id)arg1;
- (void)onActionRedEnvelop:(id)arg1;
- (void)onMicroAppItemAction:(id)arg1;
- (void)reloadMicroAppActionItems:(_Bool)arg1;
- (void)messageToolBarCameraView:(id)arg1 didTappedWithGestureRecognizer:(id)arg2;
- (_Bool)needShowMultiConference;
- (_Bool)needShowSingleConference;
- (_Bool)needShowSendDing;
- (_Bool)needShowSendMail;
- (_Bool)needShowVideo;
- (_Bool)needShowLocation;
- (_Bool)needShowRedEnvelop;
- (void)dtATDidSelectTextAt;
- (void)inputViewAtSomeone:(long long)arg1;
- (void)growingTextViewDidChangeSelection:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextViewShouldEndEditing:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)endEdit:(_Bool)arg1;
- (void)messageToolBarDidTappedFaceView:(id)arg1;
- (void)keyboardDidFinishChange:(_Bool)arg1;
- (void)updateKeyboardTriggerPoint;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addFavoriteAction:(id)arg1;
- (void)confirmReceived:(id)arg1;
- (void)endRecall:(_Bool)arg1;
- (void)onActionLocation:(id)arg1;
- (void)beginRecall;
- (void)messageBubbleView:(id)arg1 triggerMenuActionWithType:(long long)arg2;
- (void)messageBubbleView:(id)arg1 didDoubleTappedWithGestureRecognizer:(id)arg2;
- (void)messageBubbleViewCell:(id)arg1 didTappedWithGestureRecognizer:(id)arg2;
- (void)menuWillHide:(id)arg1;
- (void)messageBubbleViewLongGestureBecomeNextResponder:(id)arg1;
- (_Bool)isSelectStyle:(id)arg1;
- (id)bubbleMessage:(id)arg1;
- (id)bubbleConversation:(id)arg1;
- (void)didTapLinksInSystemCell:(long long)arg1 url:(id)arg2;
- (void)mobileContactCancelSaveContact;
- (void)mobileContactSaveContactSuccess;
- (void)saveContactWithPhone:(id)arg1;
- (void)makeSystemCallWithPhone:(id)arg1;
- (void)refreshAllMessages;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)messageNameViewLeftButtonClick:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)messageRefreshViewDidClick:(id)arg1;
- (void)messageTagViewIconClick:(id)arg1 tagViewModel:(id)arg2;
- (void)messageTagViewClick:(id)arg1 tagViewModel:(id)arg2;
- (void)messageAvatarLongPress:(id)arg1;
- (void)messageAvatarDidTap:(id)arg1;
- (void)playAudioWithMessage:(id)arg1;
- (void)playAudioWithMessage:(id)arg1 startPlay:(CDUnknownBlockType)arg2 stopCallback:(CDUnknownBlockType)arg3;
- (void)messageBubbleAttachmentAudioViewStartPlay:(id)arg1;
- (id)cellForPlayNextAudio:(id)arg1;
- (void)didTouchPauseUploadingButtonOnMessageCollectionViewCell:(id)arg1;
- (void)didTouchFailureButtonOnMessageCollectionViewCell:(id)arg1;
- (void)didTouchReadAlertButtonOnMessageCollectionViewCell:(id)arg1;
- (void)didTouchReadCountButtonOnMessageCollectionViewCell:(id)arg1;
- (void)didTouchCellOnMessageCollectionViewCell:(id)arg1;
- (void)messageBubbleCViewFooterRightButton:(id)arg1 footerView:(id)arg2;
- (void)messageBubbleCViewFooterMiddleButton:(id)arg1 footerView:(id)arg2;
- (void)messageBubbleCViewFooterLeftButton:(id)arg1 footerView:(id)arg2;
- (_Bool)needResponderPanGesture:(id)arg1;
- (void)collectionView:(id)arg1 didTouchWithEvent:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForCellTopLabelAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForMessageBubbleTopLabelAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForCellBottomLabelAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 sourceTagViewWidth:(double)arg2 heightForMessageSourceTagViewAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 tagViewWidth:(double)arg2 heightForMessageTagViewAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForCellSafeMessagesAnchorViewAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForCellNewMessagesAnchorViewAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForSysteMessageViewAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)dismissUnreadCountBtn;
- (void)showUnreadCountBtn;
- (void)newMessagesBtnClick;
- (void)onShowFilesHelperMoreAction:(id)arg1;
- (void)onShowEmailMoreAction:(id)arg1;
- (void)onShowMoreAction:(id)arg1;
- (void)onBossChatAction:(id)arg1;
- (void)makeCall:(id)arg1;
- (void)createConferenceWithUIDs:(id)arg1 contactDictionary:(id)arg2 from:(unsigned long long)arg3 onVC:(id)arg4;
- (void)createSingleCallWithUID:(long long)arg1 onVC:(id)arg2;
- (void)onBlankAreaLongPressed:(id)arg1;
- (void)setupFullScreenVoiceRecordingGesture;
- (void)stopPlayer;
- (void)stopRecorderWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)hasNewISV;
- (void)refreshSafeWatarMarkIfNeeded;
- (void)refreshSettingHotDot;
- (void)setVcStyle:(long long)arg1 selectMessage:(id)arg2;
- (void)cancelSelectStyle;
- (id)setEditBottomMenuViewHidden:(_Bool)arg1;
- (id)getSelectedMessages;
- (id)getDefaultEditBottomMenuItems;
- (void)onEditBottomMenuWorkInfoAction:(id)arg1;
- (void)onEditBottomMenuDeleteAction;
- (void)onEditBottomMenuFavoriteAction;
- (void)onEditBottomMenuTransmitAction;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)restoreCurrentConversionInputMode;
- (void)storeCurrentConversionInputMode;
- (void)viewDidLoad;
- (void)updateNavigationBarLeftItemTitle;
- (void)openThirdEncryptGuide;
- (void)showThirdPartyEncryptRemindGuideIfNeed;
- (void)showNavigationTitleView:(id)arg1;
- (_Bool)isMTM;
- (void)configureMessagesViewController;
- (void)configureMessagesCollectionViewNeedInputContainerView:(_Bool)arg1;
- (void)configureMessagesNavigationBar;
- (void)addObserver;
- (void)popbackMessageVC;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (id)buildMessageDataSource;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 conversation:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)removeObserver;

// Remaining properties
@property(readonly, nonatomic) DTMessageBubbleAlipayRedEnvelopView *bubbleAlipayRedEnvelopView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentAudioView *bubbleAttachmentAudioView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentCMailView *bubbleAttachmentCMailView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentCRMView *bubbleAttachmentCRMView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentCSpaceView *bubbleAttachmentCSpaceView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentCardView *bubbleAttachmentCardView;
@property(readonly, nonatomic) DTMessageBubbleConferenceView *bubbleAttachmentConferenceView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentFileView *bubbleAttachmentFileView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentImageView *bubbleAttachmentImageView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentLinkView *bubbleAttachmentLinkView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentLocationView *bubbleAttachmentLocationView;
@property(readonly, nonatomic) DTMessageBubbleCTitleView *bubbleAttachmentOATitleView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentCOAView *bubbleAttachmentOAView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentShareView *bubbleAttachmentShareView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentTextView *bubbleAttachmentTextView;
@property(readonly, nonatomic) DTMessageBubbleAttachmentVideoView *bubbleAttachmentVideoView;
@property(readonly, nonatomic) DTMessageBubbleDecryptFailView *bubbleDecryptFailView;
@property(readonly, nonatomic) DTMessageBubbleEmailView *bubbleEmailView;
@property(readonly, nonatomic) DTMessageBubbleEnterpriseRedEnvelopView *bubbleEnterpriseRedEnvelopView;
@property(readonly, nonatomic) DTMessageBubbleRedEnvelopView *bubbleRedEnvelopView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
