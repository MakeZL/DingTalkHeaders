//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickCellItem.h"

@class DTBizConversation;

@interface DTGroupConversationCellItem : DTContactPickCellItem
{
    DTBizConversation *_conversation;
}

@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (id)signImageTypeForConversation:(id)arg1;
- (void)setupAvatarModelsIfNeeds;

@end

