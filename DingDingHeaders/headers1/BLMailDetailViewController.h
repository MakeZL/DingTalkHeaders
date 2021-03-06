//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLViewController.h"

#import "BLDatePickerViewControllerDelegate-Protocol.h"
#import "BLMailDetailInterface-Protocol.h"
#import "BLMailDetailViewData-Protocol.h"
#import "BLMailOperationInterface-Protocol.h"
#import "BLMessageViewDelegate-Protocol.h"
#import "BLReminderPopupViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BLBarButtonItem, BLBaseButton, BLDatePickerViewController, BLFolder, BLMail, BLMailDetailPresenter, BLMessageView, BLReminderPopupView, NSArray, NSString, UINavigationController, UIToolbar;
@protocol BLMailDetailViewControllerDelegate;

@interface BLMailDetailViewController : BLViewController <BLMessageViewDelegate, BLReminderPopupViewDelegate, BLDatePickerViewControllerDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, BLMailDetailInterface, BLMailDetailViewData, BLMailOperationInterface>
{
    _Bool _hideToolBar;
    _Bool _hideRightNavItems;
    BLMail *_mail;
    NSString *_mailId;
    BLFolder *_folder;
    BLMailDetailPresenter *_eventHandler;
    id <BLMailDetailViewControllerDelegate> _delegate;
    NSArray *_topActionBarItems;
    NSArray *_bottomActionBarItems;
    BLMessageView *_messageView;
    UIToolbar *_toolbar;
    BLBarButtonItem *_replyBarButtonItem;
    BLBarButtonItem *_replyAllBarButtonItem;
    BLBarButtonItem *_forwardBarButtonItem;
    BLBarButtonItem *_deleteBarButtonItem;
    BLBaseButton *_buttonGoUp;
    BLBaseButton *_buttonGoDown;
    BLReminderPopupView *_reminderPopupView;
    BLDatePickerViewController *_datePickerView;
    UINavigationController *_tempSaveNavVC;
}

@property(nonatomic) UINavigationController *tempSaveNavVC; // @synthesize tempSaveNavVC=_tempSaveNavVC;
@property(retain, nonatomic) BLDatePickerViewController *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) BLReminderPopupView *reminderPopupView; // @synthesize reminderPopupView=_reminderPopupView;
@property(retain, nonatomic) BLBaseButton *buttonGoDown; // @synthesize buttonGoDown=_buttonGoDown;
@property(retain, nonatomic) BLBaseButton *buttonGoUp; // @synthesize buttonGoUp=_buttonGoUp;
@property(retain, nonatomic) BLBarButtonItem *deleteBarButtonItem; // @synthesize deleteBarButtonItem=_deleteBarButtonItem;
@property(retain, nonatomic) BLBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) BLBarButtonItem *replyAllBarButtonItem; // @synthesize replyAllBarButtonItem=_replyAllBarButtonItem;
@property(retain, nonatomic) BLBarButtonItem *replyBarButtonItem; // @synthesize replyBarButtonItem=_replyBarButtonItem;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) BLMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) NSArray *bottomActionBarItems; // @synthesize bottomActionBarItems=_bottomActionBarItems;
@property(retain, nonatomic) NSArray *topActionBarItems; // @synthesize topActionBarItems=_topActionBarItems;
@property(nonatomic) _Bool hideRightNavItems; // @synthesize hideRightNavItems=_hideRightNavItems;
@property(nonatomic) _Bool hideToolBar; // @synthesize hideToolBar=_hideToolBar;
@property(nonatomic) id <BLMailDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BLMailDetailPresenter *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) BLFolder *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSString *mailId; // @synthesize mailId=_mailId;
@property(retain, nonatomic) BLMail *mail; // @synthesize mail=_mail;
- (void).cxx_destruct;
- (id)showInlineImageTextDivTemplate;
- (_Bool)shouldLoadAfterDownloaded;
- (_Bool)inlineImagesHasDownloaded;
- (void)imapAttachmentsDownload;
- (id)replaceAllImageSourceToDownloadUrls;
- (void)dealInlineImageCacheFromInterceptor:(id)arg1;
- (void)messageView:(id)arg1 didClickReceiver:(id)arg2;
- (void)messageViewDidClickSender:(id)arg1;
- (void)messageView:(id)arg1 longPressImage:(id)arg2;
- (void)didTapStatusBar;
- (void)goDownBarButtonTaped:(id)arg1;
- (void)goUpBarButtonTaped:(id)arg1;
- (void)deleteButtonTaped:(id)arg1;
- (void)forwardButtonTaped:(id)arg1;
- (void)replyAllButtonTaped:(id)arg1;
- (void)replyButtonTaped:(id)arg1;
- (void)datePickerViewControllerDidCancel:(id)arg1;
- (void)datePickerViewController:(id)arg1 didPickerDate:(id)arg2;
- (_Bool)datePickerViewController:(id)arg1 shouldPickerDate:(id)arg2;
- (void)reminderPopupDidCancelDate:(id)arg1;
- (void)reminderPopupDidClickCustomDate:(id)arg1;
- (void)reminderPopup:(id)arg1 didPickDate:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showDatePickerWithSelectedDate:(id)arg1;
- (void)updateReminderTime:(id)arg1;
- (void)animationWithImage:(id)arg1 withNextMail:(id)arg2;
- (void)gotoNextMailFrom:(id)arg1;
- (void)showReminderPopupView:(_Bool)arg1;
- (void)setToolBarItemsType:(long long)arg1;
- (void)updateFlagIconWithType:(long long)arg1;
@property(readonly, nonatomic) NSString *jsTemplateFileName;
@property(readonly, nonatomic) NSString *readerTemplateFileName;
@property(readonly, nonatomic) NSArray *CIDImageURLStrings;
@property(readonly, nonatomic) struct CGRect viewFrame;
- (void)showAttendeeStatus:(id)arg1;
- (void)showGeneralErrorHUD:(id)arg1;
- (void)showNetworkErrorAlert;
- (void)showDownloadOptionActionsheet;
- (void)updateLayoutIfNeed:(_Bool)arg1;
- (void)updateMailBodyLoadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)showMailBodyLoadingFailed:(id)arg1;
- (void)showMailBodyLoading;
- (void)showViewAttendeeStatusControls:(_Bool)arg1;
- (void)showSendResponseOptions;
- (void)showResponseControls:(_Bool)arg1 withDisallowReason:(id)arg2;
- (void)hideEventArea;
- (void)updateEventDate:(id)arg1 andAlarmDate:(id)arg2;
- (void)updateEventOrganizer:(id)arg1;
- (void)updateEventLocation:(id)arg1;
- (void)updateEventStatusIsAccepted:(_Bool)arg1 isDeclined:(_Bool)arg2 isTentative:(_Bool)arg3;
- (void)setNeedManualShowInlineAttachments;
- (void)loadedInlineAttachmentAtFilePath:(id)arg1 withCIDURL:(id)arg2;
- (void)updateAttachmentDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 status:(long long)arg3 atIndex:(unsigned long long)arg4;
- (void)updateAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reloadAttachment:(id)arg1;
- (void)setAttachmentsFieldHidden:(_Bool)arg1;
- (void)updateBodyContent:(id)arg1 withBaseURL:(id)arg2;
- (void)updateSendTime:(id)arg1;
- (void)updateUnreadCount:(long long)arg1 andTotalRecipients:(long long)arg2 andShouldDetail:(_Bool)arg3;
- (void)updateAllRecipiensField:(id)arg1 andRecipientsCount:(unsigned long long)arg2;
- (void)updateCcFieldTokens:(id)arg1;
- (void)updateToFieldTokens:(id)arg1;
- (void)updateSenderFieldWithEmail:(id)arg1 andName:(id)arg2;
- (void)updateSubjectField:(id)arg1;
- (void)hasShownMail:(id)arg1;
- (struct CGRect)frameForToolbarAtOrientation:(long long)arg1;
- (void)hideToolBarMethod;
- (void)setupNavigationbar;
- (void)setupToolbar;
- (id)createContentWebView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

