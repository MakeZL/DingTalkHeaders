//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizCSpaceDentry, NSAttributedString, NSString, UIImage;

@interface DTDentrySearchItemViewModel : NSObject
{
    NSString *_fileName;
    NSString *_filePath;
    UIImage *_defaultIcon;
    NSString *_thumbnailUrl;
    NSString *_keyword;
    DTBizCSpaceDentry *_dentryItem;
    NSAttributedString *_attrFilePath;
    NSAttributedString *_attrFileName;
}

@property(retain, nonatomic) NSAttributedString *attrFileName; // @synthesize attrFileName=_attrFileName;
@property(retain, nonatomic) NSAttributedString *attrFilePath; // @synthesize attrFilePath=_attrFilePath;
@property(retain, nonatomic) DTBizCSpaceDentry *dentryItem; // @synthesize dentryItem=_dentryItem;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, nonatomic) UIImage *defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)highlightAttributeString:(id)arg1 WithSearchTerm:(id)arg2 color:(id)arg3;
- (id)attributedStringForFilePath:(id)arg1 highlightColor:(id)arg2 font:(id)arg3;
- (id)attributedStringForFileName:(id)arg1 highlightColor:(id)arg2 font:(id)arg3;
- (id)previewURLForSize:(struct CGSize)arg1;
- (id)initWithDentryItem:(id)arg1 spaceProperty:(id)arg2;

@end

