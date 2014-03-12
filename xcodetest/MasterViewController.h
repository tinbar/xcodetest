//
//  MasterViewController.h
//  xcodetest
//
//  Created by Atindra Ganeshen on 2014-03-12.
//  Copyright (c) 2014 Atindra Ganeshen. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
