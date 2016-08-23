//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTPickViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIActivityIndicatorView, UITableView;

@interface DTRootPickViewController : DTPickViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned long long _pickModuleType;
    NSArray *_cards;
    NSArray *_contactDataSource;
    UITableView *_contactTableView;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UITableView *contactTableView; // @synthesize contactTableView=_contactTableView;
@property(copy, nonatomic) NSArray *contactDataSource; // @synthesize contactDataSource=_contactDataSource;
@property(copy, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(nonatomic) unsigned long long pickModuleType; // @synthesize pickModuleType=_pickModuleType;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cancelButtonPressed;
- (void)loadDataSource;
- (void)loadComponent;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

