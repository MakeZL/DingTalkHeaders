//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class BLFolderV2APIModel;

@interface BLFolderV2ChangeModel : BLBaseAPIModel
{
    long long _action;
    BLFolderV2APIModel *_targetFolder;
}

@property(retain, nonatomic) BLFolderV2APIModel *targetFolder; // @synthesize targetFolder=_targetFolder;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

