//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTCSpaceFilesDataHandler, NSArray, NSIndexPath, NSIndexSet, NSString;

@protocol DTCSpaceFilesDataHandlerDelegate <NSObject>

@optional
- (id)objectAtOffsetIndexPath:(NSIndexPath *)arg1;
- (NSArray *)offsetSectionIndexTitles;
- (NSString *)sectionTitleForOffsetSection:(unsigned long long)arg1;
- (unsigned long long)numberOfRowsInOffsetSection:(unsigned long long)arg1;
- (unsigned long long)numberOfOffsetSection;
- (void)cspaceControllerDidChangeContent:(DTCSpaceFilesDataHandler *)arg1;
- (void)cspaceControllerWillChangeContent:(DTCSpaceFilesDataHandler *)arg1;
- (void)cspaceController:(DTCSpaceFilesDataHandler *)arg1 didChangeWithIndexPaths:(NSArray *)arg2 forChangeType:(long long)arg3;
- (void)cspaceController:(DTCSpaceFilesDataHandler *)arg1 didChangeWithIndexSet:(NSIndexSet *)arg2 forChangeType:(long long)arg3;
- (void)didDataHanlderFinished:(DTCSpaceFilesDataHandler *)arg1;
@end
