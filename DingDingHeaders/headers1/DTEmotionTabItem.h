//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface DTEmotionTabItem : NSObject
{
    _Bool _isSelect;
    _Bool _showRightLine;
    _Bool _showLeftLine;
    UIImage *_image;
    UIImage *_highlightedImage;
    long long _packageId;
    double _width;
    double _height;
    CDUnknownBlockType _itemAction;
}

+ (id)buildTabItemWithImage:(id)arg1 highlightedImage:(id)arg2 width:(double)arg3 height:(double)arg4 isSelect:(_Bool)arg5 packageId:(long long)arg6;
+ (id)buildTabItemWithImage:(id)arg1 width:(double)arg2 height:(double)arg3 isSelect:(_Bool)arg4 packageId:(long long)arg5;
@property(copy, nonatomic) CDUnknownBlockType itemAction; // @synthesize itemAction=_itemAction;
@property(nonatomic) _Bool showLeftLine; // @synthesize showLeftLine=_showLeftLine;
@property(nonatomic) _Bool showRightLine; // @synthesize showRightLine=_showRightLine;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

