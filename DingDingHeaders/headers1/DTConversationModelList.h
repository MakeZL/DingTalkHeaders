//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTConversationModelList : Marshal
{
    NSArray *_values;
    NSNumber *_nextCursor;
}

@property(retain, nonatomic) NSNumber *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
