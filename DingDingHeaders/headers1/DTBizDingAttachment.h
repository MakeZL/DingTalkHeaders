//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizDingAttachmentExtra, NSDictionary;

@interface DTBizDingAttachment : NSObject
{
    long long _attachmentType;
    DTBizDingAttachmentExtra *_attachmentExtra;
    NSDictionary *_atOpenIds;
}

@property(copy, nonatomic) NSDictionary *atOpenIds; // @synthesize atOpenIds=_atOpenIds;
@property(retain, nonatomic) DTBizDingAttachmentExtra *attachmentExtra; // @synthesize attachmentExtra=_attachmentExtra;
@property(nonatomic) long long attachmentType; // @synthesize attachmentType=_attachmentType;
- (void).cxx_destruct;

@end

