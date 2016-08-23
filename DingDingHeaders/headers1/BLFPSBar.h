//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class CADisplayLink, CAShapeLayer, CATextLayer;

@interface BLFPSBar : UIWindow
{
    CADisplayLink *_displayLink;
    unsigned long long _historyDTLength;
    double _historyDT[320];
    double _displayLinkTickTimeLast;
    double _lastUIUpdateTime;
    CATextLayer *_fpsTextLayer;
    CAShapeLayer *_linesLayer;
    CAShapeLayer *_chartLayer;
    _Bool _showsAverage;
    double _desiredChartUpdateInterval;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool showsAverage; // @synthesize showsAverage=_showsAverage;
@property(nonatomic) double desiredChartUpdateInterval; // @synthesize desiredChartUpdateInterval=_desiredChartUpdateInterval;
- (void).cxx_destruct;
- (void)updateChartAndText;
- (void)displayLinkTick;
- (void)applicationWillResignActiveNotification;
- (void)applicationDidBecomeActiveNotification;
- (void)setPause:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end
