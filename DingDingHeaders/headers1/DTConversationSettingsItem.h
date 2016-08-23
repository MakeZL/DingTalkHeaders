//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTConversationSettingsItem : NSObject
{
    _Bool _enableHotdot;
    _Bool _switchStatus;
    _Bool _switchShowReddot;
    _Bool _switchShowNewStatus;
    _Bool _allowAddMember;
    _Bool _allowDeleteMember;
    _Bool _disableAccessView;
    _Bool _disable;
    unsigned long long _itemType;
    NSString *_title;
    NSString *_content;
    NSString *_iconName;
    NSArray *_avatars;
    CDUnknownBlockType _switchAction;
    CDUnknownBlockType _selectAction;
    CDUnknownBlockType _deleteMemberAction;
    CDUnknownBlockType _addMemberAction;
    NSArray *_menuItems;
}

+ (id)menusWithItems:(id)arg1;
+ (id)initRightIconWithTitle:(id)arg1 imageName:(id)arg2 selectAction:(CDUnknownBlockType)arg3;
+ (id)initRightIconWithTitle:(id)arg1 content:(id)arg2 imageName:(id)arg3 selectAction:(CDUnknownBlockType)arg4;
+ (id)initAddrItemWithContent:(id)arg1;
+ (id)initHeadersItemWithTitle:(id)arg1 content:(id)arg2 avatars:(id)arg3 allowAddMembers:(_Bool)arg4 allowDeleteMembers:(_Bool)arg5 selectAction:(CDUnknownBlockType)arg6 addMemberAction:(CDUnknownBlockType)arg7 deleteMemberAction:(CDUnknownBlockType)arg8;
+ (id)initSwitchItemWithTitle:(id)arg1 content:(id)arg2 status:(_Bool)arg3 switchAction:(CDUnknownBlockType)arg4 selectAction:(CDUnknownBlockType)arg5;
+ (id)initSwitchItemWithTitle:(id)arg1 status:(_Bool)arg2 showNew:(_Bool)arg3 switchAction:(CDUnknownBlockType)arg4 selectAction:(CDUnknownBlockType)arg5;
+ (id)initSwitchItemWithTitle:(id)arg1 status:(_Bool)arg2 showReddot:(_Bool)arg3 switchAction:(CDUnknownBlockType)arg4 selectAction:(CDUnknownBlockType)arg5;
+ (id)initSwitchItemWithTitle:(id)arg1 status:(_Bool)arg2 switchAction:(CDUnknownBlockType)arg3 selectAction:(CDUnknownBlockType)arg4;
+ (id)initNormalItemWithTitle:(id)arg1 content:(id)arg2;
+ (id)initNormalItemWithTitle:(id)arg1 content:(id)arg2 imageName:(id)arg3 selectAction:(CDUnknownBlockType)arg4;
+ (id)initNormalItemWithTitle:(id)arg1 content:(id)arg2 selectAction:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(nonatomic) _Bool disableAccessView; // @synthesize disableAccessView=_disableAccessView;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(copy, nonatomic) CDUnknownBlockType addMemberAction; // @synthesize addMemberAction=_addMemberAction;
@property(copy, nonatomic) CDUnknownBlockType deleteMemberAction; // @synthesize deleteMemberAction=_deleteMemberAction;
@property(nonatomic) _Bool allowDeleteMember; // @synthesize allowDeleteMember=_allowDeleteMember;
@property(nonatomic) _Bool allowAddMember; // @synthesize allowAddMember=_allowAddMember;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(copy, nonatomic) CDUnknownBlockType switchAction; // @synthesize switchAction=_switchAction;
@property(nonatomic) _Bool switchShowNewStatus; // @synthesize switchShowNewStatus=_switchShowNewStatus;
@property(nonatomic) _Bool switchShowReddot; // @synthesize switchShowReddot=_switchShowReddot;
@property(nonatomic) _Bool switchStatus; // @synthesize switchStatus=_switchStatus;
@property(copy, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
@property(nonatomic) _Bool enableHotdot; // @synthesize enableHotdot=_enableHotdot;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;

@end

