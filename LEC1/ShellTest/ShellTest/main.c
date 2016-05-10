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
    
//    char cmd[10]="/bin/ls";
//    
//    char* args[10];
//    args[0]="ls";
//    args[1]="-a";
//    args[2]="-l";
//    args[3]=0;
//    
//    printf("%s %s",args[0],args[3]);
//    
//    execv(cmd, args);
//---------------------------------------------------------------

    char buffer[1024];
    memset(buffer,'\0',1024);
    
    FILE* fp=NULL;
    fp=popen("ls -a -l", "r+");

    FILE* localFile=fopen("local", "w+");
    
    int size=sizeof(buffer);
    fread(buffer, sizeof(char), size, fp);
    printf("%s",buffer);
    fputs(buffer, localFile);
    
    pclose(fp);
    fclose(localFile);

//---------------------------------------------------------------
//    sprintf("ls -a -l", "")
//    
//    
//    getchar();
//    return 0;
}


void logFile(const char* filePath)
{
    FILE* fp=fopen(filePath, "r");
    
    char buffer[10];
    
    
    
    while (!feof(fp)) {
        memset(buffer, '\0', 10);
        
        char* result=NULL;
        
        result = fgets(buffer,10, fp);
        
        if(result!=NULL)
        {
            printf("read file:::%s",buffer);
        }
        else if(ferror(fp))
        {
            printf("read file error");
        }
        else
        {
            printf("unknow");
        }
            
    }
    
    
    
    fclose(fp);
    
}
