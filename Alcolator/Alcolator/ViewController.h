//
//  ViewController.h
//  Alcolator
//
//  Created by Luke Everett on 2/2/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UINavigationItem *wineNavBar;

- (void) buttonPressed:(UIButton *)sender;

- (void) calculate;

@end

