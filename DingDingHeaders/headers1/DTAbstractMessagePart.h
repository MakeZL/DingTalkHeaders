//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAbstractPart.h"

@class DTMessageHeader;

@interface DTAbstractMessagePart : DTAbstractPart
{
    DTMessageHeader *_header;
    DTAbstractPart *_mainPart;
}

@property(retain, nonatomic) DTAbstractPart *mainPart; // @synthesize mainPart=_mainPart;
@property(retain, nonatomic) DTMessageHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;

@end

