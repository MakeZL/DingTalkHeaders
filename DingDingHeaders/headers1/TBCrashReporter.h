//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TBCrashReporterDelegate, TBCrashReporterRunLoopDelegate;

@interface TBCrashReporter : NSObject
{
    id <TBCrashReporterDelegate> _delegate;
    id <TBCrashReporterRunLoopDelegate> _runLoopDelegate;
}

+ (id)sharedReporter;
@property(nonatomic) id <TBCrashReporterRunLoopDelegate> runLoopDelegate; // @synthesize runLoopDelegate=_runLoopDelegate;
@property(nonatomic) id <TBCrashReporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)turnOffMainThreadDeadlockMonitor;
- (void)turnOnMainThreadDeadlockMonitorWithDealockInterval:(double)arg1;
- (void)turnOnMainThreadDeadlockMonitor;
- (void)startMainRunLoopObserverWithBaseBlockTime:(float)arg1;
- (void)startMainRunLoopObserver;
- (void)setMergeCrashReport:(_Bool)arg1;
- (void)setCrashReporterModuleToMachException:(_Bool)arg1;
- (void)setWhenChangeAppVersion:(id)arg1;
- (void)setWhenChangeUserNick:(id)arg1;
- (id)generateLiveReportWithThread:(unsigned int)arg1;
- (void)sendLogAsync:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (_Bool)sendLogSync:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (void)beforeSendInitArgsWithAppkey:(id)arg1 Channel:(id)arg2 UserNick:(id)arg3 AppVersion:(id)arg4;
- (void)sendCatchedCrashReportWithType:(id)arg1 SubType:(id)arg2 Content:(id)arg3 ExtInfo:(id)arg4;
- (void)sendCatchedCrashReportWithContent:(id)arg1 ExtInfo:(id)arg2;
- (void)sendCatchedCrashReportWithType:(id)arg1 SubType:(id)arg2 Content:(id)arg3;
- (void)sendCatchedCrashReportWithContent:(id)arg1;
- (_Bool)checkIsBetaVersion:(id)arg1;
- (void)checkAndUploadCrashReporter;
- (_Bool)checkAppVersion:(id)arg1;
- (void)initCrashSDK:(id)arg1 AppVersion:(id)arg2 Channel:(id)arg3 Usernick:(id)arg4;

@end

