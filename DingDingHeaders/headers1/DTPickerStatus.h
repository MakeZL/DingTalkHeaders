//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizConversation, NSMutableArray, NSSet, NSString;

@interface DTPickerStatus : NSObject
{
    _Bool _enableSingleSelection;
    _Bool _hidesSelf;
    _Bool _enableEmailMode;
    NSSet *_disabledUIDs;
    unsigned long long _limitNumber;
    CDUnknownBlockType _didPickFinishBlock;
    CDUnknownBlockType _pickDidCancelBlock;
    CDUnknownBlockType _didPickSingleFinishBlock;
    NSString *_messageForOverLimitOnPick;
    NSString *_messageForOverLimitOnConfirm;
    NSString *_avatarPanelTips;
    NSMutableArray *_pickedIdentifiers;
    NSMutableArray *_pickerAvatarDataSource;
    double _contentOffsetOfPickerAvatarView;
    DTBizConversation *_conversation;
    NSSet *_selectedEmails;
}

@property(copy, nonatomic) NSSet *selectedEmails; // @synthesize selectedEmails=_selectedEmails;
@property(nonatomic) _Bool enableEmailMode; // @synthesize enableEmailMode=_enableEmailMode;
@property(nonatomic) _Bool hidesSelf; // @synthesize hidesSelf=_hidesSelf;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) double contentOffsetOfPickerAvatarView; // @synthesize contentOffsetOfPickerAvatarView=_contentOffsetOfPickerAvatarView;
@property(retain, nonatomic) NSMutableArray *pickerAvatarDataSource; // @synthesize pickerAvatarDataSource=_pickerAvatarDataSource;
@property(retain, nonatomic) NSMutableArray *pickedIdentifiers; // @synthesize pickedIdentifiers=_pickedIdentifiers;
@property(copy, nonatomic) NSString *avatarPanelTips; // @synthesize avatarPanelTips=_avatarPanelTips;
@property(nonatomic) _Bool enableSingleSelection; // @synthesize enableSingleSelection=_enableSingleSelection;
@property(copy, nonatomic) NSString *messageForOverLimitOnConfirm; // @synthesize messageForOverLimitOnConfirm=_messageForOverLimitOnConfirm;
@property(copy, nonatomic) NSString *messageForOverLimitOnPick; // @synthesize messageForOverLimitOnPick=_messageForOverLimitOnPick;
@property(copy, nonatomic) CDUnknownBlockType didPickSingleFinishBlock; // @synthesize didPickSingleFinishBlock=_didPickSingleFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType pickDidCancelBlock; // @synthesize pickDidCancelBlock=_pickDidCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didPickFinishBlock; // @synthesize didPickFinishBlock=_didPickFinishBlock;
@property(nonatomic) unsigned long long limitNumber; // @synthesize limitNumber=_limitNumber;
@property(copy, nonatomic) NSSet *disabledUIDs; // @synthesize disabledUIDs=_disabledUIDs;
- (void).cxx_destruct;
- (long long)pickedNumber;
- (unsigned long long)limitNumberWithoutDisabledUids;
- (_Bool)willOverLimitIfAdd;
- (_Bool)hasOverLimit;
- (_Bool)isDisableIdentifier:(id)arg1;
- (_Bool)hasPickedWithIdentifier:(id)arg1;
- (void)unpickWithIdentifier:(id)arg1;
- (void)pickWithIdentifier:(id)arg1;

@end

