//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLMailDetailViewData-Protocol.h"

@class NSArray, NSString;

@protocol BLMailComposeViewData <BLMailDetailViewData>
@property(readonly, nonatomic) NSString *senderEmail;
@property(readonly, nonatomic) NSString *draftHtmlContent;
@property(readonly, nonatomic) _Bool isAutoQuoteMail;
@property(readonly, nonatomic) NSString *autoSaveHtmlContent;
@property(readonly, nonatomic) _Bool isBccTokenFieldFirstResponder;
@property(readonly, nonatomic) _Bool isCcTokenFieldFirstResponder;
@property(readonly, nonatomic) _Bool isToTokenFieldFirstResponder;
@property(readonly, nonatomic) NSString *editorTemplateFileName;
@property(readonly, nonatomic) NSString *bccFieldText;
@property(readonly, nonatomic) NSString *ccFieldText;
@property(readonly, nonatomic) NSString *toFieldText;
@property(readonly, nonatomic) NSArray *inLineImagesURLStrings;
@property(readonly, nonatomic) NSArray *bccTokenFieldObjects;
@property(readonly, nonatomic) NSArray *ccTokenFieldObjects;
@property(readonly, nonatomic) NSArray *toTokenFieldObjects;
@property(readonly, nonatomic) NSString *planTextContent;
@property(readonly, nonatomic) NSString *originHtml;
@property(readonly, nonatomic) NSString *htmlContent;
@property(readonly, nonatomic) NSString *subjectFieldText;

@optional
- (void)correctMissingInlineAttachments;
@end

