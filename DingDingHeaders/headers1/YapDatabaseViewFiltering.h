//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface YapDatabaseViewFiltering : NSObject
{
    id filteringBlock;
    long long filteringBlockType;
}

+ (id)withBlock:(id)arg1 blockType:(long long)arg2;
+ (id)withRowBlock:(CDUnknownBlockType)arg1;
+ (id)withMetadataBlock:(CDUnknownBlockType)arg1;
+ (id)withObjectBlock:(CDUnknownBlockType)arg1;
+ (id)withKeyBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long filteringBlockType; // @synthesize filteringBlockType;
@property(readonly, nonatomic) id filteringBlock; // @synthesize filteringBlock;
- (void).cxx_destruct;

@end

