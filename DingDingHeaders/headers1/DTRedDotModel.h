//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTRedDotModel : Marshal
{
    NSNumber *_type;
    NSString *_message;
    NSNumber *_version;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

