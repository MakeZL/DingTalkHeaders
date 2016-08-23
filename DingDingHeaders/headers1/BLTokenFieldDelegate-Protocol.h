//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITextFieldDelegate-Protocol.h"

@class BLToken, BLTokenField, NSArray, NSIndexPath, NSString, UITableView, UITableViewCell;

@protocol BLTokenFieldDelegate <UITextFieldDelegate>

@optional
- (void)tokenField:(BLTokenField *)arg1 tokenTaped:(BLToken *)arg2;
- (double)tokenField:(BLTokenField *)arg1 resultsTableView:(UITableView *)arg2 heightForRowAtIndexPath:(NSIndexPath *)arg3;
- (UITableViewCell *)tokenField:(BLTokenField *)arg1 resultsTableView:(UITableView *)arg2 cellForRepresentedObject:(id)arg3;
- (NSString *)tokenField:(BLTokenField *)arg1 searchResultSubtitleForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(BLTokenField *)arg1 searchResultStringForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(BLTokenField *)arg1 displayStringForRepresentedObject:(id)arg2;
- (void)tokenField:(BLTokenField *)arg1 didFinishSearch:(NSArray *)arg2;
- (void)tokenField:(BLTokenField *)arg1 performCustomSearchForSearchString:(NSString *)arg2 withCompletionHandler:(void (^)(NSArray *))arg3;
- (_Bool)tokenField:(BLTokenField *)arg1 shouldUseCustomSearchForSearchString:(NSString *)arg2;
- (void)tokenField:(BLTokenField *)arg1 didRemoveToken:(BLToken *)arg2;
- (_Bool)tokenField:(BLTokenField *)arg1 willRemoveToken:(BLToken *)arg2;
- (void)tokenField:(BLTokenField *)arg1 didAddToken:(BLToken *)arg2;
- (_Bool)tokenField:(BLTokenField *)arg1 willAddToken:(BLToken *)arg2;
@end
