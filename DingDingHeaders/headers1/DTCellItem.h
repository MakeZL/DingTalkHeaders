//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class NSString, UIColor, UIFont;

@interface DTCellItem : DTBaseCellItem
{
    _Bool _isOnlineImage2;
    _Bool _showBadgeView;
    _Bool _badgeViewOnTopRight;
    _Bool _showIndicator;
    _Bool _isSelected;
    _Bool _isSwitcherOn;
    _Bool _shouldTextFieldBecomeFirstRespond;
    _Bool _securityInput;
    _Bool _disable;
    unsigned long long _style;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    double _titleAvatarMargin;
    NSString *_detail;
    UIColor *_detailColor;
    UIFont *_detailFont;
    long long _numberOfDetailLine;
    NSString *_comment;
    UIColor *_commentColor;
    UIFont *_commentFont;
    NSString *_operationIcon;
    NSString *_icon;
    NSString *_image1;
    NSString *_image2;
    unsigned long long _badgeStyle;
    NSString *_badgeWord;
    double _MaxBadgeViewWidth;
    unsigned long long _selectedType;
    long long _textFieldLimit;
    NSString *_textFieldText;
    NSString *_textFieldHint;
    long long _returnKeyType;
    NSString *_textFieldHelpBtnNormalImage;
    NSString *_textFieldHelpBtnHighlightImage;
    double _maxTitleWidth;
    double _maxCommentWidth;
    double _maxDetailWidth;
    double _cellWidth;
    double _viewsHorizontalMargin;
    double _viewsVerticalMargin;
    double _cellLeftMargin;
    double _cellrightMargin;
    double _cellSeparatorMargin;
    long long _cellSelctionStyle;
    CDUnknownBlockType _textFieldDidBeginBlock;
    CDUnknownBlockType _textFieldDidEndBlock;
    CDUnknownBlockType _textFieldDidChangeBlock;
    CDUnknownBlockType _textFieldWillReturnBlock;
    CDUnknownBlockType _textFieldHelpBtnBlock;
    CDUnknownBlockType _switcherValueDidChangeBlock;
}

+ (id)itemWithStyle:(unsigned long long)arg1 cellDidSelectBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType switcherValueDidChangeBlock; // @synthesize switcherValueDidChangeBlock=_switcherValueDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType textFieldHelpBtnBlock; // @synthesize textFieldHelpBtnBlock=_textFieldHelpBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType textFieldWillReturnBlock; // @synthesize textFieldWillReturnBlock=_textFieldWillReturnBlock;
@property(copy, nonatomic) CDUnknownBlockType textFieldDidChangeBlock; // @synthesize textFieldDidChangeBlock=_textFieldDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType textFieldDidEndBlock; // @synthesize textFieldDidEndBlock=_textFieldDidEndBlock;
@property(copy, nonatomic) CDUnknownBlockType textFieldDidBeginBlock; // @synthesize textFieldDidBeginBlock=_textFieldDidBeginBlock;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(nonatomic) long long cellSelctionStyle; // @synthesize cellSelctionStyle=_cellSelctionStyle;
@property(nonatomic) double cellSeparatorMargin; // @synthesize cellSeparatorMargin=_cellSeparatorMargin;
@property(nonatomic) double cellrightMargin; // @synthesize cellrightMargin=_cellrightMargin;
@property(nonatomic) double cellLeftMargin; // @synthesize cellLeftMargin=_cellLeftMargin;
@property(nonatomic) double viewsVerticalMargin; // @synthesize viewsVerticalMargin=_viewsVerticalMargin;
@property(nonatomic) double viewsHorizontalMargin; // @synthesize viewsHorizontalMargin=_viewsHorizontalMargin;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double maxDetailWidth; // @synthesize maxDetailWidth=_maxDetailWidth;
@property(nonatomic) double maxCommentWidth; // @synthesize maxCommentWidth=_maxCommentWidth;
@property(nonatomic) double maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(copy, nonatomic) NSString *textFieldHelpBtnHighlightImage; // @synthesize textFieldHelpBtnHighlightImage=_textFieldHelpBtnHighlightImage;
@property(copy, nonatomic) NSString *textFieldHelpBtnNormalImage; // @synthesize textFieldHelpBtnNormalImage=_textFieldHelpBtnNormalImage;
@property(nonatomic) _Bool securityInput; // @synthesize securityInput=_securityInput;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(copy, nonatomic) NSString *textFieldHint; // @synthesize textFieldHint=_textFieldHint;
@property(copy, nonatomic) NSString *textFieldText; // @synthesize textFieldText=_textFieldText;
@property(nonatomic) long long textFieldLimit; // @synthesize textFieldLimit=_textFieldLimit;
@property(nonatomic) _Bool shouldTextFieldBecomeFirstRespond; // @synthesize shouldTextFieldBecomeFirstRespond=_shouldTextFieldBecomeFirstRespond;
@property(nonatomic) _Bool isSwitcherOn; // @synthesize isSwitcherOn=_isSwitcherOn;
@property(nonatomic) unsigned long long selectedType; // @synthesize selectedType=_selectedType;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator=_showIndicator;
@property(nonatomic) double MaxBadgeViewWidth; // @synthesize MaxBadgeViewWidth=_MaxBadgeViewWidth;
@property(copy, nonatomic) NSString *badgeWord; // @synthesize badgeWord=_badgeWord;
@property(nonatomic) unsigned long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(nonatomic) _Bool badgeViewOnTopRight; // @synthesize badgeViewOnTopRight=_badgeViewOnTopRight;
@property(nonatomic) _Bool showBadgeView; // @synthesize showBadgeView=_showBadgeView;
@property(nonatomic) _Bool isOnlineImage2; // @synthesize isOnlineImage2=_isOnlineImage2;
@property(copy, nonatomic) NSString *image2; // @synthesize image2=_image2;
@property(copy, nonatomic) NSString *image1; // @synthesize image1=_image1;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *operationIcon; // @synthesize operationIcon=_operationIcon;
@property(retain, nonatomic) UIFont *commentFont; // @synthesize commentFont=_commentFont;
@property(retain, nonatomic) UIColor *commentColor; // @synthesize commentColor=_commentColor;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) long long numberOfDetailLine; // @synthesize numberOfDetailLine=_numberOfDetailLine;
@property(retain, nonatomic) UIFont *detailFont; // @synthesize detailFont=_detailFont;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) double titleAvatarMargin; // @synthesize titleAvatarMargin=_titleAvatarMargin;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)cellForItem;
- (id)reuseIdentifier;
- (id)init;

@end
