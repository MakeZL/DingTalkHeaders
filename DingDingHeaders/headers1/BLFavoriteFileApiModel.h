//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContentApiModel.h"

@class NSString;

@interface BLFavoriteFileApiModel : BLFavoriteContentApiModel
{
    NSString *_file_url;
    NSString *_extension;
    long long _fileSize;
}

@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *file_url; // @synthesize file_url=_file_url;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

