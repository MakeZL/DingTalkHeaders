//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface BLMailStateCache : NSObject
{
    CDUnknownBlockType _mailStateChangeBlock;
    CDUnknownBlockType _mailSendProgressCallback;
    NSMutableDictionary *_stateDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *stateDic; // @synthesize stateDic=_stateDic;
@property(copy, nonatomic) CDUnknownBlockType mailSendProgressCallback; // @synthesize mailSendProgressCallback=_mailSendProgressCallback;
@property(copy, nonatomic) CDUnknownBlockType mailStateChangeBlock; // @synthesize mailStateChangeBlock=_mailStateChangeBlock;
- (void).cxx_destruct;
- (void)clearAll;
- (void)clearStateForMail:(id)arg1;
- (id)stateForMail:(id)arg1 createIfEmpty:(_Bool)arg2;
- (id)stateForMail:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalCount;
@property(readonly, nonatomic) unsigned long long finishedCount;
- (id)init;

@end

