//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface DTServerError : NSObject
{
    NSString *_error;
    NSString *_error_description;
    NSString *_error_uri;
    NSArray *_error_items;
    NSMutableDictionary *_error_itemDic;
}

+ (id)serverErrorWithDic:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *error_itemDic; // @synthesize error_itemDic=_error_itemDic;
@property(copy, nonatomic) NSArray *error_items; // @synthesize error_items=_error_items;
@property(copy, nonatomic) NSString *error_uri; // @synthesize error_uri=_error_uri;
@property(copy, nonatomic) NSString *error_description; // @synthesize error_description=_error_description;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;

@end

