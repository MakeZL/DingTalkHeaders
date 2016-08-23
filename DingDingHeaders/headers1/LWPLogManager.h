//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LWPLogManager : NSObject
{
    _Bool _disableAutoUpload;
    _Bool _isUploading;
    NSString *_logPath;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(copy, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
- (void).cxx_destruct;
- (void)saveUploadTime;
- (_Bool)isTimeUploadLog;
- (void)sendLogMessage:(id)arg1 withFilePath:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)_tryPerformUpload:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool disableAutoUpload;
- (id)logFiles:(_Bool)arg1;
- (void)clearZeroFiles;
- (void)clientStatusChanged:(id)arg1;
- (void)forceUploadLogs:(CDUnknownBlockType)arg1;
- (void)didRecvInternalLogCmd:(id)arg1;
- (void)dealloc;
- (id)init;

@end

