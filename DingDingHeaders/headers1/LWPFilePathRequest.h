//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface LWPFilePathRequest : Marshal
{
    _Bool _isOssRule;
    NSString *_filePath;
    NSNumber *_start;
    NSNumber *_end;
}

@property(nonatomic) _Bool isOssRule; // @synthesize isOssRule=_isOssRule;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

