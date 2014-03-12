//
//  DetailViewController.h
//  xcodetest
//
//  Created by Atindra Ganeshen on 2014-03-12.
//  Copyright (c) 2014 Atindra Ganeshen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
