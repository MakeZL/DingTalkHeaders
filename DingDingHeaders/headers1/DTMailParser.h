//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAbstractMessage.h"

@class DTAbstractPart, NSData;

@interface DTMailParser : DTAbstractMessage
{
    DTAbstractPart *_mainPart;
    NSData *_mailData;
}

@property(copy, nonatomic) NSData *mailData; // @synthesize mailData=_mailData;
@property(retain, nonatomic) DTAbstractPart *mainPart; // @synthesize mainPart=_mainPart;
- (void).cxx_destruct;
- (void)startParser;
- (id)initWithEMLData:(id)arg1;

@end

