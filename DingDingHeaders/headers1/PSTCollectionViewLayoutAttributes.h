//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSIndexPath, NSString;

@interface PSTCollectionViewLayoutAttributes : NSObject <NSCopying>
{
    struct {
        unsigned int isCellKind:1;
        unsigned int isDecorationView:1;
        unsigned int isHidden:1;
    } _layoutFlags;
    char filler[20];
    _Bool _hidden;
    double _alpha;
    long long _zIndex;
    NSIndexPath *_indexPath;
    unsigned long long _elementCategory;
    NSString *_elementKind;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _frame;
    struct CATransform3D _transform3D;
}

+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
@property(copy, nonatomic) NSString *elementKind; // @synthesize elementKind=_elementKind;
@property(nonatomic) unsigned long long elementCategory; // @synthesize elementCategory=_elementCategory;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCell;
- (_Bool)isSupplementaryView;
- (_Bool)isDecorationView;
- (id)representedElementKind;
- (unsigned long long)representedElementCategory;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

