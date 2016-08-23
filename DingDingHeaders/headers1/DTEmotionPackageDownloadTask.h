//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTEmotionPackageModel, NSString, NSURL;
@protocol DTDLOperation;

@interface DTEmotionPackageDownloadTask : NSObject
{
    NSURL *_downloadingURL;
    NSString *_destinationStorePath;
    double _lastCheckingTime;
    _Bool _shouldReportProgress;
    _Bool _hasDone;
    _Bool _isCanceled;
    float _progress;
    long long _packageId;
    DTEmotionPackageModel *_packageModel;
    id <DTDLOperation> _operation;
}

+ (void)transferUnzippedPackage:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)processPackageData:(id)arg1 task:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool hasDone; // @synthesize hasDone=_hasDone;
@property(retain, nonatomic) id <DTDLOperation> operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) DTEmotionPackageModel *packageModel; // @synthesize packageModel=_packageModel;
@property(readonly, nonatomic) long long packageId; // @synthesize packageId=_packageId;
- (void).cxx_destruct;
- (_Bool)shouldReportProgress:(_Bool)arg1;
- (void)updateProgress:(float)arg1;
- (id)packageDownloadingURL;
- (id)initWithPackage:(id)arg1;

@end

