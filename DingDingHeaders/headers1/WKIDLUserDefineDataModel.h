//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface WKIDLUserDefineDataModel : Marshal
{
    NSString *_cid;
    NSNumber *_entity_type;
    NSString *_entity_id;
}

@property(copy, nonatomic) NSString *entity_id; // @synthesize entity_id=_entity_id;
@property(retain, nonatomic) NSNumber *entity_type; // @synthesize entity_type=_entity_type;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

