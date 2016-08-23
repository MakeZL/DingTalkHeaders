//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTButtonView, DTCell, UITextField;

@interface DTEditSubDeptViewController : DTTableViewController
{
    _Bool _isInsertButtonCilck;
    UITextField *_editingTextField;
    DTCell *_currentEditingCell;
    DTButtonView *_nextButton;
}

@property(retain, nonatomic) DTButtonView *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) _Bool isInsertButtonCilck; // @synthesize isInsertButtonCilck=_isInsertButtonCilck;
@property(retain, nonatomic) DTCell *currentEditingCell; // @synthesize currentEditingCell=_currentEditingCell;
@property(retain, nonatomic) UITextField *editingTextField; // @synthesize editingTextField=_editingTextField;
- (void).cxx_destruct;
- (void)nextButtonClick:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)hideKeyboard;
- (id)insertItemInDepart:(id)arg1;
- (void)insertItem:(id)arg1 intoDataSource:(id)arg2;
- (void)removeItem:(id)arg1 formDataSource:(id)arg2;
- (id)deleteItemWithDepart:(id)arg1;
- (id)fixedItemWithDepart:(id)arg1;
- (void)loadDataSource;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)clickEvent:(id)arg1;
- (void)hideKeyboardActionForView:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end
