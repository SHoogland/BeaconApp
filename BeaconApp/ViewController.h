//
//  ViewController.h
//  BeaconApp
//
//  Created by Stephan Hoogland on 16/11/14.
//  Copyright (c) 2014 SHoogland. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ESTBeacon.h"

typedef enum : int
{
    ESTScanTypeBluetooth,
    ESTScanTypeBeacon
    
} ESTScanType;

/*
 * Lists all Estimote beacons in range and returns selected beacon.
 */
@interface ViewController : UITableViewController

/*
 * Selected beacon is returned on given completion handler.
 */
- (id)initWithScanType:(ESTScanType)scanType completion:(void (^)(ESTBeacon *))completion;

@end

