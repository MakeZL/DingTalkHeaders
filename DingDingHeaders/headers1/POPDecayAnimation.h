//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPPropertyAnimation.h"

@interface POPDecayAnimation : POPPropertyAnimation
{
}

+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)animation;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (void)_invalidateComputedProperties;
- (void)_ensureComputedProperties;
@property(copy, nonatomic) id velocity; // @dynamic velocity;
@property(readonly, copy, nonatomic) id originalVelocity;
- (id)reversedVelocity;
- (void)setToValue:(id)arg1;
- (void)setFromValue:(id)arg1;
@property(readonly, nonatomic) double duration;
- (id)toValue;
@property(nonatomic) double deceleration;
- (void)_initState;
- (id)init;

@end

