//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTContact;

@interface DTDingContactCellData : NSObject
{
    _Bool _checked;
    DTContact *_contact;
}

@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) DTContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)sortByDisplayName;
- (id)sortByContactNickPinyin;

@end

