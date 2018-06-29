//
//  main.c
//  作业1
//
//  Created by 赵一波 on 2018/6/29.
//  Copyright © 2018年 赵一波. All rights reserved.
//

#include(stdio.h)
struct student
{
    int stu_id;
    char stu_name;
    char stu_sex;
    int stu_dateofbirth;
    char stu_clsdd;
    char stu_phoneNO;
    float stu_judge1;
    float stu_judge2;
    float stu_judge3;
    float stu_judge4;
    float stu_judge5;
    float stu_score;
    struct student *next;
}student1,student2;
int main(){
    char ch;
    ch=fgetc(fp);
    struct student p[2];
    FILE * fp1 = fopen("input.txt","r");
    FILE * fp2 = fopen("output.txt","w");
    if(fp1==NULL||fp2==NULL){
        printf("打开文件失败")；
        exit(-1);
    }
    while(fgetc!=EOF){
        while(fgetc!=getchar){
            while(fgetc!=','){
                
            }
        }
    }
    struct student *head,*p;
    head=&student1;
    student1.next=&student2;
    student2.next=0;
    p=head;
    fclose(fp1);
    fclose(fp2);
    return 0;
}
