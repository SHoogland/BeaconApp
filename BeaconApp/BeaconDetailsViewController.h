//
//  BeaconDetailsViewController.h
//  BeaconApp
//
//  Created by Stephan Hoogland on 09/12/14.
//  Copyright (c) 2014 SHoogland. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ESTBeacon.h"

@interface BeaconDetailsViewController : UIViewController

@property (nonatomic, strong) ESTBeacon *beacon;

@end
