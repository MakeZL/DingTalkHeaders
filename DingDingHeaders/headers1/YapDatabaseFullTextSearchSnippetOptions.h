//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface YapDatabaseFullTextSearchSnippetOptions : NSObject <NSCopying>
{
    int numberOfTokens;
    NSString *startMatchText;
    NSString *endMatchText;
    NSString *ellipsesText;
    NSString *columnName;
}

+ (int)defaultNumberOfTokens;
+ (id)defaultEllipsesText;
+ (id)defaultEndMatchText;
+ (id)defaultStartMatchText;
@property(nonatomic) int numberOfTokens; // @synthesize numberOfTokens;
@property(copy, nonatomic) NSString *columnName; // @synthesize columnName;
@property(copy, nonatomic) NSString *ellipsesText; // @synthesize ellipsesText;
@property(copy, nonatomic) NSString *endMatchText; // @synthesize endMatchText;
@property(copy, nonatomic) NSString *startMatchText; // @synthesize startMatchText;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForCopy;
- (id)init;

@end

