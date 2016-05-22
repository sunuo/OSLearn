//
//  ViewController.m
//  TextViewTest
//
//  Created by xukaitiankevin on 16/5/20.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UITextView* text=[[UITextView alloc] initWithFrame:CGRectMake(0, 40, 300, 300)];
    
    [self.view addSubview:text];
    
    
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
