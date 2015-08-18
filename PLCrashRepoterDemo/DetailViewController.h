//
//  DetailViewController.h
//  PLCrashRepoterDemo
//
//  Created by arvind rawat on 13/08/15.
//  Copyright (c) 2015 Wizni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

