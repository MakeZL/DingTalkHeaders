//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTCellItem;

@interface DTPrivacyViewController : DTTableViewController
{
    DTCellItem *_allowAuthOrgsItem;
    DTCellItem *_matchingItem;
}

@property(retain, nonatomic) DTCellItem *matchingItem; // @synthesize matchingItem=_matchingItem;
@property(retain, nonatomic) DTCellItem *allowAuthOrgsItem; // @synthesize allowAuthOrgsItem=_allowAuthOrgsItem;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)gotoBlacklist;
- (void)stopMatchingWithItem:(id)arg1;
- (void)startMatchingWithItem:(id)arg1;
- (void)matchCellDidSelectWithItem:(id)arg1;
- (void)setAllowAuthOrgsToShow:(_Bool)arg1;
- (void)tidyDataSource;
- (void)viewDidLoad;
- (void)dealloc;

@end

