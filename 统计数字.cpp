#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("这个程序是计算文档中数字之和\n");                         //注释 
    printf("请输入读取文件路径\n");                                 //提示 
    char name1[100],name2[100];                                     //定义两个数组存放文件路径 
    char c,ctemp,type[10];                                          //定义变量 
    int number,s=0,i=0;
    scanf("%s",&name1);                                             //输入读取文件名的路径
    FILE *fp1;                                                 //定义两个文件指针
    if((fp1=fopen(name1,"r"))==NULL)                                //判断文件是否存在 
    {
        printf("不能打开文件\n");                                   
        printf("请重新运行程序\n");                                    
        system("pause\n");
        exit(0);
    }
    while((c=fgetc(fp1))!=EOF)                                      //读入一个字符，判断是不是文档结尾
    {
        if(c!=' ')                                                  //如果不是空格，那么开始统计 
        {
            number=0;                                               //初始化变量 
            number=(c-'0');                                         //存入数字 
            while((c=fgetc(fp1))!=' '&&c!=EOF&&c!=012)                      //继续往后，若还有数字 
            {
                number*=10;                                         //数字累加 
                number+=(c-'0');
            }
            s+=number;                                              //存入总合 
            i++;
        }
    }
    printf("%d\n",s);                                               //输出这个数字 
    printf("%d\n",i);                                               //统计数字个数 
    fclose(fp1);                                                    //关闭文件 
    printf("处理完毕!\n");
    system("pause\n");
    return 0;
}
