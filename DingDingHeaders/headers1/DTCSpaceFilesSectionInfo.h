//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface DTCSpaceFilesSectionInfo : NSObject <NSCopying>
{
    NSString *_name;
    long long _offset;
    long long _length;
}

@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

