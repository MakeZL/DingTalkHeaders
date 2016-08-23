//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKAttachment.h"

@class NSData, NSDictionary, NSString;

@interface WKAttachmentImage : WKAttachment
{
    int _picType;
    NSString *_mediaId;
    long long _imageSize;
    long long _orientation;
    NSDictionary *_extension;
    NSString *_filename;
    NSString *_imageUrl;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int picType; // @synthesize picType=_picType;
@property(nonatomic) long long imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (struct CGSize)imagePixelSize;
- (id)description;
- (id)init;

@end

