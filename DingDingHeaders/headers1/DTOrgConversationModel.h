//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSString;

@interface DTOrgConversationModel : Marshal
{
    NSString *_cid;
    NSString *_cname;
    NSDictionary *_extension;
}

@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
