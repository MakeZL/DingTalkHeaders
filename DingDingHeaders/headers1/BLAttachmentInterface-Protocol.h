//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIImage;

@protocol BLAttachmentInterface <NSObject>
- (void)setSizeLabelText:(NSString *)arg1;
- (void)setNameLabelText:(NSString *)arg1;

@optional
@property(nonatomic) _Bool isEditable;
- (void)didSaveToSpaceFailure:(NSString *)arg1;
- (void)didSaveToSpaceSuccess;
- (void)didShowFullImage:(UIImage *)arg1;
- (void)didShowOtherTypeContent:(NSString *)arg1;
- (void)updateThumbnailWithURL:(NSURL *)arg1 andType:(long long)arg2;
- (void)setDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 andStatus:(long long)arg3;
- (void)setAttachmentType:(long long)arg1;
@end

