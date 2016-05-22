//
//  ViewController.m
//  NSDicTest
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
    NSMutableDictionary* dic=[[NSMutableDictionary alloc] init];
    NSString* v1=nil;
    NSString* v2=nil;
//    [dic setObject:v1 forKey:@"V1"];
    [dic setValue:v2 forKey:@"V2"];//value为nil 过滤
    [dic setObject:@"" forKey:@"V9"];//value为nil 过滤
    
    if(dic.count>0){
        for (NSString* string in [dic allValues]) {
            NSLog(@"%@",string);
        }
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
