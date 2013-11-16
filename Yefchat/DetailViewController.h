//
//  DetailViewController.h
//  Yefchat
//
//  Created by Ishaan Gulrajani on 11/15/13.
//  Copyright (c) 2013 Watchsend. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Snap;
@interface DetailViewController : UIViewController

@property (strong, nonatomic) Snap *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
