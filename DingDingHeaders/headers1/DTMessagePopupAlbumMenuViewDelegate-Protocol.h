//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTMessagePopupAlbumMenuView, NSArray;

@protocol DTMessagePopupAlbumMenuViewDelegate <NSObject>

@optional
- (_Bool)albumMenuViewNeedAutoDismissWhenSendPhotos;
- (void)didSelectedPhotosInAlbumWithSelectedIndexPaths:(NSArray *)arg1;
- (void)didCancelOnPopupAlbumMenuView:(DTMessagePopupAlbumMenuView *)arg1;
- (void)didOpenedAlbumOnPopupAlbumMenuView:(DTMessagePopupAlbumMenuView *)arg1;
- (void)didOpenedCameraOnPopupAlbumMenuView:(DTMessagePopupAlbumMenuView *)arg1;
- (void)didSelectedPhotosInAlbumWithViewModels:(NSArray *)arg1 isOriginal:(_Bool)arg2;
@end

