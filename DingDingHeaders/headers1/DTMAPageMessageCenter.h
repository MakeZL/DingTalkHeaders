//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DTMAPageMessageCenter : NSObject
{
    NSMutableArray *_messages;
}

+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)invalidateMessagesWithRecevier:(id)arg1;
- (id)fetchMessageWithRecevier:(id)arg1;
- (void)postMessage:(id)arg1;
- (id)init;

@end

