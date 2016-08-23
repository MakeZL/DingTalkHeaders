//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTAttributedLabel, DTBizDingAttachmentExtra, DTBizDingLinkModel, DTBizDingModel, DTContact, NSString, NSURL;

@protocol DTDingTableHeaderViewDelegate <NSObject>
- (void)attributedLabel:(DTAttributedLabel *)arg1 didSelectLinkWithPhoneNumber:(NSString *)arg2;
- (void)attributedLabel:(DTAttributedLabel *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
- (void)openCSpaceAttachment:(DTBizDingAttachmentExtra *)arg1 senderId:(long long)arg2;
- (void)openAttachmentLink:(DTBizDingLinkModel *)arg1 senderId:(long long)arg2;
- (void)openDingFinishStatusList:(_Bool)arg1 dingModel:(DTBizDingModel *)arg2;
- (void)openDingReceiverStatusList:(_Bool)arg1 dingModel:(DTBizDingModel *)arg2;
- (void)receivedCellDidPressConfirm:(id)arg1;
- (void)openUserProfile:(DTContact *)arg1;
@end

