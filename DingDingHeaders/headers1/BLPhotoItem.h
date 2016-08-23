//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface BLPhotoItem : NSObject
{
    unsigned long long _size;
    NSString *_photoName;
    NSURL *_thumbnailURL;
    NSURL *_originURL;
    unsigned long long _indexAsSourceData;
    id _source;
    NSDictionary *_extraInfo;
}

@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) id source; // @synthesize source=_source;
@property(nonatomic) unsigned long long indexAsSourceData; // @synthesize indexAsSourceData=_indexAsSourceData;
@property(copy, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
@property(copy, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(copy, nonatomic) NSString *photoName; // @synthesize photoName=_photoName;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
- (void).cxx_destruct;

@end

