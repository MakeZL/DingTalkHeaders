//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface WKIDLAttachmentModel : Marshal
{
    _Bool _isPreload;
    NSNumber *_type;
    NSString *_url;
    NSNumber *_size;
    NSData *_data;
    NSDictionary *_extension;
}

@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

