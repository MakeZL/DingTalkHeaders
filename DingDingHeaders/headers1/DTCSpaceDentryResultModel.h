//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTCSpaceDentryResultModel : Marshal
{
    NSString *_loadMoreId;
    NSNumber *_total;
    NSArray *_items;
    NSArray *_failItems;
}

@property(copy, nonatomic) NSArray *failItems; // @synthesize failItems=_failItems;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(copy, nonatomic) NSString *loadMoreId; // @synthesize loadMoreId=_loadMoreId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

