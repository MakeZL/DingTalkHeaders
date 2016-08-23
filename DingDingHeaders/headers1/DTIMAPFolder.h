//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTIMAPAccount, NSString;

@interface DTIMAPFolder : NSObject
{
    BOOL _delimiter;
    unsigned int _uidValidity;
    unsigned int _uidNext;
    NSString *_path;
    long long _flags;
    DTIMAPAccount *_account;
    unsigned long long _messageCount;
}

@property(nonatomic) unsigned long long messageCount; // @synthesize messageCount=_messageCount;
@property(nonatomic) unsigned int uidNext; // @synthesize uidNext=_uidNext;
@property(nonatomic) unsigned int uidValidity; // @synthesize uidValidity=_uidValidity;
@property(retain, nonatomic) DTIMAPAccount *account; // @synthesize account=_account;
@property(nonatomic) long long flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) BOOL delimiter; // @synthesize delimiter=_delimiter;
- (void).cxx_destruct;
- (void)setupRequest:(id)arg1;
- (id)searchWithFolder:(id)arg1 withExpresion:(id)arg2;
- (id)searchWithKey:(id)arg1 withFolder:(id)arg2 withKind:(long long)arg3;
- (id)fetchMessagesRequestWithFolder:(id)arg1 andSet:(id)arg2 andRequestKind:(int)arg3 withFetchByUID:(_Bool)arg4;
- (id)appendMessageRequestwithMessageData:(id)arg1 withFlag:(int)arg2 withCustomFlag:(id)arg3;
- (id)moveMessagesUIDS:(id)arg1 toFolder:(id)arg2;
- (id)copyMessagesUIDS:(id)arg1 toFolder:(id)arg2;
- (id)expungeRequest;
- (id)storeFlagsOperationWithFolder:(id)arg1 uids:(id)arg2 kind:(int)arg3 flags:(int)arg4 customFlags:(id)arg5;
- (id)storeFlagsOperationWithFolder:(id)arg1 uids:(id)arg2 kind:(int)arg3 flags:(int)arg4;
- (id)fetchMessageByUID:(unsigned int)arg1 progressDelegate:(id)arg2;
- (id)fetchMessagesRequestByUIDWithSet:(id)arg1 andRequestKind:(int)arg2;
- (id)fetchMessagesRequestByNumberWithSet:(id)arg1 andRequestKind:(int)arg2;
- (id)fetchMessagesRequestByNumber;
- (id)fetchMessagesRequestByUID;
- (id)selectRequest;

@end
