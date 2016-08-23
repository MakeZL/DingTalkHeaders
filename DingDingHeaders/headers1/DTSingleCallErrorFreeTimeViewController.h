//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTButton, NSString;
@protocol SingCallErrorFreeTimeDelegate;

@interface DTSingleCallErrorFreeTimeViewController : DTViewController
{
    _Bool _canSystemCall;
    id <SingCallErrorFreeTimeDelegate> _delegate;
    long long _uid;
    NSString *_nick;
    DTButton *_switchButton;
    NSString *_errorInfo;
}

@property(nonatomic) _Bool canSystemCall; // @synthesize canSystemCall=_canSystemCall;
@property(copy, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(retain, nonatomic) DTButton *switchButton; // @synthesize switchButton=_switchButton;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) __weak id <SingCallErrorFreeTimeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchSystemCall;
- (void)cancel;
- (void)errorInfo:(id)arg1 canSystemCall:(_Bool)arg2;
- (void)loadCompoment;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

@end

