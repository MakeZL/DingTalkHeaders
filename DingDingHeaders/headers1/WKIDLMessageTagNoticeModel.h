//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString;

@interface WKIDLMessageTagNoticeModel : Marshal
{
    NSString *_conversationId;
    NSNumber *_messageId;
    NSNumber *_memberTag;
    NSDictionary *_memberExtension;
}

@property(copy, nonatomic) NSDictionary *memberExtension; // @synthesize memberExtension=_memberExtension;
@property(retain, nonatomic) NSNumber *memberTag; // @synthesize memberTag=_memberTag;
@property(retain, nonatomic) NSNumber *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

