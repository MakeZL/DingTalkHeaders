//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LWPDDAbstractLogger.h"

#import "LWPDDLogger-Protocol.h"

@class NSCalendar, NSMutableArray, NSMutableDictionary, NSString;

@interface LWPDDTTYLogger : LWPDDAbstractLogger <LWPDDLogger>
{
    NSCalendar *calendar;
    unsigned long long calendarUnitFlags;
    NSString *appName;
    char *app;
    unsigned long long appLen;
    NSString *processID;
    char *pid;
    unsigned long long pidLen;
    _Bool colorsEnabled;
    NSMutableArray *colorProfilesArray;
    NSMutableDictionary *colorProfilesDict;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (unsigned long long)codeIndexForColor:(id)arg1;
+ (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 fromColor:(id)arg4;
+ (void)initialize_colors_256;
+ (void)initialize_colors_16;
- (void).cxx_destruct;
- (id)loggerName;
- (void)logMessage:(id)arg1;
- (void)clearAllColors;
- (void)clearColorsForAllTags;
- (void)clearColorsForAllFlags;
- (void)clearColorsForTag:(id)arg1;
- (void)clearColorsForFlag:(int)arg1 context:(int)arg2;
- (void)clearColorsForFlag:(int)arg1;
- (void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forTag:(id)arg3;
- (void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3 context:(int)arg4;
- (void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3;
@property _Bool colorsEnabled;
- (void)loadDefaultColorProfiles;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

