//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FieldType : NSObject
{
    unsigned short _fieldId;
    int _typeEnum;
    NSString *_name;
    Class _clazz;
    Class _fClazz;
    Class _sClazz;
}

@property(nonatomic) int typeEnum; // @synthesize typeEnum=_typeEnum;
@property(nonatomic) Class sClazz; // @synthesize sClazz=_sClazz;
@property(nonatomic) Class fClazz; // @synthesize fClazz=_fClazz;
@property(nonatomic) Class clazz; // @synthesize clazz=_clazz;
@property(nonatomic) unsigned short fieldId; // @synthesize fieldId=_fieldId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

