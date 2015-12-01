//
//  RNBackgroundGeolocation.h
//  RNBackgroundGeolocation
//
//  Created by Christopher Scott on 2015-04-19.
//  Copyright (c) 2015 Transistor Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>
#import "RCTBridge.h"
#import "RCTLog.h"
#import <AudioToolbox/AudioToolbox.h>
#import <TSLocationManager/TSLocationManager.h>

@interface RNBackgroundGeolocation : NSObject <RCTBridgeModule>

@property (nonatomic, strong) TSLocationManager* locationManager;
@property (nonatomic, strong) NSMutableArray* currentPositionListeners;
@property (nonatomic, strong) NSDictionary* syncCallback;

@end

