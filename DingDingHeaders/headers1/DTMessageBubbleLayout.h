//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTMessageBubbleLayout : NSObject
{
}

+ (struct CGSize)audioSizeWithDuration:(long long)arg1;
+ (struct CGSize)noSharpBubbleSizeWithMessage:(id)arg1;
+ (double)maximumBubbleWidthWithMessage:(id)arg1 isMerge:(_Bool)arg2;
+ (struct CGSize)refreshViewSizeWithMessage:(id)arg1;
+ (double)bubbleMarginToAvatarMarginWithisMerge:(_Bool)arg1;
+ (double)bubbleLeftRightMarginWithMessage:(id)arg1;
+ (struct CGSize)avatarSizeWithMessage:(id)arg1;
+ (struct CGSize)statusSizeWithMessage:(id)arg1;
+ (_Bool)needShowDingWithMessage:(id)arg1;

@end
