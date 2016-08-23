//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTAssetCollection, DTAssetThumbnailStacks, UIColor, UIFont, UILabel, UIView;

@interface ELCAlbumPickerCellTableViewCell : UITableViewCell
{
    _Bool _didSetupConstraints;
    DTAssetThumbnailStacks *_thumbnailStacks;
    UIColor *_titleTextColor;
    UIColor *_selectedTitleTextColor;
    UIColor *_countTextColor;
    UIColor *_selectedCountTextColor;
    UIColor *_accessoryColor;
    UIColor *_selectedAccessoryColor;
    UIView *_labelsView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    DTAssetCollection *_collection;
    unsigned long long _count;
    struct CGSize _thumbnailSize;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) DTAssetCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *labelsView; // @synthesize labelsView=_labelsView;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) UIColor *selectedAccessoryColor; // @synthesize selectedAccessoryColor=_selectedAccessoryColor;
@property(retain, nonatomic) UIColor *accessoryColor; // @synthesize accessoryColor=_accessoryColor;
@property(retain, nonatomic) UIColor *selectedCountTextColor; // @synthesize selectedCountTextColor=_selectedCountTextColor;
@property(retain, nonatomic) UIColor *countTextColor; // @synthesize countTextColor=_countTextColor;
@property(retain, nonatomic) UIColor *selectedTitleTextColor; // @synthesize selectedTitleTextColor=_selectedTitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) DTAssetThumbnailStacks *thumbnailStacks; // @synthesize thumbnailStacks=_thumbnailStacks;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)bind:(id)arg1 count:(unsigned long long)arg2;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak UIColor *selectedBackgroundColor;
@property(nonatomic) __weak UIFont *countFont;
@property(nonatomic) __weak UIFont *titleFont;
- (id)placeHolderImageNameOfCollectionSubtype:(long long)arg1;
- (void)setupPlaceholderImage;
- (void)setupViews;
- (id)initWithThumbnailSize:(struct CGSize)arg1 reuseIdentifier:(id)arg2;

@end

