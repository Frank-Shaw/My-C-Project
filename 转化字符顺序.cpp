#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//�˳��������λ������ż��λ���ֵ���λ�ã��������������b.txt�ļ��� 
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
    fp=fclose(fp);          ���ļ����뺺�֣�δ��ɣ�*/
    fp=fopen("C:\\Users\\Frank.Frank-computer\\Desktop\\b.txt","w");
    fputs(a,fp);
    system("pause\n");
    return 0;
}
