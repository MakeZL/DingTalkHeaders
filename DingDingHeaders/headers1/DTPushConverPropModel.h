//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTMessageModel, NSNumber, NSString;

@interface DTPushConverPropModel : Marshal
{
    NSString *_cid;
    NSString *_nProp;
    DTMessageModel *_message;
    NSNumber *_tag;
}

@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) DTMessageModel *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *nProp; // @synthesize nProp=_nProp;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

