//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BLAbstractSyncResult : NSObject
{
    _Bool _more;
    _Bool _forceFullSync;
    _Bool _success;
    NSString *_syncKey;
    NSString *_loadMoreId;
    NSArray *_items;
    NSString *_errorMessage;
    long long _errorCode;
    long long _total;
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool forceFullSync; // @synthesize forceFullSync=_forceFullSync;
@property(nonatomic) _Bool more; // @synthesize more=_more;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *loadMoreId; // @synthesize loadMoreId=_loadMoreId;
@property(copy, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

