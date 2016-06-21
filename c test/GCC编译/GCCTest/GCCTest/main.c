//
//  main.c
//  GCCTest
//
//  Created by xukaitiankevin on 16/5/23.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#include <stdio.h>
#include "HelpOne.h"
void  printself()
{
    printf("i  a艾玛   me\n");
}

int main(int argc, const char * argv[]) {
    // insert code here.    ..
    printf("Hello, SB-------------------------\n");
    
    void(*p)();
    p=printself;
    p();
    (*p)();
//    printf("%x  %x\n",p,*p);
    printf("%x\n",~0xff);
//    printHelp();
    
    printf("ByeBye, SB-------------------------\n");
    
    unsigned int i = 0x00646c72;
    printf("H%x Wo%s\n", 57616, &i);
    
    
    
    int c[2]={10,9};
    printf("x=%d y=%d\n",c[0]);
    
    return 0;
}
