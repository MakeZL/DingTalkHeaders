//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString, WKIDLMessageModel, WKIDLReceiverMessageStatusModel, WKIDLSenderMessageStatusModel;

@interface WKIDLMessageChangeModel : Marshal
{
    _Bool _deleted;
    NSString *_conversationId;
    NSNumber *_messageId;
    NSDictionary *_extension;
    NSNumber *_privateTag;
    NSDictionary *_privateExtension;
    WKIDLReceiverMessageStatusModel *_receiverMessageStatus;
    WKIDLSenderMessageStatusModel *_senderMessageStatus;
    NSNumber *_recallStatus;
    NSNumber *_viewStatus;
    WKIDLMessageModel *_messageModel;
    NSString *_uuid;
}

@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) WKIDLMessageModel *messageModel; // @synthesize messageModel=_messageModel;
@property(retain, nonatomic) NSNumber *viewStatus; // @synthesize viewStatus=_viewStatus;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSNumber *recallStatus; // @synthesize recallStatus=_recallStatus;
@property(retain, nonatomic) WKIDLSenderMessageStatusModel *senderMessageStatus; // @synthesize senderMessageStatus=_senderMessageStatus;
@property(retain, nonatomic) WKIDLReceiverMessageStatusModel *receiverMessageStatus; // @synthesize receiverMessageStatus=_receiverMessageStatus;
@property(copy, nonatomic) NSDictionary *privateExtension; // @synthesize privateExtension=_privateExtension;
@property(retain, nonatomic) NSNumber *privateTag; // @synthesize privateTag=_privateTag;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

