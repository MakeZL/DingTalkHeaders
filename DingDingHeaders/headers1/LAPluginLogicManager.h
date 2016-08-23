//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface LAPluginLogicManager : NSObject
{
    NSMutableDictionary *_actionMap;
    NSMutableDictionary *_classListMap;
    NSMutableDictionary *_moduleMap;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *moduleMap; // @synthesize moduleMap=_moduleMap;
@property(retain, nonatomic) NSMutableDictionary *classListMap; // @synthesize classListMap=_classListMap;
@property(retain, nonatomic) NSMutableDictionary *actionMap; // @synthesize actionMap=_actionMap;
- (void).cxx_destruct;
- (id)classNameListForPlugin:(id)arg1;
- (id)actionForMethod:(id)arg1 pluginName:(id)arg2;
- (void)clearPluginsInfo;
- (id)modules;
- (id)initPrivate;
- (void)dealloc;

@end

