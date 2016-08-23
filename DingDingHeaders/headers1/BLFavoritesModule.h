//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseModule.h"

@interface BLFavoritesModule : BLBaseModule
{
}

- (id)searchFavoritesWithString:(id)arg1 types:(id)arg2 spaceId:(id)arg3 offset:(unsigned long long)arg4 pageSize:(unsigned long long)arg5 excludeFolder:(_Bool)arg6 account:(id)arg7 localResultsBlock:(CDUnknownBlockType)arg8 resultsBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;
- (void)spaceForFavorites:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)spaceForFavorites:(id)arg1;
- (void)deleteFavorite:(id)arg1 forAccount:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)updateFavorite:(id)arg1 forAccount:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)saveFavorites:(id)arg1 forAccount:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)loadMoreFavoritesForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)refreshFavoritesForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)refreshFavoritesInSpace:(id)arg1 loadMore:(_Bool)arg2 ForAccount:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)getSyncer;

@end

