//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAAnnotationView;

@protocol MAAnnotationContainerDelegate <NSObject>
- (void)updateCalloutIfNecessaryForAnnotationView:(MAAnnotationView *)arg1;
- (void)updateAnnotationViewPosition:(MAAnnotationView *)arg1;
- (void)addAnnotationView:(MAAnnotationView *)arg1 allowAnimation:(_Bool)arg2;
- (void)removeAnnotationView:(MAAnnotationView *)arg1;
- (void)deselectAnnotationView:(MAAnnotationView *)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationView:(MAAnnotationView *)arg1 animated:(_Bool)arg2;
- (void)moveAnnotationView:(MAAnnotationView *)arg1 fromCoordinate:(CDStruct_c3b9c2ee)arg2 animated:(_Bool)arg3 duration:(double)arg4;
@end

