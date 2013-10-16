//
//  DetailViewController.h
//  iDialjesus
//
//  Created by Teresa Van Dusen on 10/16/13.
//  Copyright (c) 2013 iDialJesus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
