//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString;

@interface DTSearchRecord : Marshal
{
    NSString *_kind;
    NSString *_title;
    NSString *_desc;
    NSString *_senderName;
    NSNumber *_sendTime;
    NSNumber *_id_;
    NSString *_subId;
    NSDictionary *_extension;
}

@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *subId; // @synthesize subId=_subId;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
@property(retain, nonatomic) NSNumber *sendTime; // @synthesize sendTime=_sendTime;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

