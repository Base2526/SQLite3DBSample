//
//  EditInfoViewController.h
//  SQLite3DBSample
//
//  Created by Bilal ARSLAN on 06/07/14.
//  Copyright (c) 2014 Bilal ARSLAN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditInfoViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *txtFirstName;
@property (weak, nonatomic) IBOutlet UITextField *txtLastname;
@property (weak, nonatomic) IBOutlet UITextField *txtAge;


- (IBAction)saveInfo:(id)sender;

@end