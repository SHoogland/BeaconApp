//
//  BeaconDetailsViewController.m
//  BeaconApp
//
//  Created by Stephan Hoogland on 09/12/14.
//  Copyright (c) 2014 SHoogland. All rights reserved.
//

#import "BeaconDetailsViewController.h"
#import "ESTBeaconManager.h"

@interface BeaconDetailsViewController () <ESTBeaconManagerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *DetailsViewLabel;

@end

@implementation BeaconDetailsViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    self.DetailsViewLabel.text = [NSString stringWithFormat:@"Mac Address: %@", self.beacon.macAddress];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
