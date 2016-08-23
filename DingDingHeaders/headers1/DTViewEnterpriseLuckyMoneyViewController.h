//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewLuckyMoneyViewController.h"

@class DTUserNameLabel, DTWebImageView, UIImageView, UILabel;

@interface DTViewEnterpriseLuckyMoneyViewController : DTViewLuckyMoneyViewController
{
    UILabel *_enterpriseReceivedLabel;
    UILabel *_enterpriseCongratulationsLabel;
    UILabel *_enterpriseReceiversLabel;
    UILabel *_enterpriseSenderNameLabel;
    DTWebImageView *_enterpriseLogoImageView;
    DTUserNameLabel *_enterpriseSendFromLabel;
    UIImageView *_enterpriseLine;
    UIImageView *_enterpriseRedEnvelopLogoImageView;
}

@property(retain, nonatomic) UIImageView *enterpriseRedEnvelopLogoImageView; // @synthesize enterpriseRedEnvelopLogoImageView=_enterpriseRedEnvelopLogoImageView;
@property(retain, nonatomic) UIImageView *enterpriseLine; // @synthesize enterpriseLine=_enterpriseLine;
@property(retain, nonatomic) DTUserNameLabel *enterpriseSendFromLabel; // @synthesize enterpriseSendFromLabel=_enterpriseSendFromLabel;
@property(retain, nonatomic) DTWebImageView *enterpriseLogoImageView; // @synthesize enterpriseLogoImageView=_enterpriseLogoImageView;
@property(retain, nonatomic) UILabel *enterpriseSenderNameLabel; // @synthesize enterpriseSenderNameLabel=_enterpriseSenderNameLabel;
@property(retain, nonatomic) UILabel *enterpriseReceiversLabel; // @synthesize enterpriseReceiversLabel=_enterpriseReceiversLabel;
@property(retain, nonatomic) UILabel *enterpriseCongratulationsLabel; // @synthesize enterpriseCongratulationsLabel=_enterpriseCongratulationsLabel;
@property(retain, nonatomic) UILabel *enterpriseReceivedLabel; // @synthesize enterpriseReceivedLabel=_enterpriseReceivedLabel;
- (void).cxx_destruct;
- (id)convertFlowToFlowCellItem:(id)arg1 withUid:(long long)arg2;
- (void)fillData:(id)arg1;
- (id)findFlowWithUid:(long long)arg1;
- (id)viewForHeaderInLuckyMoneyFlow;
- (id)titleForHeaderInLuckyMoneyFlow;
- (id)formatPickDoneTime;
- (double)pickedMoney;
- (void)fillHeaderData:(id)arg1;
- (id)displayOrgName:(long long)arg1;
- (void)performHeaderAnimationAfterPick;
- (void)performHeaderAnimationWhenPick;
- (double)readjustTableFooterView;
- (double)readjustTableHeaderView;
- (id)enterpriseLuckyMoneyDescActionView;
- (_Bool)hasPermissionToPick;
- (id)tableFooterView;
- (id)tableHeaderView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

