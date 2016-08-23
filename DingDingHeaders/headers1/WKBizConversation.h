//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"
#import "WKBizConversation-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, WKBizMessage;

@interface WKBizConversation : OpenModel <WKBizConversation, OpenModelProtocol>
{
    NSMutableDictionary *_extension;
    NSMutableDictionary *_privateExtension;
    _Bool _disableNotification;
    _Bool _hasJoinGroupControl;
    int _memberLimit;
    int _groupLevel;
    NSArray *_members;
    NSMutableDictionary *_draftAtList;
    long long _peerOpenId;
    WKBizMessage *_latestMessage;
    NSString *_parentId;
    unsigned long long _nodeType;
    long long _customSortIndex;
    NSString *_conversationId;
    unsigned long long _conversationType;
    NSString *_title;
    NSString *_icon;
    long long _createdAt;
    unsigned long long _status;
    long long _unreadCount;
    long long _unreadAtMeCount;
    NSString *_content;
    long long _latestModifiedAt;
    long long _latestMessageModifiedAt;
    NSString *_draft;
    long long _memberCount;
    long long _ownerId;
    NSString *_notificationSound;
    long long _sortIndex;
    long long _tag;
    unsigned long long _primaryKey;
    NSString *_latestMessageJson;
    NSString *_membersJson;
    NSString *_extensionJson;
    NSString *_privateExtensionJson;
    NSString *_draftAtListJson;
    NSString *_clientExtension;
    long long _addMemberPermission;
}

+ (_Bool)isOpenedJoinGroupControlWithModel:(id)arg1;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(nonatomic) int groupLevel; // @synthesize groupLevel=_groupLevel;
@property(nonatomic) int memberLimit; // @synthesize memberLimit=_memberLimit;
@property(nonatomic) long long addMemberPermission; // @synthesize addMemberPermission=_addMemberPermission;
@property(copy, nonatomic) NSString *clientExtension; // @synthesize clientExtension=_clientExtension;
@property(copy, nonatomic) NSString *draftAtListJson; // @synthesize draftAtListJson=_draftAtListJson;
@property(copy, nonatomic) NSString *privateExtensionJson; // @synthesize privateExtensionJson=_privateExtensionJson;
@property(copy, nonatomic) NSString *extensionJson; // @synthesize extensionJson=_extensionJson;
@property(retain, nonatomic) NSString *membersJson; // @synthesize membersJson=_membersJson;
@property(retain, nonatomic) NSString *latestMessageJson; // @synthesize latestMessageJson=_latestMessageJson;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(nonatomic) _Bool hasJoinGroupControl; // @synthesize hasJoinGroupControl=_hasJoinGroupControl;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long sortIndex; // @synthesize sortIndex=_sortIndex;
@property(copy, nonatomic) NSString *notificationSound; // @synthesize notificationSound=_notificationSound;
@property(nonatomic) _Bool disableNotification; // @synthesize disableNotification=_disableNotification;
@property(nonatomic) long long ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) long long memberCount; // @synthesize memberCount=_memberCount;
@property(copy, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) long long latestMessageModifiedAt; // @synthesize latestMessageModifiedAt=_latestMessageModifiedAt;
@property(nonatomic) long long latestModifiedAt; // @synthesize latestModifiedAt=_latestModifiedAt;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long unreadAtMeCount; // @synthesize unreadAtMeCount=_unreadAtMeCount;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) long long customSortIndex; // @synthesize customSortIndex=_customSortIndex;
@property(nonatomic) unsigned long long nodeType; // @synthesize nodeType=_nodeType;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
- (void).cxx_destruct;
- (_Bool)isContainer;
- (_Bool)isChild;
@property(readonly, nonatomic) long long peerOpenId; // @synthesize peerOpenId=_peerOpenId;
- (id)atListJson;
@property(readonly, nonatomic) NSMutableDictionary *draftAtList; // @synthesize draftAtList=_draftAtList;
@property(copy, nonatomic) NSDictionary *safePrivateExtension;
- (id)privateExtension;
@property(copy, nonatomic) NSDictionary *safeExtension;
- (id)extension;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) WKBizMessage *latestMessage; // @synthesize latestMessage=_latestMessage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

