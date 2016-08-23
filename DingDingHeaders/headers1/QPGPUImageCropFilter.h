//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPGPUImageFilter.h"

@interface QPGPUImageCropFilter : QPGPUImageFilter
{
    float cropTextureCoordinates[8];
    struct CGSize originallySuppliedInputSize;
    struct CGRect _cropRegion;
}

@property(nonatomic) struct CGRect cropRegion; // @synthesize cropRegion=_cropRegion;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)calculateCropTextureCoordinates;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;
- (id)initWithCropRegion:(struct CGRect)arg1;

@end

