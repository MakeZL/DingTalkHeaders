//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface YapDatabaseRelationshipEdge : NSObject <NSCoding, NSCopying>
{
    NSString *name;
    NSString *sourceKey;
    NSString *sourceCollection;
    NSString *destinationKey;
    NSString *destinationCollection;
    NSString *destinationFilePath;
    unsigned short nodeDeleteRules;
    _Bool isManualEdge;
    long long edgeRowid;
    long long sourceRowid;
    long long destinationRowid;
    int edgeAction;
    int flags;
}

+ (id)edgeWithName:(id)arg1 sourceKey:(id)arg2 collection:(id)arg3 destinationFilePath:(id)arg4 nodeDeleteRules:(unsigned short)arg5;
+ (id)edgeWithName:(id)arg1 sourceKey:(id)arg2 collection:(id)arg3 destinationKey:(id)arg4 collection:(id)arg5 nodeDeleteRules:(unsigned short)arg6;
+ (id)edgeWithName:(id)arg1 destinationFilePath:(id)arg2 nodeDeleteRules:(unsigned short)arg3;
+ (id)edgeWithName:(id)arg1 destinationKey:(id)arg2 collection:(id)arg3 nodeDeleteRules:(unsigned short)arg4;
@property(readonly, nonatomic) _Bool isManualEdge; // @synthesize isManualEdge;
@property(readonly, nonatomic) unsigned short nodeDeleteRules; // @synthesize nodeDeleteRules;
@property(readonly, copy, nonatomic) NSString *destinationFilePath; // @synthesize destinationFilePath;
@property(readonly, copy, nonatomic) NSString *destinationKey; // @synthesize destinationKey;
@property(readonly, copy, nonatomic) NSString *destinationCollection; // @synthesize destinationCollection;
@property(readonly, copy, nonatomic) NSString *sourceKey; // @synthesize sourceKey;
@property(readonly, copy, nonatomic) NSString *sourceCollection; // @synthesize sourceCollection;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)matchesManualEdge:(id)arg1;
- (id)copyWithSourceKey:(id)arg1 collection:(id)arg2 rowid:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRowid:(long long)arg1 name:(id)arg2 src:(long long)arg3 dst:(long long)arg4 dstFilePath:(id)arg5 rules:(int)arg6 manual:(_Bool)arg7;
- (id)initWithName:(id)arg1 sourceKey:(id)arg2 collection:(id)arg3 destinationFilePath:(id)arg4 nodeDeleteRules:(unsigned short)arg5;
- (id)initWithName:(id)arg1 sourceKey:(id)arg2 collection:(id)arg3 destinationKey:(id)arg4 collection:(id)arg5 nodeDeleteRules:(unsigned short)arg6;
- (id)initWithName:(id)arg1 destinationFilePath:(id)arg2 nodeDeleteRules:(unsigned short)arg3;
- (id)initWithName:(id)arg1 destinationKey:(id)arg2 collection:(id)arg3 nodeDeleteRules:(unsigned short)arg4;

@end

