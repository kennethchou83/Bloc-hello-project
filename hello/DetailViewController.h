//
//  DetailViewController.h
//  hello
//
//  Created by Kenneth Chou on 5/2/16.
//  Copyright © 2016 com.kennethchou83. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

