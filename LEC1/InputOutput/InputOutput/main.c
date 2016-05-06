//
//  main.c
//  InputOutput
//
//  Created by xukaitiankevin on 16/5/6.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    char buffer[5]={0};
    
    do{
        char* p=fgets(buffer, 5, stdin);
        if (p) {
            printf("%x %x %x %x %x:::%lu",p[0],p[1],p[2],p[3],p[4],strlen(buffer));
            printf("\n");
        }
        else if(feof(stdin))
        {
            fputs("end\n", stdout);
        }
        else{
            fputs("error", stderr);
        }
    }
    while(1);
    
    return 0;
}
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