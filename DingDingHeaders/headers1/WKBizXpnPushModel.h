//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WKBizXpnActionModel;

@interface WKBizXpnPushModel : NSObject
{
    NSString *_alertContent;
    NSString *_sound;
    NSDictionary *_params;
    long long _isXpnOff;
    long long _timeTolive;
    long long _incrbadge;
    long long _templateId;
    WKBizXpnActionModel *_action;
}

@property(retain, nonatomic) WKBizXpnActionModel *action; // @synthesize action=_action;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) long long incrbadge; // @synthesize incrbadge=_incrbadge;
@property(nonatomic) long long timeTolive; // @synthesize timeTolive=_timeTolive;
@property(nonatomic) long long isXpnOff; // @synthesize isXpnOff=_isXpnOff;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(copy, nonatomic) NSString *alertContent; // @synthesize alertContent=_alertContent;
- (void).cxx_destruct;

@end

