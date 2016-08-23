//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAbstractMessage.h"

@class DTAbstractPart, DTIMAPFolder, NSMutableArray;

@interface DTIMAPMessage : DTAbstractMessage
{
    int _flags;
    int _originalFlags;
    unsigned long long _sequenceNumber;
    DTIMAPFolder *_folder;
    NSMutableArray *_customFlags;
    unsigned long long _uid;
    unsigned long long _size;
    unsigned long long _modSeqValue;
    DTAbstractPart *_mainPart;
}

@property(retain, nonatomic) DTAbstractPart *mainPart; // @synthesize mainPart=_mainPart;
@property(nonatomic) unsigned long long modSeqValue; // @synthesize modSeqValue=_modSeqValue;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSMutableArray *customFlags; // @synthesize customFlags=_customFlags;
@property(nonatomic) int originalFlags; // @synthesize originalFlags=_originalFlags;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) DTIMAPFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void).cxx_destruct;
- (void)_setupRequest:(id)arg1;
- (id)fetchAttachmentRequestWithPartID:(id)arg1 encoding:(long long)arg2;

@end
