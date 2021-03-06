//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBScanSliderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class CALayer, NSMutableDictionary, NSString, NSTimer, TBScanCamCaptureManager, TBScanResult, TBScanSlider, UIPopoverController, UIView;
@protocol TBScanViewControllerDelegate;

@interface TBScanViewController : UIViewController <TBScanSliderDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate>
{
    unsigned int _soundID;
    unsigned int _takePhotoSoundID;
    _Bool _torchOff;
    double cameraWidth;
    double cameraHeight;
    double initCameraTime;
    int localResultType;
    TBScanResult *localResult;
    double camWidth;
    double lastCamWidth;
    double firstY;
    double lastY;
    double panStartX;
    double panStartY;
    _Bool _bWaitingHidden;
    _Bool _bPlaySound;
    _Bool _bPreciseScan;
    _Bool _bGestureEnable;
    _Bool _bPresentGestureEnable;
    _Bool _bSaveBarcodeQRImage;
    _Bool _bResumeScanAtViewAppear;
    _Bool _bTopBarViewHiden;
    _Bool _tryContinuousAutoFocus;
    int _scanType;
    int _bTakePhotos;
    int _bScanPaused;
    int _scanCount;
    int _focusCount;
    id <TBScanViewControllerDelegate> _delegate;
    NSString *_waitingMsg;
    NSString *_waitingBottomMsg;
    double _focusInterval;
    double _cameraWidthPercent;
    long long _repeatCount;
    NSString *_cameraPermissionDeniedTitle;
    NSString *_cameraPermissionDeniedMsg;
    NSString *_cameraPermissionDeniedCancelTitle;
    NSString *_scanPhotoFailedMsg;
    NSString *_scanPhotoFailedCancelTitle;
    NSMutableDictionary *_pluginDict;
    TBScanCamCaptureManager *_captureManager;
    UIView *_videoPreviewView;
    CALayer *_captureVideoPreviewLayer;
    TBScanSlider *_sliderView;
    NSTimer *_sliderTimer;
    UIView *_waitingView;
    double _cameraWidth2ScreenWidth;
    double _lastFocusTime;
    UIPopoverController *_popoverView;
    double _firstScanTime;
    struct CGRect _rectOfInterest;
    struct CGRect _sliderRect;
}

@property(nonatomic) double firstScanTime; // @synthesize firstScanTime=_firstScanTime;
@property(nonatomic) int focusCount; // @synthesize focusCount=_focusCount;
@property(nonatomic) int scanCount; // @synthesize scanCount=_scanCount;
@property(retain, nonatomic) UIPopoverController *popoverView; // @synthesize popoverView=_popoverView;
@property(nonatomic) double lastFocusTime; // @synthesize lastFocusTime=_lastFocusTime;
@property(nonatomic) double cameraWidth2ScreenWidth; // @synthesize cameraWidth2ScreenWidth=_cameraWidth2ScreenWidth;
@property(nonatomic) int bScanPaused; // @synthesize bScanPaused=_bScanPaused;
@property(retain, nonatomic) UIView *waitingView; // @synthesize waitingView=_waitingView;
@property(retain, nonatomic) NSTimer *sliderTimer; // @synthesize sliderTimer=_sliderTimer;
@property(retain, nonatomic) TBScanSlider *sliderView; // @synthesize sliderView=_sliderView;
@property(nonatomic) int bTakePhotos; // @synthesize bTakePhotos=_bTakePhotos;
@property(retain, nonatomic) CALayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
@property(retain, nonatomic) UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) TBScanCamCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(retain, nonatomic) NSMutableDictionary *pluginDict; // @synthesize pluginDict=_pluginDict;
@property(nonatomic) _Bool tryContinuousAutoFocus; // @synthesize tryContinuousAutoFocus=_tryContinuousAutoFocus;
@property(nonatomic) _Bool bTopBarViewHiden; // @synthesize bTopBarViewHiden=_bTopBarViewHiden;
@property(retain, nonatomic) NSString *scanPhotoFailedCancelTitle; // @synthesize scanPhotoFailedCancelTitle=_scanPhotoFailedCancelTitle;
@property(retain, nonatomic) NSString *scanPhotoFailedMsg; // @synthesize scanPhotoFailedMsg=_scanPhotoFailedMsg;
@property(retain, nonatomic) NSString *cameraPermissionDeniedCancelTitle; // @synthesize cameraPermissionDeniedCancelTitle=_cameraPermissionDeniedCancelTitle;
@property(retain, nonatomic) NSString *cameraPermissionDeniedMsg; // @synthesize cameraPermissionDeniedMsg=_cameraPermissionDeniedMsg;
@property(retain, nonatomic) NSString *cameraPermissionDeniedTitle; // @synthesize cameraPermissionDeniedTitle=_cameraPermissionDeniedTitle;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) _Bool bResumeScanAtViewAppear; // @synthesize bResumeScanAtViewAppear=_bResumeScanAtViewAppear;
@property(nonatomic) _Bool bSaveBarcodeQRImage; // @synthesize bSaveBarcodeQRImage=_bSaveBarcodeQRImage;
@property(nonatomic) _Bool bPresentGestureEnable; // @synthesize bPresentGestureEnable=_bPresentGestureEnable;
@property(nonatomic) _Bool bGestureEnable; // @synthesize bGestureEnable=_bGestureEnable;
@property(nonatomic) _Bool bPreciseScan; // @synthesize bPreciseScan=_bPreciseScan;
@property(nonatomic) _Bool bPlaySound; // @synthesize bPlaySound=_bPlaySound;
@property(nonatomic) double cameraWidthPercent; // @synthesize cameraWidthPercent=_cameraWidthPercent;
@property(nonatomic) struct CGRect sliderRect; // @synthesize sliderRect=_sliderRect;
@property(nonatomic) double focusInterval; // @synthesize focusInterval=_focusInterval;
@property(nonatomic) struct CGRect rectOfInterest; // @synthesize rectOfInterest=_rectOfInterest;
@property(nonatomic) _Bool bWaitingHidden; // @synthesize bWaitingHidden=_bWaitingHidden;
@property(retain, nonatomic) NSString *waitingBottomMsg; // @synthesize waitingBottomMsg=_waitingBottomMsg;
@property(retain, nonatomic) NSString *waitingMsg; // @synthesize waitingMsg=_waitingMsg;
@property(nonatomic) int scanType; // @synthesize scanType=_scanType;
@property(nonatomic) __weak id <TBScanViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scanLocalPhotoError;
- (void)showLocalPhotoResult;
- (void)scanUIImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)scanPhotoLibrary:(struct CGRect)arg1 permittedArrowDirections:(unsigned long long)arg2 with:(id)arg3;
- (void)scanPhotoLibrary;
- (id)getBaseView;
- (void)showBarcodeQRCatchAnimation:(id)arg1;
- (_Bool)isScanPaused;
- (double)getCameraHeight;
- (double)getCameraWidth;
- (_Bool)canSetSession:(id)arg1;
- (void)playSound;
- (void)barCodeQRRecognized;
- (_Bool)checkWhiteList:(id)arg1;
- (void)scanLogoSucceed;
- (void)resumeScanLogo;
- (_Bool)getTakePhotosState;
- (_Bool)isUsingFrontCamera;
- (void)onClothesTakePhoto;
- (void)onCameraToggle;
- (void)onTorch;
- (void)exitScan;
- (void)captureStillImage:(CDUnknownBlockType)arg1;
- (void)focusAtPointInViewCoordinates:(struct CGPoint)arg1;
- (void)initCamera4LayoutSubviews;
- (void)onDismiss;
- (void)addTopBarView;
- (void)focusOnInterval;
- (void)processPreview:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)getSliderGestureEnable;
- (void)valueChangeStartEvent;
- (void)valueChangeEndEvent;
- (void)sliderValueChanged:(float)arg1;
- (void)showSliderView;
- (void)hideSliderView;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (void)didPinch:(id)arg1;
- (void)setPreviewRectByPreset;
- (void)setCameraWidth:(double)arg1;
- (double)getCameraWidth2ScreenWidth;
- (struct CGSize)cameraSizeForCameraInput:(id)arg1;
- (void)initCameraSize:(struct CGSize)arg1;
- (void)processPlugin:(int)arg1 withInfo:(id)arg2;
- (void)registerPlugin:(id)arg1 withType:(int)arg2;
- (id)getPluginByType:(int)arg1;
- (void)releaseMemory;
- (void)pauseScan;
- (void)forceFocus;
- (void)startNetLogo;
- (void)resetTakePhotoState;
- (void)setScanOn;
- (void)resumeScan;
- (void)setTorchImage;
- (void)viewWillShow;
- (_Bool)checkPhotoLibrary;
- (_Bool)checkCamera;
- (void)addSliderView;
- (void)setupView;
- (void)setupCamera;
- (void)initMemory;
- (void)avCaptureInputPortFormatDescriptionDidChangeNotification:(id)arg1;
- (void)continueScan;
- (void)updateView;
- (void)cameraStarted:(id)arg1;
- (void)becomeActive;
- (void)initCritical;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewWillHide;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

