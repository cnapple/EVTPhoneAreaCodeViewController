//
//  EVTViewController.m
//  EVTPhoneAreaCodeViewController
//
//  Created by everettjf on 06/10/2016.
//  Copyright (c) 2016 everettjf. All rights reserved.
//

#import "EVTViewController.h"
#import "EVTPhoneAreaCodeViewController.h"

@interface EVTViewController ()

@end

@implementation EVTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)buttonTapped:(id)sender {
    EVTPhoneAreaCodeViewController *vc = [[EVTPhoneAreaCodeViewController alloc]init];
    vc.completion = ^(NSString *name, NSString *code){
        UIButton *b = sender;
        [b setTitle:[NSString stringWithFormat:@"+%@ %@",code,name] forState:UIControlStateNormal];
    };
    [self.navigationController pushViewController:vc animated:YES];
}
- (IBAction)enTapped:(id)sender {
    EVTPhoneAreaCodeViewController *vc = [[EVTPhoneAreaCodeViewController alloc]init];
    vc.localeEn = YES;
    vc.completion = ^(NSString *name, NSString *code){
        UIButton *b = sender;
        [b setTitle:[NSString stringWithFormat:@"+%@ %@",code,name] forState:UIControlStateNormal];
    };
    [self.navigationController pushViewController:vc animated:YES];
}

@end
