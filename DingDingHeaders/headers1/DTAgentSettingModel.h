//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTAgentSettingModel : Marshal
{
    _Bool _ssl;
    long long _type;
    NSString *_host;
    NSNumber *_port;
}

@property(nonatomic) _Bool ssl; // @synthesize ssl=_ssl;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

