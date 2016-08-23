//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DTWhatsNewManager : NSObject
{
    _Bool _slideShowingAndWait;
    NSArray *_roleDataArray;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *roleDataArray; // @synthesize roleDataArray=_roleDataArray;
@property(nonatomic) _Bool slideShowingAndWait; // @synthesize slideShowingAndWait=_slideShowingAndWait;
- (void).cxx_destruct;
- (void)showSelectRoleView;
- (void)updateWelcomeSetting:(id)arg1;
- (id)welcomeSetting;
- (void)handleUrl:(id)arg1;
- (void)showWhatsNewIfNeeded;
- (void)showWhatsNewWhenSlideViewDingTalkDidEnter;
- (void)dealloc;
- (id)init;

@end
