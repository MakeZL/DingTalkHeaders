//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTSearchEngineResultItem : NSObject
{
    _Bool _hasMore;
    NSString *_databaseName;
    NSString *_tableName;
    long long _foundCount;
    long long _returnCount;
    NSArray *_pkValues;
    NSArray *_objects;
}

@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) NSArray *pkValues; // @synthesize pkValues=_pkValues;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long returnCount; // @synthesize returnCount=_returnCount;
@property(nonatomic) long long foundCount; // @synthesize foundCount=_foundCount;
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(copy, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
- (void).cxx_destruct;

@end

