//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTOrgDeptNodeModel : Marshal
{
    NSNumber *_id_;
    NSString *_name;
    NSArray *_subDepts;
    NSArray *_members;
}

@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(copy, nonatomic) NSArray *subDepts; // @synthesize subDepts=_subDepts;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

