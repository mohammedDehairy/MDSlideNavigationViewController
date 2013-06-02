//
//  ExampleDetailViewController.h
//  MDSlideNavigationViewController
//
//  Created by Mohammed Eldehairy on 6/2/13.
//  Copyright (c) 2013 Mohammed Eldehairy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ExampleDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
