//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface YYClassIvarInfo : NSObject
{
    struct objc_ivar *_ivar;
    NSString *_name;
    long long _offset;
    NSString *_typeEncoding;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct objc_ivar *ivar; // @synthesize ivar=_ivar;
- (void).cxx_destruct;
- (id)initWithIvar:(struct objc_ivar *)arg1;

@end

