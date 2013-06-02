//
//  ExampleAppDelegate.h
//  MDSlideNavigationViewController
//
//  Created by Mohammed Eldehairy on 6/2/13.
//  Copyright (c) 2013 Mohammed Eldehairy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MDSlideNavigationViewController.h"
@interface ExampleAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MDSlideNavigationViewController *navigationController;

@property (strong, nonatomic) UISplitViewController *splitViewController;

@end
