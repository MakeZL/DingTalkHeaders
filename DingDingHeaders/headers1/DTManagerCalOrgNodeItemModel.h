//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTOrgNodeItemModel, NSString;

@interface DTManagerCalOrgNodeItemModel : Marshal
{
    DTOrgNodeItemModel *_orgNodeItem;
    NSString *_callBackUrl;
}

@property(copy, nonatomic) NSString *callBackUrl; // @synthesize callBackUrl=_callBackUrl;
@property(retain, nonatomic) DTOrgNodeItemModel *orgNodeItem; // @synthesize orgNodeItem=_orgNodeItem;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

