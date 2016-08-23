//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITextFieldDelegate-Protocol.h"

@class BLGTToken, BLGTTokenField, NSArray, NSIndexPath, NSString, UIImage, UITableView, UITableViewCell;

@protocol BLGTTokenFieldDelegate <UITextFieldDelegate>

@optional
- (double)tokenField:(BLGTTokenField *)arg1 resultsTableView:(UITableView *)arg2 heightForRowAtIndexPath:(NSIndexPath *)arg3;
- (UITableViewCell *)tokenField:(BLGTTokenField *)arg1 resultsTableView:(UITableView *)arg2 cellForRepresentedObject:(id)arg3;
- (UIImage *)tokenField:(BLGTTokenField *)arg1 searchResultImageForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(BLGTTokenField *)arg1 searchResultSubtitleForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(BLGTTokenField *)arg1 searchResultStringForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(BLGTTokenField *)arg1 displayStringForRepresentedObject:(id)arg2;
- (void)tokenField:(BLGTTokenField *)arg1 didFinishSearch:(NSArray *)arg2;
- (void)tokenField:(BLGTTokenField *)arg1 performCustomSearchForSearchString:(NSString *)arg2 withCompletionHandler:(void (^)(NSArray *))arg3;
- (_Bool)tokenField:(BLGTTokenField *)arg1 shouldUseCustomSearchForSearchString:(NSString *)arg2;
- (void)tokenField:(BLGTTokenField *)arg1 didRemoveToken:(BLGTToken *)arg2;
- (_Bool)tokenField:(BLGTTokenField *)arg1 willRemoveToken:(BLGTToken *)arg2;
- (void)tokenField:(BLGTTokenField *)arg1 didAddToken:(BLGTToken *)arg2;
- (_Bool)tokenField:(BLGTTokenField *)arg1 willAddToken:(BLGTToken *)arg2;
@end

