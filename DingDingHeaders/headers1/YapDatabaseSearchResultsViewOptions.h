//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseViewOptions.h"

#import "NSCopying-Protocol.h"

@class YapDatabaseFullTextSearchSnippetOptions, YapWhitelistBlacklist;

@interface YapDatabaseSearchResultsViewOptions : YapDatabaseViewOptions <NSCopying>
{
    YapWhitelistBlacklist *allowedGroups;
    YapDatabaseFullTextSearchSnippetOptions *snippetOptions;
}

@property(copy, nonatomic) YapDatabaseFullTextSearchSnippetOptions *snippetOptions; // @synthesize snippetOptions;
@property(retain, nonatomic) YapWhitelistBlacklist *allowedGroups; // @synthesize allowedGroups;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

