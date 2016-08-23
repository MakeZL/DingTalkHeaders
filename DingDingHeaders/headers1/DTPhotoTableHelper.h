//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "DTPhotoTableDelegate-Protocol.h"

@class DTBizConversation, DTBizMessage, DTPhotoTableViewController, NSString;

@interface DTPhotoTableHelper : NSObject <DTPhotoTableDelegate, DTConversationSelectViewControllerDelegate>
{
    DTPhotoTableViewController *_tableViewController;
    DTBizConversation *_conversation;
    DTBizMessage *_transmitMessage;
    DTBizMessage *_loadMoreCursorMessage;
    long long _photoCount;
}

@property(nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(retain, nonatomic) DTBizMessage *loadMoreCursorMessage; // @synthesize loadMoreCursorMessage=_loadMoreCursorMessage;
@property(retain, nonatomic) DTBizMessage *transmitMessage; // @synthesize transmitMessage=_transmitMessage;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) DTPhotoTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (id)conversationSelectViewMessageForTransmit;
- (id)photoBrowserHelper:(id)arg1 customMenusWithItem:(id)arg2;
- (void)configPhotoBrowserPhotoTableItem:(id)arg1 enableLongPress:(_Bool *)arg2;
- (void)photoTablePopped:(id)arg1;
- (void)loadDataWithConversation:(id)arg1 cursorMessage:(id)arg2 photoCount:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)duplicateResultArrayWithTargetMessage:(id)arg1 messages:(id)arg2;
- (void)loadMoreData:(id)arg1;
- (void)openPhotoTableWithParentVC:(id)arg1 photoCount:(long long)arg2 conversation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
