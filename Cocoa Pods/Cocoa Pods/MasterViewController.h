//
//  MasterViewController.h
//  Cocoa Pods
//
//  Created by Ahmed Nuaman on 29/01/2014.
//  Copyright (c) 2014 FireStarter Media Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
