//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRegularExpression, NSString;

@interface TBShortURLEncodeEntity : NSObject
{
    NSString *domain;
    NSString *uri;
    NSString *type;
    NSString *idName;
    NSString *stringformat;
    NSString *appendParam;
    NSArray *paramKeys;
    NSRegularExpression *matchPattern;
    NSString *_url;
}

@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly) NSRegularExpression *matchPattern; // @synthesize matchPattern;
@property(retain) NSArray *paramKeys; // @synthesize paramKeys;
@property(retain) NSString *appendParam; // @synthesize appendParam;
@property(retain) NSString *stringformat; // @synthesize stringformat;
@property(retain) NSString *idName; // @synthesize idName;
@property(retain) NSString *type; // @synthesize type;
@property(retain) NSString *uri; // @synthesize uri;
@property(retain) NSString *domain; // @synthesize domain;
- (void).cxx_destruct;
- (_Bool)isUrlPathMatch:(id)arg1;
- (id)getUrl;
- (_Bool)isPatternMatch:(id)arg1;
- (id)initWithParams:(id)arg1 uri:(id)arg2 type:(id)arg3 idName:(id)arg4 appParam:(id)arg5 sfmt:(id)arg6;

@end

