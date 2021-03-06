//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSpacePhotoBrowserDataSource-Protocol.h"

@class BLAccount, BLSpaceEntry, DTBizCSpaceDentry, DTCSpaceOperationProcessor, DTCSpacePhotoItem, NSString, UIViewController;
@protocol BLCancelable, DTDentryDetailInterface, OS_dispatch_queue, SDWebImageOperation;

@interface DTDentryDetailPresenter : NSObject <DTCSpacePhotoBrowserDataSource>
{
    _Bool forceUseDBObject;
    _Bool _checkPrivilege;
    _Bool _saveTemp;
    _Bool _isWaterMark;
    _Bool _isDocReadOnly;
    UIViewController<DTDentryDetailInterface> *_userInterface;
    BLAccount *_currentAccount;
    BLSpaceEntry *_spaceEntry;
    DTBizCSpaceDentry *_file;
    id <BLCancelable> _downloadCancelItem;
    DTCSpacePhotoItem *_photoItem;
    NSObject<OS_dispatch_queue> *_ioQueue;
    id <SDWebImageOperation> _sdOperation;
    DTCSpaceOperationProcessor *_operationProcessor;
}

+ (id)supportPreviewFileType;
@property(nonatomic) _Bool isDocReadOnly; // @synthesize isDocReadOnly=_isDocReadOnly;
@property(nonatomic) _Bool isWaterMark; // @synthesize isWaterMark=_isWaterMark;
@property(retain, nonatomic) DTCSpaceOperationProcessor *operationProcessor; // @synthesize operationProcessor=_operationProcessor;
@property(nonatomic) _Bool saveTemp; // @synthesize saveTemp=_saveTemp;
@property(retain, nonatomic) id <SDWebImageOperation> sdOperation; // @synthesize sdOperation=_sdOperation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) DTCSpacePhotoItem *photoItem; // @synthesize photoItem=_photoItem;
@property(retain, nonatomic) id <BLCancelable> downloadCancelItem; // @synthesize downloadCancelItem=_downloadCancelItem;
@property(retain, nonatomic) DTBizCSpaceDentry *file; // @synthesize file=_file;
@property(nonatomic) _Bool checkPrivilege; // @synthesize checkPrivilege=_checkPrivilege;
@property(retain, nonatomic) BLSpaceEntry *spaceEntry; // @synthesize spaceEntry=_spaceEntry;
@property(retain, nonatomic) BLAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(nonatomic) __weak UIViewController<DTDentryDetailInterface> *userInterface; // @synthesize userInterface=_userInterface;
@property(nonatomic) _Bool forceUseDBObject; // @synthesize forceUseDBObject;
- (void).cxx_destruct;
- (void)processRename:(id)arg1;
- (void)processDelete:(id)arg1;
- (void)cancelDownloadPhotoWithKey:(id)arg1;
- (id)downloadPhotoAtIndex:(unsigned long long)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)photoRequestHeader;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photoes;
- (unsigned long long)currentPhotoIndex;
- (unsigned long long)photoCounts;
- (_Bool)needCheckPrivilige;
- (_Bool)isDirectPreviewFile:(id)arg1;
- (_Bool)directPreviewIfNeeded:(id)arg1;
- (void)downloadPreviewableFile:(id)arg1;
- (void)downloadOriginFile:(id)arg1 automaticly:(_Bool)arg2;
- (void)checkDentryExist:(id)arg1;
- (id)formatSizeString:(double)arg1;
- (_Bool)downloadIfNeed:(id)arg1;
- (void)previewDentry:(id)arg1 automaticly:(_Bool)arg2;
- (void)startDownload:(id)arg1 automaticly:(_Bool)arg2;
- (unsigned long long)checkDownloadStatus:(id)arg1;
- (_Bool)hasFullPrivilege;
- (_Bool)isFileReadOnly;
- (_Bool)isShowWaterMark;
- (_Bool)isFileSupportQuickLookPreview:(id)arg1 size:(unsigned long long)arg2;
- (_Bool)isFileSupportOnlinePreview:(id)arg1 size:(unsigned long long)arg2;
- (void)viewPhoto:(id)arg1;
- (void)moveDentry:(id)arg1 toTarget:(id)arg2;
- (void)deleteDentry:(id)arg1;
- (void)stopDownload:(id)arg1;
- (void)pauseOrResumeDownload:(id)arg1;
- (void)startDownload:(id)arg1;
- (_Bool)previewDocDentry:(id)arg1;
- (void)cleanView;
- (void)_setupWithDentry:(id)arg1;
- (void)setupWithDentry:(id)arg1;
- (id)dateString:(double)arg1;
- (void)setupWithDentrySimpleModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

