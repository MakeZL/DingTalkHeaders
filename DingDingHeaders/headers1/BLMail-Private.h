//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLMail.h"

@interface BLMail (Private)
+ (long long)mailReferTypeFromAPIMailReferType:(long long)arg1;
+ (long long)apiMailReferTypeFromMailReferType:(long long)arg1;
+ (id)mailFromAPIMailModel:(id)arg1 events:(id *)arg2 folder:(id)arg3 andAccount:(id)arg4;
+ (id)mailFromAPIMailModel:(id)arg1 events:(id *)arg2 subObjects:(id *)arg3 folder:(id)arg4 isFromSearch:(_Bool)arg5 andAccount:(id)arg6 saveSubObject:(_Bool)arg7;
+ (id)mailFromAPIMailModel:(id)arg1 events:(id *)arg2 subObjects:(id *)arg3 folder:(id)arg4 andAccount:(id)arg5 saveSubObject:(_Bool)arg6;
- (_Bool)isProxySend;
- (id)subjectWithoutPrefix;
- (void)syncSaveWithRelationShip:(id)arg1;
- (void)setResourceListWithArray:(id)arg1 forAccount:(id)arg2;
- (void)setAttachmentListWithArray:(id)arg1 forAccount:(id)arg2;
- (void)setAttachmentWithModels:(id)arg1 isRelated:(_Bool)arg2 forAccount:(id)arg3;
- (id)apiMailModelForAccount:(id)arg1;
@end

