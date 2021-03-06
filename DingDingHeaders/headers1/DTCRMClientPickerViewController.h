//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "DTPickerAvatarViewDelegate-Protocol.h"

@class DTCellItem, DTEmptyResultView, DTLoadMoreController, DTPickerAvatarView, DTPickerStatus, NSArray, NSSet, NSString;

@interface DTCRMClientPickerViewController : DTTableViewController <DTPickerAvatarViewDelegate, DTLoadMoreDelegate>
{
    _Bool _isPresent;
    CDUnknownBlockType _pickDidFinishBlock;
    CDUnknownBlockType _pickCancelBlock;
    DTPickerStatus *_pickerStatus;
    NSString *_customTitle;
    NSSet *_disabledUIDs;
    unsigned long long _limitNumber;
    NSArray *_selectedIdentifiers;
    DTLoadMoreController *_loadMoreController;
    DTEmptyResultView *_emptyView;
    DTPickerAvatarView *_pickerAvatarView;
    NSArray *_memberList;
    DTCellItem *_allItem;
    NSArray *_identifierPickedList;
}

@property(copy, nonatomic) NSArray *identifierPickedList; // @synthesize identifierPickedList=_identifierPickedList;
@property(retain, nonatomic) DTCellItem *allItem; // @synthesize allItem=_allItem;
@property(copy, nonatomic) NSArray *memberList; // @synthesize memberList=_memberList;
@property(retain, nonatomic) DTPickerAvatarView *pickerAvatarView; // @synthesize pickerAvatarView=_pickerAvatarView;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) NSArray *selectedIdentifiers; // @synthesize selectedIdentifiers=_selectedIdentifiers;
@property(nonatomic) unsigned long long limitNumber; // @synthesize limitNumber=_limitNumber;
@property(copy, nonatomic) NSSet *disabledUIDs; // @synthesize disabledUIDs=_disabledUIDs;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) DTPickerStatus *pickerStatus; // @synthesize pickerStatus=_pickerStatus;
@property(copy, nonatomic) CDUnknownBlockType pickCancelBlock; // @synthesize pickCancelBlock=_pickCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType pickDidFinishBlock; // @synthesize pickDidFinishBlock=_pickDidFinishBlock;
- (void).cxx_destruct;
- (void)showOverLimitMessageWithAutoDismiss:(_Bool)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)pickedNumberOverLimit;
- (void)confirmButtonDidPressed;
- (void)pickerAvatarViewDidScroll:(id)arg1;
- (double)pickerAvatarView:(id)arg1 widthForColumnAtColumnIndex:(long long)arg2;
- (void)pickerAvatarView:(id)arg1 didSelectColumnAtColumnIndex:(long long)arg2;
- (id)pickerAvatarView:(id)arg1 cellForColumnAtColumnIndex:(long long)arg2;
- (long long)numberOfColumnsInPickerAvatarView:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadCompoment;
- (void)loadDataSource;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

