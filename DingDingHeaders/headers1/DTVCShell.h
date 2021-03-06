//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTVCSharedInstance-Protocol.h"

@class DDFileLogger, DDLogFileManagerDefault, NSString;

@interface DTVCShell : NSObject <DTVCSharedInstance>
{
    DDLogFileManagerDefault *_logFileManager;
    DDFileLogger *_logger;
    NSString *_logDirectory;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setLogConfigure;
- (id)getLogBase64WithDir:(id)arg1;
- (void)stopLogRecordWithFileName:(CDUnknownBlockType)arg1;
- (void)loggerFormat:(id)arg1;
- (void)instanceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

