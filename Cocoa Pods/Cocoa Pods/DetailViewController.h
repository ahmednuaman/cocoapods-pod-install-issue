//
//  DetailViewController.h
//  Cocoa Pods
//
//  Created by Ahmed Nuaman on 29/01/2014.
//  Copyright (c) 2014 FireStarter Media Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
