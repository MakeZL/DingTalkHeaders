//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MAAnnotationContainerView, MAAnnotationView, UIControl, UIView;

@protocol MAAnnotationContainerViewDelegate
- (void)annotationContainerView:(MAAnnotationContainerView *)arg1 scrollToRevealCalloutWithOffset:(struct CGSize)arg2;
- (_Bool)annotationContainer:(MAAnnotationContainerView *)arg1 shouldAnnotationViewCalloutHighlight:(MAAnnotationView *)arg2;
- (void)annotationContainer:(MAAnnotationContainerView *)arg1 didAnnotationViewCalloutTapped:(MAAnnotationView *)arg2;
- (void)annotationContainer:(MAAnnotationContainerView *)arg1 annotationView:(MAAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (struct CGRect)annotationVisibleRect;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(UIView *)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(UIView *)arg2;
- (void)annotationContainerView:(MAAnnotationContainerView *)arg1 annotationView:(MAAnnotationView *)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
@end

