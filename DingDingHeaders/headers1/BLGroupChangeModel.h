//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class BLGroupAPIModel, NSNumber;

@interface BLGroupChangeModel : BLBaseAPIModel
{
    NSNumber *_action;
    BLGroupAPIModel *_targetGroup;
}

@property(retain, nonatomic) BLGroupAPIModel *targetGroup; // @synthesize targetGroup=_targetGroup;
@property(retain, nonatomic) NSNumber *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

