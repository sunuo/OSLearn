//
//  main.c
//  BitOperation
//
//  Created by xukaitiankevin on 16/5/22.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//
#define TEST_LINE "sb_trest"
#include <stdio.h>

void gdbtest();

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World! %s\n",TEST_LINE);
    
    gdbtest();
    
    int pa=0x1111;
    int size=0x200;
    pa&=~(size-1);
    
    printf("%d  %d \n",pa,~(size-1));
    printf("%x  %x \n",pa,~(size-1));
    
    return 0;
}


void gdbtest()
{
    int test=100;
    printf("test:::%d\n",test);
    
}
