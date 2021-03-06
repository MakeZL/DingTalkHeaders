//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBizMessage.h"

@interface DTBizMessage (Factory)
+ (id)generateVideoMessageWithVideoMediaId:(id)arg1 imageMediaId:(id)arg2 isTransmit:(_Bool)arg3 cid:(id)arg4 forwardedOriginalMid:(long long)arg5 fileType:(id)arg6 fileName:(id)arg7 fileSize:(long long)arg8 videoHeight:(long long)arg9 videoWidth:(long long)arg10 duration:(long long)arg11 bitRate:(long long)arg12;
+ (id)generateLinkMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 forwardedOriginalMid:(long long)arg4 title:(id)arg5 text:(id)arg6 url:(id)arg7;
+ (id)generateFileMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 forwardedOriginalMid:(long long)arg4 fileName:(id)arg5 fileType:(id)arg6 fileSize:(long long)arg7;
+ (id)generateAudioMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 transmitMessage:(id)arg3 cid:(id)arg4 forwardedOriginalMid:(long long)arg5 volumns:(id)arg6 duration:(double)arg7;
+ (id)generateImageMessageWithMediaId:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 forwardedOriginalMid:(long long)arg4;
+ (id)generateTextMessage:(id)arg1 isTransmit:(_Bool)arg2 cid:(id)arg3 atList:(id)arg4 forwardedOriginalMid:(long long)arg5;
@end

