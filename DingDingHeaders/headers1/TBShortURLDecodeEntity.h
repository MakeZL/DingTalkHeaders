//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRegularExpression, NSString;

@interface TBShortURLDecodeEntity : NSObject
{
    NSString *shortUri;
    NSString *type;
    NSString *idName;
    NSString *stringformat;
    NSRegularExpression *matchPattern;
}

@property(readonly) NSRegularExpression *matchPattern; // @synthesize matchPattern;
@property(retain) NSString *stringformat; // @synthesize stringformat;
@property(retain) NSString *idName; // @synthesize idName;
@property(retain) NSString *type; // @synthesize type;
@property(retain) NSString *shortUri; // @synthesize shortUri;
- (void).cxx_destruct;
- (_Bool)isPatternMatch:(id)arg1;
- (id)initWithParams:(id)arg1 type:(id)arg2 idName:(id)arg3 sfmt:(id)arg4;

@end

