//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class NSString;

@interface BLMultiStepUpdateItemAPIV2Task : BLBaseAPITask
{
    NSString *_spaceId;
    NSString *_bizType;
    long long _step;
}

@property(nonatomic) long long step; // @synthesize step=_step;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;
- (void)processWithResponse:(id)arg1 forStep:(long long)arg2 complectionBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (id)updateDataForStep:(long long)arg1;
- (_Bool)handleCustomStep:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (_Bool)canHandleCustomStep:(long long)arg1;
- (_Bool)haveSomethingToDoForStep:(long long)arg1;
- (long long)nextValidStepForStep:(long long)arg1;
- (long long)nextStepForStep:(long long)arg1;
- (void)doUpdate;
- (void)doNext;
- (void)process;
- (unsigned long long)canRetryWithError:(id)arg1 onStep:(long long)arg2;
- (unsigned long long)canRetryWithError:(id)arg1;
- (long long)currentStep;

@end

