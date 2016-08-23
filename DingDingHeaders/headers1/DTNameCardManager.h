//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class DTNameCard, DTNameCardScanViewController, LWFileUploadHandle, NSString, OCRCameraViewController, UIImage;

@interface DTNameCardManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _isLoadingCard;
    _Bool _isUserConfirmPick;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    DTNameCardScanViewController *_cardScanVC;
    OCRCameraViewController *_ocrCardScanVC;
    UIImage *_lastPickImage;
    DTNameCard *_nameCard;
    LWFileUploadHandle *_imageUploadHandler;
    NSString *_errorReason;
}

@property(copy, nonatomic) NSString *errorReason; // @synthesize errorReason=_errorReason;
@property(retain, nonatomic) LWFileUploadHandle *imageUploadHandler; // @synthesize imageUploadHandler=_imageUploadHandler;
@property(retain, nonatomic) DTNameCard *nameCard; // @synthesize nameCard=_nameCard;
@property(nonatomic) _Bool isUserConfirmPick; // @synthesize isUserConfirmPick=_isUserConfirmPick;
@property(nonatomic) _Bool isLoadingCard; // @synthesize isLoadingCard=_isLoadingCard;
@property(retain, nonatomic) UIImage *lastPickImage; // @synthesize lastPickImage=_lastPickImage;
@property(retain, nonatomic) OCRCameraViewController *ocrCardScanVC; // @synthesize ocrCardScanVC=_ocrCardScanVC;
@property(retain, nonatomic) DTNameCardScanViewController *cardScanVC; // @synthesize cardScanVC=_cardScanVC;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)recognizeNameCard:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)recognizeNameCard:(id)arg1 withViewController:(id)arg2;
- (id)uploadToTFS:(id)arg1 processingBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)compressImage:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)checkAndUpload:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)takeNameCardLessThanIOS8WithViewController:(id)arg1;
- (void)cleanAllData;
- (void)updateUploadingProcess:(double)arg1;
- (void)takeNameCardMoreThanIOS8WithViewController:(id)arg1;
- (void)takeNameCardWithViewController:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)saveToWebPersistenceWithCard:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

