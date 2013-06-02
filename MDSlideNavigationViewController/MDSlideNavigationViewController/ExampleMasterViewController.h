//
//  ExampleMasterViewController.h
//  MDSlideNavigationViewController
//
//  Created by Mohammed Eldehairy on 6/2/13.
//  Copyright (c) 2013 Mohammed Eldehairy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ExampleDetailViewController;

@interface ExampleMasterViewController : UITableViewController

@property (strong, nonatomic) ExampleDetailViewController *detailViewController;

@end
