//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class QLPreviewController;
@protocol QLPreviewItem;

@protocol QLPreviewControllerDataSource
- (id <QLPreviewItem>)previewController:(QLPreviewController *)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(QLPreviewController *)arg1;
@end

