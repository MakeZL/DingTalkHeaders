//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;

@interface TBHotpatchDownloadMangager : NSObject
{
    _Bool _isProcessing;
    long long _retryCount;
    long long _currentRetryCount;
    NSURL *_URL;
    CDUnknownBlockType _completeBlock;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;
- (void)callCompleteBlockWithData:(id)arg1 error:(id)arg2;
- (void)checkStartDownloadURL;
- (void)downloadUrl:(id)arg1 retryCount:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;

@end

