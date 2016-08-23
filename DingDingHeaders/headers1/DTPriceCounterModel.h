//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTPriceCounterModel : NSObject
{
    long long _type;
    long long _total;
    long long _remain;
    double _percentage;
    long long _timestamp;
    NSString *_title;
    NSString *_desc;
    long long _hasUsed;
    long long _version;
}

+ (id)modelWithQuotaModel:(id)arg1;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long hasUsed; // @synthesize hasUsed=_hasUsed;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double percentage; // @synthesize percentage=_percentage;
@property(nonatomic) long long remain; // @synthesize remain=_remain;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

