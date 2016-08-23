//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface VSImageUtil : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
}

+ (id)compositeImage:(id)arg1 coverView:(id)arg2 coverRect:(struct CGRect)arg3;
+ (id)compositeImage2:(id)arg1 coverView:(id)arg2 coverRect:(struct CGRect)arg3;
+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

