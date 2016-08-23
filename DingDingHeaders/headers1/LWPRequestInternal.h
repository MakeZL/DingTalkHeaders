//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LWPRequestInternal : NSObject
{
    int _state;
    double _lastRecvDataTimestamp;
    unsigned long long _mode;
    unsigned long long _subMode;
    unsigned long long _sendCount;
    double _startTimestamp;
    double _tryTimestamp;
    double _finishTimestamp;
    NSString *_connectionId;
}

@property(copy, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property(readonly, nonatomic) double finishTimestamp; // @synthesize finishTimestamp=_finishTimestamp;
@property(readonly, nonatomic) double tryTimestamp; // @synthesize tryTimestamp=_tryTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) unsigned long long sendCount; // @synthesize sendCount=_sendCount;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long subMode; // @synthesize subMode=_subMode;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) double lastRecvDataTimestamp; // @synthesize lastRecvDataTimestamp=_lastRecvDataTimestamp;
- (void).cxx_destruct;
- (double)lastDataTimestamp;
- (void)progressUpdate;
- (void)enterFinished;
- (void)enterTrying:(id)arg1;
- (void)enterPending;
- (id)init;

@end

