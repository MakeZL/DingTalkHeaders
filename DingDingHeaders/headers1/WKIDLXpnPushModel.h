//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString, WKIDLXpnActionModel;

@interface WKIDLXpnPushModel : Marshal
{
    NSString *_sound;
    WKIDLXpnActionModel *_action;
    NSNumber *_timeTolive;
    NSNumber *_incrbadge;
    NSDictionary *_params;
    NSString *_alertContent;
    NSNumber *_isXpnOff;
    NSNumber *_templateId;
}

@property(retain, nonatomic) NSNumber *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSNumber *isXpnOff; // @synthesize isXpnOff=_isXpnOff;
@property(copy, nonatomic) NSString *alertContent; // @synthesize alertContent=_alertContent;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSNumber *incrbadge; // @synthesize incrbadge=_incrbadge;
@property(retain, nonatomic) NSNumber *timeTolive; // @synthesize timeTolive=_timeTolive;
@property(retain, nonatomic) WKIDLXpnActionModel *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *sound; // @synthesize sound=_sound;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
