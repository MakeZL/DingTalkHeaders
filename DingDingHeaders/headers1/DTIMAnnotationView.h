//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnnotationView.h"

#import "DTAnnotationPopViewDeleagte-Protocol.h"

@class DTAnnotationPopView, NSString;
@protocol DTIMAnnotationViewDelegate;

@interface DTIMAnnotationView : MAAnnotationView <DTAnnotationPopViewDeleagte>
{
    _Bool _showCustomPopView;
    id <DTIMAnnotationViewDelegate> _deleagte;
    DTAnnotationPopView *_calloutView;
}

@property(retain, nonatomic) DTAnnotationPopView *calloutView; // @synthesize calloutView=_calloutView;
@property(nonatomic) __weak id <DTIMAnnotationViewDelegate> deleagte; // @synthesize deleagte=_deleagte;
@property(nonatomic) _Bool showCustomPopView; // @synthesize showCustomPopView=_showCustomPopView;
- (void).cxx_destruct;
- (void)popViewNavButtonClicked:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didMoveToSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

