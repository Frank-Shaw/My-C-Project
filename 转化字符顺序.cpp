#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//此程序把奇数位汉字与偶数位汉字调换位置，并且在桌面输出b.txt文件。 
int main()
{
    char a[40]={'0'};
    FILE *fp;
    gets(a);
    for(int i=0,j=1;(a[i+2]!='\0'&&a[j+2]!='\0');i+=4,j+=4)
    {
        char temp;
        temp=a[i];
        a[i]=a[i+2];
        a[i+2]=temp;
        temp=a[j];
        a[j]=a[j+2];
        a[j+2]=temp;
    }
    /*fp=fopen("C:\\Users\\Frank.Frank-computer\\Desktop\\a.txt","r");
    fgets(a,(int)fp);
    fp=fclose(fp);          从文件读入汉字（未完成）*/
    fp=fopen("C:\\Users\\Frank.Frank-computer\\Desktop\\b.txt","w");
    fputs(a,fp);
    system("pause\n");
    return 0;
}
