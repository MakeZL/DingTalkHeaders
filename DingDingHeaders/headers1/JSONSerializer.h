//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface JSONSerializer : NSObject
{
    CDUnknownBlockType _classFieldFilter;
    CDUnknownBlockType _valueFitler;
    long long _features;
}

@property(nonatomic) long long features; // @synthesize features=_features;
@property(copy, nonatomic) CDUnknownBlockType valueFitler; // @synthesize valueFitler=_valueFitler;
@property(copy, nonatomic) CDUnknownBlockType classFieldFilter; // @synthesize classFieldFilter=_classFieldFilter;
- (void).cxx_destruct;
- (Class)findDataTypeClass:(id)arg1;
- (_Bool)isWriteClassName;
- (id)getObjectSerializer:(id)arg1;
- (id)deSerializeObject:(id)arg1 data:(id)arg2;
- (id)serializeObject:(id)arg1;

@end

