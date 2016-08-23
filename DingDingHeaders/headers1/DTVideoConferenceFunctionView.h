//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class DTVideoConferenceFunctionButton;
@protocol VideoConfFunctionDatasource, VideoConfFunctionDelegate;

@interface DTVideoConferenceFunctionView : UICollectionReusableView
{
    id <VideoConfFunctionDelegate> _delegate;
    id <VideoConfFunctionDatasource> _datasource;
    DTVideoConferenceFunctionButton *_muteButton;
    DTVideoConferenceFunctionButton *_speakerButton;
    DTVideoConferenceFunctionButton *_closeCameraButton;
    DTVideoConferenceFunctionButton *_switchCameraButton;
}

@property(retain, nonatomic) DTVideoConferenceFunctionButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) DTVideoConferenceFunctionButton *closeCameraButton; // @synthesize closeCameraButton=_closeCameraButton;
@property(retain, nonatomic) DTVideoConferenceFunctionButton *speakerButton; // @synthesize speakerButton=_speakerButton;
@property(retain, nonatomic) DTVideoConferenceFunctionButton *muteButton; // @synthesize muteButton=_muteButton;
@property(nonatomic) id <VideoConfFunctionDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) id <VideoConfFunctionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshMuteButton:(_Bool)arg1;
- (void)commonBtnPressed:(id)arg1;
- (void)loadCompoment;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSwitchCamera;
- (_Bool)isEnableCamera;
- (_Bool)isHandFree;
- (_Bool)isMuted;
- (_Bool)isPortrait;

@end

