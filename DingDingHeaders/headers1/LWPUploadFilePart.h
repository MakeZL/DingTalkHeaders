//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LWPUploadFilePart : NSObject
{
    _Bool _isUploaded;
    _Bool _isUploading;
    int _idx;
    int _length;
    unsigned long long _offset;
}

@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) _Bool isUploaded; // @synthesize isUploaded=_isUploaded;
@property(nonatomic) int length; // @synthesize length=_length;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) int idx; // @synthesize idx=_idx;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

