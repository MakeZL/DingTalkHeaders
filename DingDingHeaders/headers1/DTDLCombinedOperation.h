//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTDLOperation-Protocol.h"

@class NSOperation, NSString;

@interface DTDLCombinedOperation : NSObject <DTDLOperation>
{
    _Bool _cancelled;
    CDUnknownBlockType _cancelBlock;
    NSOperation *_cacheOperation;
}

@property(retain, nonatomic) NSOperation *cacheOperation; // @synthesize cacheOperation=_cacheOperation;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

