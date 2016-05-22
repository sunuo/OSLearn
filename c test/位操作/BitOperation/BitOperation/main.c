//
//  main.c
//  BitOperation
//
//  Created by xukaitiankevin on 16/5/22.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    int pa=0x1111;
    int size=0x200;
    pa&=~(size-1);
    
    printf("%d  %d \n",pa,~(size-1));
    printf("%x  %x \n",pa,~(size-1));
    
    return 0;
}
