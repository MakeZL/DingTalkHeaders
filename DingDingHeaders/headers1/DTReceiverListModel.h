//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSString;

@interface DTReceiverListModel : Marshal
{
    NSString *_batchId;
    NSArray *_receivers;
}

@property(copy, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;
@property(copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
