//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTWaterMarkItem, UIImage, UIImageView;

@interface DTWaterMarkView : UIView
{
    long long _type;
    double _rotationRadian;
    double _iconAndTitleSpacing;
    double _titleAndContentSpacing;
    double _lineSpacing;
    double _columnSpacing;
    DTWaterMarkItem *_item;
    UIView *_rotationView;
    UIView *_contentView;
    UIImageView *_contentImageView;
    UIImage *_waterMarkImage;
    double _firstX;
    double _lastX;
    double _startY;
    double _cellViewWidth;
    double _cellViewHeight;
    double _rotationViewW;
    struct CGRect _iconRect;
    struct CGRect _titleRect;
    struct CGRect _contentRect;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double rotationViewW; // @synthesize rotationViewW=_rotationViewW;
@property(nonatomic) double cellViewHeight; // @synthesize cellViewHeight=_cellViewHeight;
@property(nonatomic) double cellViewWidth; // @synthesize cellViewWidth=_cellViewWidth;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(nonatomic) struct CGRect titleRect; // @synthesize titleRect=_titleRect;
@property(nonatomic) struct CGRect iconRect; // @synthesize iconRect=_iconRect;
@property(nonatomic) double startY; // @synthesize startY=_startY;
@property(nonatomic) double lastX; // @synthesize lastX=_lastX;
@property(nonatomic) double firstX; // @synthesize firstX=_firstX;
@property(retain, nonatomic) UIImage *waterMarkImage; // @synthesize waterMarkImage=_waterMarkImage;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *rotationView; // @synthesize rotationView=_rotationView;
@property(retain, nonatomic) DTWaterMarkItem *item; // @synthesize item=_item;
@property(nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double titleAndContentSpacing; // @synthesize titleAndContentSpacing=_titleAndContentSpacing;
@property(nonatomic) double iconAndTitleSpacing; // @synthesize iconAndTitleSpacing=_iconAndTitleSpacing;
@property(nonatomic) double rotationRadian; // @synthesize rotationRadian=_rotationRadian;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)reseWithtFrame:(struct CGRect)arg1;
- (id)waterMarkImageView;
- (id)waterMarkCellView;
- (void)addRightCellView;
- (void)addLeftCellView;
- (void)addWaterMarkCellView;
- (void)calculateRect;
- (void)config;
- (void)defaultConfig;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 iconName:(id)arg2 title:(id)arg3 content:(id)arg4;

@end

