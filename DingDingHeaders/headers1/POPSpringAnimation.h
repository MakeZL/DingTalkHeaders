//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPPropertyAnimation.h"

@interface POPSpringAnimation : POPPropertyAnimation
{
}

+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)animation;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (void)_updatedDynamicsMass;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsTension;
- (void)setSolver:(SpringSolver_fe820e75 *)arg1;
- (SpringSolver_fe820e75 *)solver;
@property(nonatomic) double springBounciness;
@property(nonatomic) double springSpeed;
@property(nonatomic) double dynamicsMass;
@property(nonatomic) double dynamicsFriction;
@property(nonatomic) double dynamicsTension;
@property(copy, nonatomic) id velocity;
- (void)dealloc;
- (id)init;
- (void)_initState;

@end

