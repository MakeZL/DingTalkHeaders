//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SISystemInfo : NSObject
{
}

+ (id)sharedInstance;
- (void)hiddenFPSBar;
- (void)showFPSBar;
@property(readonly, nonatomic) double memory_usage;
@property(readonly, nonatomic) double cpu_usage;
@property(readonly, nonatomic) _Bool jailbroken;
@property(readonly, nonatomic) double purgableMemoryinPercent;
@property(readonly, nonatomic) double purgableMemoryinRaw;
@property(readonly, nonatomic) double wiredMemoryinPercent;
@property(readonly, nonatomic) double wiredMemoryinRaw;
@property(readonly, nonatomic) double inactiveMemoryinPercent;
@property(readonly, nonatomic) double inactiveMemoryinRaw;
@property(readonly, nonatomic) double activeMemoryinPercent;
@property(readonly, nonatomic) double activeMemoryinRaw;
@property(readonly, nonatomic) double usedMemoryinPercent;
@property(readonly, nonatomic) double usedMemoryinRaw;
@property(readonly, nonatomic) double freeMemoryinPercent;
@property(readonly, nonatomic) double freeMemoryinRaw;
@property(readonly, nonatomic) double totalMemory;
@property(readonly, nonatomic) long long processorBusSpeed;
@property(readonly, nonatomic) long long processorSpeed;
@property(readonly, nonatomic) long long numberActiveProcessors;
@property(readonly, nonatomic) long long numberProcessors;
@property(readonly, nonatomic) long long netTypeFromRadioAccessTechnology;
@property(readonly, nonatomic) long long netTypeFromStatusBar;
@property(readonly, nonatomic) _Bool carrierAllowsVOIP;
@property(readonly, nonatomic) NSString *carrierMobileNetworkCode;
@property(readonly, nonatomic) NSString *carrierISOCountryCode;
@property(readonly, nonatomic) NSString *carrierMobileCountryCode;
@property(readonly, nonatomic) NSString *carrierCountry;
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) unsigned int networkOBytes;
@property(readonly, nonatomic) unsigned int networkIBytes;
@property(readonly, nonatomic) unsigned int cellOBytes;
@property(readonly, nonatomic) unsigned int cellIBytes;
@property(readonly, nonatomic) unsigned int wifiOBytes;
@property(readonly, nonatomic) unsigned int wifiIBytes;
@property(readonly, nonatomic) _Bool connectedToCellNetwork;
@property(readonly, nonatomic) _Bool connectedToWiFi;
@property(readonly, nonatomic) NSString *wiFiBroadcastAddress;
@property(readonly, nonatomic) NSString *wiFiNetmaskAddress;
@property(readonly, nonatomic) NSString *wiFiMACAddress;
@property(readonly, nonatomic) NSString *wiFiIPAddress;
@property(readonly, nonatomic) NSString *cellBroadcastAddress;
@property(readonly, nonatomic) NSString *cellNetmaskAddress;
@property(readonly, nonatomic) NSString *cellMACAddress;
@property(readonly, nonatomic) NSString *cellIPAddress;
@property(readonly, nonatomic) NSString *currentMACAddress;
@property(readonly, nonatomic) NSString *currentIPAddress;
@property(readonly, nonatomic) _Bool fullyCharged;
@property(readonly, nonatomic) _Bool charging;
@property(readonly, nonatomic) float batteryLevel;
@property(readonly, nonatomic) _Bool proximitySensorEnabled;
@property(readonly, nonatomic) _Bool multitaskingEnabled;
@property(readonly, nonatomic) long long screenHeight;
@property(readonly, nonatomic) long long screenWidth;
@property(readonly, copy, nonatomic) NSString *systemDeviceTypeFormatted;
@property(readonly, copy, nonatomic) NSString *systemDeviceTypeNotFormatted;
@property(readonly, copy, nonatomic) NSString *systemsVersion;
@property(readonly, copy, nonatomic) NSString *systemName;
@property(readonly, copy, nonatomic) NSString *deviceName;
@property(readonly, copy, nonatomic) NSString *systemsUptime;
- (id)init;

@end

