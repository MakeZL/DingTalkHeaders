//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LWPVia : NSObject
{
    unsigned short _port;
    unsigned long long _type;
    NSString *_addr;
    NSString *_params;
}

+ (id)viaWithString:(id)arg1;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isIPVia;
- (id)dumps;
- (_Bool)loads:(id)arg1;
- (id)init;

@end

