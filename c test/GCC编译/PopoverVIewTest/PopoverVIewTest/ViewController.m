//
//  ViewController.m
//  PopoverVIewTest
//
//  Created by xukaitiankevin on 16/6/4.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
{
    UIView* _popHintView;
}
@property(nonatomic,strong)UIPopoverController* popview;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view setBackgroundColor:[UIColor redColor]];
    
    
    UIViewController*popvc=[[UIViewController alloc] init];
    [popvc.view setBackgroundColor:[UIColor blueColor]];
    [popvc.view setFrame:self.view.bounds];
    
    self.popview = [[UIPopoverController alloc] initWithContentViewController:popvc];
    
    _popHintView=[[UIView alloc] initWithFrame:CGRectMake(0, 0, 300, 600)];
    [_popHintView setBackgroundColor:[UIColor orangeColor]];
    [self.view addSubview:_popHintView];
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



-(IBAction)handleTap:(id)sender
{
    static BOOL present = NO;
    
    if (!present) {
        [self.popview setPopoverContentSize:_popHintView.frame.size];
//        [self.popview presentPopoverFromRect:CGRectMake(_popHintView.frame.size.width/2, 0, 0, 0) inView:self.view permittedArrowDirections:UIPopoverArrowDirectionLeft animated:YES];
        
    }
    else
    {
//        [self.popview dismissPopoverAnimated:YES];
    }
    
}

@end
