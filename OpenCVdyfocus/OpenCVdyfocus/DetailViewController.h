//
//  DetailViewController.h
//  OpenCVdyfocus
//
//  Created by mhss on 2/16/13.
//  Copyright (c) 2013 Marcelo Salloum. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
