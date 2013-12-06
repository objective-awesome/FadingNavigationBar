//
//  FNTDetailViewController.h
//  FadingNavigationBarTest
//
//  Created by Joel Fischer on 12/5/13.
//  Copyright (c) 2013 objective-awesome. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FNTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
