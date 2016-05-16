//
//  main.c
//  FileSystem
//
//  Created by xukaitiankevin on 16/5/16.
//  Copyright © 2016年 xukaitiankevin. All rights reserved.
//
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>

struct stat* getFileStat(char* filePath,int filemode,struct stat* fileStat);
void printStat(struct stat* stat);

int main(int argc, const char * argv[]) {
    // insert code here...
    //创建一个文件，并读取文件描述符对应的索引节点信息
//    int fd = open("file", O_CREAT|O_RDWR);
//    struct stat fdStat;
//    fstat(fd, &fdStat);
//    printStat(&fdStat);
    struct stat fdstat_file;
    printStat(getFileStat("file",O_CREAT|O_RDWR,&fdstat_file));
    //为文件创建link，读取索引节点信息
    
    int filelink = link("file", "filelink");
    link("filelink", "filelinklink");
    struct stat fdstat_filelink;
    printStat(getFileStat("filelink",O_RDWR,&fdstat_filelink));
    struct stat fdstat_filelinklink;
    printStat(getFileStat("filelinklink",O_CREAT|O_RDWR,&fdstat_filelinklink));
    //清除索引查看节点
    unlink("fileLink");
    printStat(getFileStat("filelinklink",O_CREAT|O_RDWR,&fdstat_filelinklink));
    
//    xukaitianqiyicomdeMac-mini:FileSystem xukaitian1$ sudo ./a.out
//    st_dev=>16777218
//    st_ino=>29616430
//    st_mode=>33024
//    st_nlink=>1
//    st_uid=>502
//    st_gid=>20
//    st_rdev=>0
//    =============
//    st_dev=>16777218
//    st_ino=>29616430
//    st_mode=>33024
//    st_nlink=>2
//    st_uid=>502
//    st_gid=>20
//    st_rdev=>0
//    =============
//    st_dev=>16777218
//    st_ino=>29616405
//    st_mode=>32896
//    st_nlink=>1
//    st_uid=>0
//    st_gid=>20
//    st_rdev=>0
//    =============
//    st_dev=>16777218
//    st_ino=>29616405
//    st_mode=>32896
//    st_nlink=>1
//    st_uid=>0
//    st_gid=>20
//    st_rdev=>0
//    =============
//    假如在file里面写入了数据
//    那么打开filelink也能看到，即使删除了file，filelink也存在
//    真正重要的是inode
    
    
    return 0;
}

struct stat* getFileStat(char* filePath,int filemode,struct stat* fileStat)
{
    struct stat fdStat;
//    execl("chmod", "777","./*",NULL);
    int fd = open(filePath, filemode);
    if (fd<0) {
        printf("无法读取文件\n");
        return NULL;
    }
    else
    {
        fstat(fd, &fdStat);
        *fileStat=fdStat;
        return fileStat;
    }
}

void printStat(struct stat* stat)
{
    if (stat == NULL) {
        printf("文件描述为空\n");
        return;
    }
    printf("st_dev=>%d\n",stat->st_dev);
    printf("st_ino=>%llu\n",stat->st_ino);
    printf("st_mode=>%d\n",stat->st_mode);
    printf("st_nlink=>%d\n",stat->st_nlink);
    printf("st_uid=>%d\n",stat->st_uid);
    printf("st_gid=>%d\n",stat->st_gid);
    printf("st_rdev=>%d\n",stat->st_rdev);
    printf("=============\n");
}


//dev_t	 	st_dev;		/* [XSI] ID of device containing file */
//ino_t	  	st_ino;		/* [XSI] File serial number */
//mode_t	 	st_mode;	/* [XSI] Mode of file (see below) */
//nlink_t		st_nlink;	/* [XSI] Number of hard links */
//uid_t		st_uid;		/* [XSI] User ID of the file */
//gid_t		st_gid;		/* [XSI] Group ID of the file */
//dev_t		st_rdev;	/* [XSI] Device ID */