//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "DTPickerAvatarViewDelegate-Protocol.h"
#import "DTSearchDisplayControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTEmptyResultView, DTPickerAvatarView, DTPickerStatus, DTSearchBar, DTSearchDisplayController, NSArray, NSString, UIActivityIndicatorView, UITableView;

@interface DTMobileContactPickerViewController : DTContactBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, DTSearchDisplayControllerDelegate, DTPickerAvatarViewDelegate>
{
    _Bool _isPresent;
    CDUnknownBlockType _pickDidFinishBlock;
    CDUnknownBlockType _pickCancelBlock;
    DTPickerStatus *_pickerStatus;
    UITableView *_tableView;
    NSArray *_datasource;
    NSArray *_sectionIndexes;
    DTSearchBar *_searchBar;
    DTSearchDisplayController *_searchDC;
    DTPickerAvatarView *_pickerAvatarView;
    DTEmptyResultView *_emptyResultView;
    UIActivityIndicatorView *_indicatorView;
    double _statusBarOffset;
    double _keyboardOffset;
}

@property(nonatomic) double keyboardOffset; // @synthesize keyboardOffset=_keyboardOffset;
@property(nonatomic) double statusBarOffset; // @synthesize statusBarOffset=_statusBarOffset;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) DTEmptyResultView *emptyResultView; // @synthesize emptyResultView=_emptyResultView;
@property(retain, nonatomic) DTPickerAvatarView *pickerAvatarView; // @synthesize pickerAvatarView=_pickerAvatarView;
@property(retain, nonatomic) DTSearchDisplayController *searchDC; // @synthesize searchDC=_searchDC;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSArray *sectionIndexes; // @synthesize sectionIndexes=_sectionIndexes;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) DTPickerStatus *pickerStatus; // @synthesize pickerStatus=_pickerStatus;
@property(copy, nonatomic) CDUnknownBlockType pickCancelBlock; // @synthesize pickCancelBlock=_pickCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType pickDidFinishBlock; // @synthesize pickDidFinishBlock=_pickDidFinishBlock;
- (void).cxx_destruct;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)showOverLimitMessageWithAutoDismiss:(_Bool)arg1;
- (void)layoutPickerView;
- (long long)indexOfContactItemInPickerAvatarView:(id)arg1;
- (void)contactCell:(id)arg1 didSelectedWithContactItem:(id)arg2;
- (void)uidsOfIdentifier:(id)arg1 results:(CDUnknownBlockType)arg2;
- (void)dealWithPickResultsInViewController:(id)arg1;
- (id)viewControllerName;
- (void)cancelButtonPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)pickedNumberOverLimit;
- (void)confirmButtonDidPressed;
- (void)pickerAvatarViewDidScroll:(id)arg1;
- (void)pickerAvatarView:(id)arg1 didSelectColumnAtColumnIndex:(long long)arg2;
- (id)pickerAvatarView:(id)arg1 cellForColumnAtColumnIndex:(long long)arg2;
- (long long)numberOfColumnsInPickerAvatarView:(id)arg1;
- (void)showsMobileContacts:(id)arg1 isGranted:(_Bool)arg2;
- (void)loadDataSource;
- (void)loadComponent;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

