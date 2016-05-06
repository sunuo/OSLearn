//
//  main.c
//  ShellTest
//
//  Created by xukaitiankevin on 16/5/5.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
    
    char cmd[10]="/bin/ls";
    
    char* args[10];
    args[0]="ls";
    args[1]="-a";
    args[2]="-l";
    args[3]=NULL;
    
    printf("%s %s",args[0],args[3]);
    
    execv(cmd, args);
    
    getchar();
    
    return 0;
}
