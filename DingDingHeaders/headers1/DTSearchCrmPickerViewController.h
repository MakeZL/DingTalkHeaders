//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTPickerAvatarViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTPickerAvatarView, DTPickerStatus, NSArray, NSString, UITableView;

@interface DTSearchCrmPickerViewController : DTContactBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, DTPickerAvatarViewDelegate>
{
    NSArray *_datasource;
    NSString *_searchText;
    DTPickerStatus *_pickerStatus;
    UITableView *_tableView;
    NSArray *_filterArray;
    DTPickerAvatarView *_pickerAvatarView;
    DTEmptyResultView *_emptyResultView;
    double _keyboardHeight;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) DTPickerAvatarView *pickerAvatarView; // @synthesize pickerAvatarView=_pickerAvatarView;
@property(retain, nonatomic) NSArray *filterArray; // @synthesize filterArray=_filterArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DTPickerStatus *pickerStatus; // @synthesize pickerStatus=_pickerStatus;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (id)fullMobileWithMobile:(id)arg1 countryCode:(id)arg2;
- (id)identifierWithCRMContact:(id)arg1 enableEmailMode:(_Bool)arg2;
- (void)showOverLimitMessageWithAutoDismiss:(_Bool)arg1;
- (long long)indexOfContactItemInPickerAvatarView:(id)arg1;
- (void)contactCell:(id)arg1 didSelectedWithContactItem:(id)arg2;
- (id)searchCrmsWithSearchText:(id)arg1;
- (void)showCrmContacts:(id)arg1;
- (void)reloadResultWithText:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)pickedNumberOverLimit;
- (void)confirmButtonDidPressed;
- (void)pickerAvatarViewDidScroll:(id)arg1;
- (void)pickerAvatarView:(id)arg1 didSelectColumnAtColumnIndex:(long long)arg2;
- (id)pickerAvatarView:(id)arg1 cellForColumnAtColumnIndex:(long long)arg2;
- (long long)numberOfColumnsInPickerAvatarView:(id)arg1;
- (void)loadDataSource;
- (void)viewDidLayoutSubviews;
- (void)loadComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

