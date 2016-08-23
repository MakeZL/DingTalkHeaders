//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexSet, NSString;

@interface DTIMAPSearchExpression : NSObject
{
    long long _kind;
    NSString *_header;
    NSString *_value;
    unsigned long long _longNumber;
    NSIndexSet *_uids;
    NSIndexSet *_numbers;
    DTIMAPSearchExpression *_leftExpression;
    DTIMAPSearchExpression *_rightExpression;
}

+ (id)searchNot:(id)arg1;
+ (id)searchOr:(id)arg1 right:(id)arg2;
+ (id)searchAnd:(id)arg1 right:(id)arg2;
+ (id)searchGmailRaw:(id)arg1;
+ (id)searchGmailMessageID:(unsigned long long)arg1;
+ (id)searchGmailThreadID:(unsigned long long)arg1;
+ (id)searchSizeSmaller:(unsigned int)arg1;
+ (id)searchSizeLarger:(unsigned int)arg1;
+ (id)searchSinceReceivedDate:(long long *)arg1;
+ (id)searchOnReceivedDate:(long long *)arg1;
+ (id)searchBeforeReceivedDate:(long long *)arg1;
+ (id)searchSinceDate:(long long *)arg1;
+ (id)searchOnDate:(long long *)arg1;
+ (id)searchBeforeDate:(long long *)arg1;
+ (id)searchSpam;
+ (id)searchDeleted;
+ (id)searchUndraft;
+ (id)searchDraft;
+ (id)searchUnanswered;
+ (id)searchAnswered;
+ (id)searchUnflagged;
+ (id)searchFlagged;
+ (id)searchUnread;
+ (id)searchRead;
+ (id)searchNumbers:(id)arg1;
+ (id)searchUIDs:(id)arg1;
+ (id)searchHeader:(id)arg1 value:(id)arg2;
+ (id)searchBody:(id)arg1;
+ (id)searchContent:(id)arg1;
+ (id)searchSubject:(id)arg1;
+ (id)searchRecipient:(id)arg1;
+ (id)searchBcc:(id)arg1;
+ (id)searchCc:(id)arg1;
+ (id)searchTo:(id)arg1;
+ (id)searchFrom:(id)arg1;
+ (id)searchAll;
@property(retain, nonatomic) DTIMAPSearchExpression *rightExpression; // @synthesize rightExpression=_rightExpression;
@property(retain, nonatomic) DTIMAPSearchExpression *leftExpression; // @synthesize leftExpression=_leftExpression;
@property(retain, nonatomic) NSIndexSet *numbers; // @synthesize numbers=_numbers;
@property(retain, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
@property(nonatomic) unsigned long long longNumber; // @synthesize longNumber=_longNumber;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (void).cxx_destruct;

@end

