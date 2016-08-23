//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "LWEmotionViewDelegate-Protocol.h"

@class LWEmotionView, LWEmotionViewModel, NSString;
@protocol LWEmotionViewDelegate;

@interface DTEmotionCollectionCell : UICollectionViewCell <LWEmotionViewDelegate>
{
    LWEmotionViewModel *_emotionViewModel;
    id <LWEmotionViewDelegate> _parent;
    LWEmotionView *_emotionView;
}

@property(retain, nonatomic) LWEmotionView *emotionView; // @synthesize emotionView=_emotionView;
@property(retain, nonatomic) id <LWEmotionViewDelegate> parent; // @synthesize parent=_parent;
@property(retain, nonatomic) LWEmotionViewModel *emotionViewModel; // @synthesize emotionViewModel=_emotionViewModel;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

