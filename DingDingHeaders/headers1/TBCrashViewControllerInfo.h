//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBCrashViewControllerInfo : NSObject
{
    NSMutableArray *_crashReporterViewControllers;
}

+ (id)sharedInstance;
@property(retain) NSMutableArray *crashReporterViewControllers; // @synthesize crashReporterViewControllers=_crashReporterViewControllers;
- (void).cxx_destruct;
- (void)registerCrashViewControllerInfo:(id)arg1;
- (id)crashReportCallBackViewControllerInfo;
- (id)getViewControllerInfo:(id)arg1;
- (id)init;

@end

