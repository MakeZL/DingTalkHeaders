//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTMessageBubbleAttachmentProtocal-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class DTAttributedLabel, NSString;
@protocol DTMessageCollectionViewCellAttachmentProtocol;

@interface DTMessageBubbleAttachmentTextView : UIView <TTTAttributedLabelDelegate, DTMessageBubbleAttachmentProtocal>
{
    id <DTMessageCollectionViewCellAttachmentProtocol> _delegate;
    DTAttributedLabel *_textLabel;
    DTAttributedLabel *_translateLabel;
    UIView *_splitLine;
    struct UIEdgeInsets _containerEdgeInsets;
}

+ (struct CGSize)sizeThatFitsWithString:(id)arg1 translateStr:(id)arg2 constraints:(struct CGSize)arg3 limitedToNumberOfLines:(unsigned long long)arg4 textItem:(id)arg5;
+ (struct CGSize)calculateSizeWithItem:(id)arg1 constraintsSize:(struct CGSize)arg2;
+ (void)enqueueTextView:(id)arg1;
+ (id)dequeueTextView;
@property(nonatomic) struct UIEdgeInsets containerEdgeInsets; // @synthesize containerEdgeInsets=_containerEdgeInsets;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) DTAttributedLabel *translateLabel; // @synthesize translateLabel=_translateLabel;
@property(retain, nonatomic) DTAttributedLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <DTMessageCollectionViewCellAttachmentProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)caculateTextResultWithPoint:(struct CGPoint)arg1 ofView:(id)arg2;
- (void)translateLabelHide:(_Bool)arg1;
- (void)setContent:(id)arg1 translateStr:(id)arg2 textItem:(id)arg3;
- (void)configWithItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)prepareForReUsed:(id)arg1;
- (void)configWithLayoutAttribute:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 containerEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)configureAttachmentTextView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

