//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface LWPV3ServerItem : NSObject <NSCopying, NSCoding>
{
    NSString *_name;
    double _expire;
    NSArray *_ipList;
    NSArray *_fastIps;
    NSArray *_shortList;
}

+ (id)modelWithDic:(id)arg1 maxAge:(double)arg2;
@property(copy, nonatomic) NSArray *shortList; // @synthesize shortList=_shortList;
@property(copy, nonatomic) NSArray *fastIps; // @synthesize fastIps=_fastIps;
@property(copy, nonatomic) NSArray *ipList; // @synthesize ipList=_ipList;
@property(nonatomic) double expire; // @synthesize expire=_expire;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
