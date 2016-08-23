//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDAbstractLogger.h"

@interface DDAbstractDatabaseLogger : DDAbstractLogger
{
    unsigned long long saveThreshold;
    double saveInterval;
    double maxAge;
    double deleteInterval;
    _Bool deleteOnEverySave;
    _Bool saveTimerSuspended;
    unsigned long long unsavedCount;
    unsigned long long unsavedTime;
    struct dispatch_source_s *saveTimer;
    unsigned long long lastDeleteTime;
    struct dispatch_source_s *deleteTimer;
}

- (void)flush;
- (void)logMessage:(id)arg1;
- (void)willRemoveLogger;
- (void)didAddLogger;
- (void)deleteOldLogEntries;
- (void)savePendingLogEntries;
@property _Bool deleteOnEverySave;
@property double deleteInterval;
@property double maxAge;
@property double saveInterval;
@property unsigned long long saveThreshold;
- (void)createAndStartDeleteTimer;
- (void)updateDeleteTimer;
- (void)destroyDeleteTimer;
- (void)createSuspendedSaveTimer;
- (void)updateAndResumeSaveTimer;
- (void)destroySaveTimer;
- (void)performDelete;
- (void)performSaveAndSuspendSaveTimer;
- (void)db_saveAndDelete;
- (void)db_delete;
- (void)db_save;
- (_Bool)db_log:(id)arg1;
- (void)dealloc;
- (id)init;

@end

