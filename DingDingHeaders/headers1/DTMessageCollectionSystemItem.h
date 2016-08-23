//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTMessageCollectionSystemItem : NSObject
{
    _Bool _needNewMessagesAnchorView;
    _Bool _needSafeMessagesAnchorView;
    NSString *_text;
    unsigned long long _type;
    unsigned long long _style;
    NSArray *_links;
    long long _VCStyle;
    long long _senderId;
}

+ (id)buildWithMessage:(id)arg1 needNewMessagesAnchorView:(_Bool)arg2 needSafeMessagesAnchorView:(_Bool)arg3 VCStyle:(long long)arg4;
@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(nonatomic) long long VCStyle; // @synthesize VCStyle=_VCStyle;
@property(nonatomic) _Bool needSafeMessagesAnchorView; // @synthesize needSafeMessagesAnchorView=_needSafeMessagesAnchorView;
@property(nonatomic) _Bool needNewMessagesAnchorView; // @synthesize needNewMessagesAnchorView=_needNewMessagesAnchorView;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

