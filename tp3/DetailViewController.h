//
//  DetailViewController.h
//  tp3
//
//  Created by Nawako on 13/01/2015.
//  Copyright (c) 2015 Nawako. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

