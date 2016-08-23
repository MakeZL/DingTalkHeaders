//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MAQuadTreeNode;

@interface MAQuadTree : NSObject
{
    MAQuadTreeNode *_rootNode;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)annotationsInBoundingBox:(CDStruct_90e2a262)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (void)updateAnnotation:(id)arg1 fromOldPosition:(CDStruct_c3b9c2ee)arg2;
- (void)removeAllObjects;
- (_Bool)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingBox;
- (id)init;
- (id)initWithBoundingBox:(CDStruct_90e2a262)arg1;

@end

