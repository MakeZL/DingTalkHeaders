//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface LWPIncomingTransactionService : NSObject
{
    NSMutableDictionary *_transactionPool;
}

- (void).cxx_destruct;
- (void)clear;
- (void)destory:(id)arg1;
- (void)addWithRequest:(id)arg1;
- (id)transactionWithMID:(id)arg1;
- (id)init;

@end

