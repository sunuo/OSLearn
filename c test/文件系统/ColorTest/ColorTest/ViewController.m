//
//  ViewController.m
//  ColorTest
//
//  Created by xukaitiankevin on 16/5/18.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    UILabel* lbl1=[[UILabel alloc] initWithFrame:CGRectMake(0, 20, 100, 50)];
    UILabel* lbl2=[[UILabel alloc] initWithFrame:CGRectMake(0, CGRectGetMaxY(lbl1.frame), 100, 50)];
    UILabel* lbl3=[[UILabel alloc] initWithFrame:CGRectMake(0, CGRectGetMaxY(lbl2.frame), 100, 50)];
    UILabel* lbl4=[[UILabel alloc] initWithFrame:CGRectMake(0, CGRectGetMaxY(lbl3.frame), 100, 50)];
    UIView * vwbg=[[UIView alloc] initWithFrame:lbl3.frame];
    
    [vwbg setBackgroundColor:[UIColor blackColor]];
    [vwbg setAlpha:0.5f];
    
    
    lbl1.text = @"测试";
    lbl2.text = @"测试";
    lbl3.text = @"测试";
    lbl4.text = @"测试";
    
    [lbl1 setBackgroundColor:[UIColor blackColor]];
    [lbl1 setTextColor:[UIColor whiteColor]];
    [lbl1 setAlpha:0.5];
    [lbl1 setFont:[UIFont systemFontOfSize:50.0f]];
    
    [lbl2 setBackgroundColor:[UIColor blackColor]];
    [lbl2 setTextColor:[UIColor whiteColor]];
    [lbl2 setAlpha:1.0];
    [lbl2 setFont:[UIFont systemFontOfSize:50.0f]];
    
    [lbl3 setBackgroundColor:[UIColor blackColor]];
    [lbl3 setTextColor:[UIColor whiteColor]];
    [lbl3 setAlpha:1.0];
    [lbl3 setFont:[UIFont systemFontOfSize:50.0f]];
    [lbl3 setBackgroundColor:[UIColor clearColor]];

    [lbl4 setBackgroundColor:[UIColor colorWithWhite:0.0f alpha:0.5]];
    [lbl4 setTextColor:[UIColor whiteColor]];
    [lbl4 setAlpha:1.0];
    [lbl4 setFont:[UIFont systemFontOfSize:50.0f]];

    
    [self.view setBackgroundColor:[UIColor orangeColor]];
    
    [self.view addSubview:lbl1];
    [self.view addSubview:lbl2];
    [self.view addSubview:vwbg];
    [self.view addSubview:lbl3];
    [self.view addSubview:lbl4];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
