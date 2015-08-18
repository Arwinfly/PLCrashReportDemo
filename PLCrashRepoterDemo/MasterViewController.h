//
//  MasterViewController.h
//  PLCrashRepoterDemo
//
//  Created by arvind rawat on 13/08/15.
//  Copyright (c) 2015 Wizni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

