//
//  DetailViewController.h
//  App
//
//  Created by Florian Bögge on 05.12.13.
//  Copyright (c) 2013 Florian Bögge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
