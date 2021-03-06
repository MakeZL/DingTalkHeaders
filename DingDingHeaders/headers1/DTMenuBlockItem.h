//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface DTMenuBlockItem : NSObject
{
    NSString *_title;
    CDUnknownBlockType _clickBlock;
    UIImage *_iconImage;
    double _confirmProgress;
    double _finishProgress;
    long long _redDotCount;
    long long _actionType;
}

@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long redDotCount; // @synthesize redDotCount=_redDotCount;
@property(nonatomic) double finishProgress; // @synthesize finishProgress=_finishProgress;
@property(nonatomic) double confirmProgress; // @synthesize confirmProgress=_confirmProgress;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDingModel:(id)arg1;
- (id)initWithTitle:(id)arg1 clickBlock:(CDUnknownBlockType)arg2;

@end

