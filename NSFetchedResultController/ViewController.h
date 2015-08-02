//
//  ViewController.h
//  NSFetchedResultController
//
//  Created by Akash Rastogi on 02/08/15.
//  Copyright (c) 2015 Akash. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
- (IBAction)btnAddClicked:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UITextField *txtName;

@end

