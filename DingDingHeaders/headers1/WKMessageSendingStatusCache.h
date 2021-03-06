//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WKMessageSendingStatusCache : NSObject
{
    NSMutableDictionary *_sendingMsgs;
    NSMutableDictionary *_msgAttachUploadSize;
}

@property(retain, nonatomic) NSMutableDictionary *msgAttachUploadSize; // @synthesize msgAttachUploadSize=_msgAttachUploadSize;
@property(retain, nonatomic) NSMutableDictionary *sendingMsgs; // @synthesize sendingMsgs=_sendingMsgs;
- (void).cxx_destruct;
- (void)removeMessageFromRecord:(id)arg1;
- (float)alreadyUploadSize:(float)arg1 forMessageId:(id)arg2;
- (void)recordMessage:(id)arg1 alreadyUploadSize:(float)arg2;
- (id)init;

@end

