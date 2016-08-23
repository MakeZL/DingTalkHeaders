//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageCollectionViewCellAttachmentProtocol-Protocol.h"

@class DTMessageBubbleAttachmentCOAViewFooterView, DTMessageCollectionViewCell, DTMessageTagViewModel, UIGestureRecognizer;

@protocol DTMessageCollectionViewCellDelegate <DTMessageCollectionViewCellAttachmentProtocol>

@optional
- (void)messageBubbleCViewFooterRightButton:(DTMessageCollectionViewCell *)arg1 footerView:(DTMessageBubbleAttachmentCOAViewFooterView *)arg2;
- (void)messageBubbleCViewFooterMiddleButton:(DTMessageCollectionViewCell *)arg1 footerView:(DTMessageBubbleAttachmentCOAViewFooterView *)arg2;
- (void)messageBubbleCViewFooterLeftButton:(DTMessageCollectionViewCell *)arg1 footerView:(DTMessageBubbleAttachmentCOAViewFooterView *)arg2;
- (_Bool)needResponderPanGesture:(DTMessageCollectionViewCell *)arg1;
- (void)messageNameViewLeftButtonClick:(DTMessageCollectionViewCell *)arg1;
- (void)messageTagViewIconClick:(DTMessageCollectionViewCell *)arg1 tagViewModel:(DTMessageTagViewModel *)arg2;
- (void)messageTagViewClick:(DTMessageCollectionViewCell *)arg1 tagViewModel:(DTMessageTagViewModel *)arg2;
- (void)messageRefreshViewDidClick:(DTMessageCollectionViewCell *)arg1;
- (void)messageBubbleViewLongGestureBecomeNextResponder:(DTMessageCollectionViewCell *)arg1;
- (void)confirmReceived:(DTMessageCollectionViewCell *)arg1;
- (void)messageBubbleView:(DTMessageCollectionViewCell *)arg1 triggerMenuActionWithType:(long long)arg2;
- (void)messageBubbleView:(DTMessageCollectionViewCell *)arg1 didDoubleTappedWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)messageBubbleViewCell:(DTMessageCollectionViewCell *)arg1 didTappedWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)messageAvatarLongPress:(DTMessageCollectionViewCell *)arg1;
- (void)messageAvatarDidTap:(DTMessageCollectionViewCell *)arg1;
- (void)messageBubbleAttachmentAudioViewStartPlay:(DTMessageCollectionViewCell *)arg1;
- (void)didTouchPauseUploadingButtonOnMessageCollectionViewCell:(DTMessageCollectionViewCell *)arg1;
- (void)didTouchFailureButtonOnMessageCollectionViewCell:(DTMessageCollectionViewCell *)arg1;
- (void)didTouchReadCountButtonOnMessageCollectionViewCell:(DTMessageCollectionViewCell *)arg1;
- (void)didTouchReadAlertButtonOnMessageCollectionViewCell:(DTMessageCollectionViewCell *)arg1;
- (void)didTouchCellOnMessageCollectionViewCell:(DTMessageCollectionViewCell *)arg1;
@end
