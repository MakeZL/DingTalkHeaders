//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface WKIDLJoinGroupValidationModel : Marshal
{
    NSString *_conversationId;
    NSNumber *_inviterId;
    NSString *_joinDescription;
    NSNumber *_origin;
    NSString *_code;
    NSString *_applyerNickName;
}

@property(copy, nonatomic) NSString *applyerNickName; // @synthesize applyerNickName=_applyerNickName;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSNumber *origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *joinDescription; // @synthesize joinDescription=_joinDescription;
@property(retain, nonatomic) NSNumber *inviterId; // @synthesize inviterId=_inviterId;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
