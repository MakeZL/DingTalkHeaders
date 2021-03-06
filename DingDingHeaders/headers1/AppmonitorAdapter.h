//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AppmonitorAdapter : NSObject
{
    id _appmonitorCounterCls;
    SEL _commitCounterSel;
    id _appmonitorAlarmCls;
    SEL _commitAlarmSel;
    id _appmonitorStatCls;
    SEL _commitStatSel;
    SEL _registStatSel;
}

+ (id)shareInstance;
@property(nonatomic) SEL registStatSel; // @synthesize registStatSel=_registStatSel;
@property(nonatomic) SEL commitStatSel; // @synthesize commitStatSel=_commitStatSel;
@property(retain, nonatomic) id appmonitorStatCls; // @synthesize appmonitorStatCls=_appmonitorStatCls;
@property(nonatomic) SEL commitAlarmSel; // @synthesize commitAlarmSel=_commitAlarmSel;
@property(retain, nonatomic) id appmonitorAlarmCls; // @synthesize appmonitorAlarmCls=_appmonitorAlarmCls;
@property(nonatomic) SEL commitCounterSel; // @synthesize commitCounterSel=_commitCounterSel;
@property(retain, nonatomic) id appmonitorCounterCls; // @synthesize appmonitorCounterCls=_appmonitorCounterCls;
- (void).cxx_destruct;
- (void)commitFailWithPage:(id)arg1 monitorPoint:(id)arg2 errMsg:(id)arg3;
- (void)commitWithPage:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3;
- (void)commitStatWithPage:(id)arg1 monitorPoint:(id)arg2 measureName:(id)arg3 value:(int)arg4;
- (void)registWithPage:(id)arg1 monitorPoint:(id)arg2;

@end

