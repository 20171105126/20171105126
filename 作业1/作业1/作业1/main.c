//
//  main.c
//  作业1
//
//  Created by 赵一波 on 2018/6/29.
//  Copyright © 2018年 赵一波. All rights reserved.
//

#include<stdio.h>
int a;
char b,c[100];
int main(){
    FILE * fp1 = fopen("input.txt", "r");//打开输入文件
    FILE * fp2 = fopen("output.txt", "w");//打开输出文件
    if (fp1==NULL || fp2==NULL) {//若打开文件失败则退出
        puts("不能打开文件！");
        rturn 0;
    }
    fscanf(fp1,"%d",&a);//从输入文件读取一个整数
    b=fgetc(fp1);//从输入文件读取一个字符
    fgets(c,100,fp1);//从输入文件读取一行字符串
    
    printf("%ld",ftell(fp1));//输出fp1指针当前位置相对于文件首的偏移字节数
    
    fputs(c,fp2);//向输出文件写入一行字符串
    fputc(b,fp2);//向输出文件写入一个字符
    fprintf(fp2,"%d",a);//向输出文件写入一个整数
    
    fclose(fp1);//关闭输入文件
    fclose(fp2);//关闭输出文件，相当于保存
    return 0;
}
