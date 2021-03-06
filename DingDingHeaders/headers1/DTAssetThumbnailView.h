//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAssetThumbnailOverlay, UIImage, UIImageView;

@interface DTAssetThumbnailView : UIView
{
    _Bool _showsDuration;
    _Bool _didSetupConstraints;
    UIImage *_backgroundImage;
    DTAssetThumbnailOverlay *_overlay;
    UIImageView *_imageView;
    UIImageView *_backgroundView;
}

@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) DTAssetThumbnailOverlay *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool showsDuration; // @synthesize showsDuration=_showsDuration;
- (void).cxx_destruct;
- (void)setupOverlayForAssetCollection:(id)arg1;
- (void)bind:(id)arg1 assetCollection:(id)arg2;
- (void)updateConstraints;
- (void)setBounds:(struct CGRect)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

