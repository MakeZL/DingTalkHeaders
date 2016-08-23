//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPAnimation.h"

@interface POPCustomAnimation : POPAnimation
{
    double _currentTime;
    double _elapsedTime;
    CDUnknownBlockType _animate;
}

+ (id)animationWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType animate; // @synthesize animate=_animate;
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (_Bool)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3;
- (double)beginTime;
- (id)_init;

@end

