//
//  main.c
//  InputOutput
//
//  Created by xukaitiankevin on 16/5/6.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void logFile(const char* filePath);
void printVariables(int first,...);

int main(int argc, const char * argv[]) {
// insert code here...
//---------------------------------------------------------------------------------------
//    char buffer[5]={0};
    
//    do{
//        char* p=fgets(buffer, 5, stdin);
//        if (p) {
//            printf("%x %x %x %x %x:::%lu",p[0],p[1],p[2],p[3],p[4],strlen(buffer));
//            printf("\n");
//        }
//        else if(feof(stdin))
//        {
//            fputs("end\n", stdout);
//        }
//        else{
//            fputs("error", stderr);
//        }
//    }
//    while(1);
    
    
    //结果
    //123
    //31 32 33 a 0:::4
    //1234
    //31 32 33 34 0:::4
    //a 0 33 34 0:::1
    
    
    //结论
    //fgets(buffer,number,stdin)
    //1 只能有效读取number-1个字符，包括换行符，超过number-1的，被截取，最后一个字符要填充\0
    //2 读取后缓冲区中，结束字符是 \0
    
    //问题：在读取文件的时候应用
//---------------------------------------------------------------------------------------
//    logFile("test");
    
//    文件内容：
//    abcdefjhijklmnopq
//    rstuvwxyz12345678
//    结果：
//    read file:::abcdefjhi.read file:::jklmnopq
//    .read file:::rstuvwxyz.read file:::12345678
//    结论：
//    读文件和读取控制台输入一致
//---------------------------------------------------------------------------------------
    
    return 0;
}

//读取文件并输出
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
            printf("read file:::%s.",buffer);
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

