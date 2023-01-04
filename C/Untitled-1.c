#include <stdio.h>
#pragma warning(disable:4996)//VS下一定要这个！
int main(){
    
    printf("Hello, World!\n");
    printf("蔡哥来了");

    // FILE *fp = fopen("E:/temp/test.txt", "a+");
    // FILE* f = fopen("D:/a.txt", "a+");

    // FILE *fp = fopen("D:/a.txt", "a+");
    FILE *fp = fopen("E:/temp/test.txt", "a+");
    
    if(fp == NULL){
        printf("打开文件失败！");
        exit(0);
    }

    for (int i = 0; i < 10000; ++i) {
        fputs("冲冲冲！！！", fp);
    }
    fclose(fp);
    return 0;
}