//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol DTWebViewPageUTDelegate;

@interface DTWebViewPageUT : NSObject
{
    id <DTWebViewPageUTDelegate> _delegate;
    struct timeval _tv_start;
    struct timeval _tv_end;
    struct timeval _tv_total;
    _Bool _isRecording;
}

- (void).cxx_destruct;
- (void)endRecord:(_Bool)arg1;
- (void)startRecord;
- (void)cleanDelegate;
- (void)onAppWillTerminate:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (id)oldMicroAppPageURL;
- (id)oldMicroAppAgentID;
- (id)oldMicroAppCorpID;
- (id)microAppPageURL;
- (id)microAppAgentID;
- (id)microAppCorpID;
- (void)dealloc;
- (id)initWithDTWebViewPageUTDelegate:(id)arg1;

@end

