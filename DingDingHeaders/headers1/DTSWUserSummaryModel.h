//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTSWUserSummaryModel : Marshal
{
    NSNumber *_orgId;
    NSNumber *_uid;
    NSString *_staffId;
    NSString *_title;
    NSString *_desc;
    NSString *_mediaId;
    NSString *_actURL;
}

@property(copy, nonatomic) NSString *actURL; // @synthesize actURL=_actURL;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

