//
//  BeaconsTableViewCell.h
//  BeaconApp
//
//  Created by Stephan Hoogland on 23/11/14.
//  Copyright (c) 2014 SHoogland. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BeaconsTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *beaconText;
@property (weak, nonatomic) IBOutlet UILabel *beaconTextDetail;
@property (weak, nonatomic) IBOutlet UIImageView *beaconImage;

@end
