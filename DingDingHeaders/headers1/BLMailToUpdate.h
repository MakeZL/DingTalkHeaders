//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLItemToUpdate.h"

@class BLMail, NSSet;

@interface BLMailToUpdate : BLItemToUpdate
{
    BLMail *_targetMail;
    NSSet *_tagsToRemove;
}

@property(retain, nonatomic) NSSet *tagsToRemove; // @synthesize tagsToRemove=_tagsToRemove;
@property(retain, nonatomic) BLMail *targetMail; // @synthesize targetMail=_targetMail;
- (void).cxx_destruct;

@end
