//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

@class NSMutableDictionary;

@interface DistancePickerView : UIPickerView
{
    NSMutableDictionary *labels;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)updateLabel:(id)arg1 forComponent:(unsigned long long)arg2;
- (void)addLabel:(id)arg1 forComponent:(unsigned long long)arg2 forLongestString:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

