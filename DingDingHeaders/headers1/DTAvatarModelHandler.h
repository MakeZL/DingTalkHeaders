//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTAvatarView, NSDictionary;

@interface DTAvatarModelHandler : NSObject
{
    DTAvatarView *_avatarView;
    NSDictionary *_avatarModelsDic;
}

@property(copy, nonatomic) NSDictionary *avatarModelsDic; // @synthesize avatarModelsDic=_avatarModelsDic;
@property(nonatomic) __weak DTAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (id)nickNameFromUserName:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)updateAvatar:(id)arg1;
- (void)dealloc;
- (id)init;

@end

