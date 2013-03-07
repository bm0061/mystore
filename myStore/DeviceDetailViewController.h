//
//  DeviceDetailViewController.h
//  myStore
//
//  Created by Brian Mishler on 3/5/13.
//  Copyright (c) 2013 Brian Mishler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeviceDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;

@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *cancel;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *save;
@property (strong) NSManagedObject *device;

@end
