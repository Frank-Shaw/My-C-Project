#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("��������Ǽ����ĵ�������֮��\n");                         //ע�� 
    printf("�������ȡ�ļ�·��\n");                                 //��ʾ 
    char name1[100],name2[100];                                     //���������������ļ�·�� 
    char c,ctemp,type[10];                                          //������� 
    int number,s=0,i=0;
    scanf("%s",&name1);                                             //�����ȡ�ļ�����·��
    FILE *fp1;                                                 //���������ļ�ָ��
    if((fp1=fopen(name1,"r"))==NULL)                                //�ж��ļ��Ƿ���� 
    {
        printf("���ܴ��ļ�\n");                                   
        printf("���������г���\n");                                    
        system("pause\n");
        exit(0);
    }
    while((c=fgetc(fp1))!=EOF)                                      //����һ���ַ����ж��ǲ����ĵ���β
    {
        if(c!=' ')                                                  //������ǿո���ô��ʼͳ�� 
        {
            number=0;                                               //��ʼ������ 
            number=(c-'0');                                         //�������� 
            while((c=fgetc(fp1))!=' '&&c!=EOF&&c!=012)                      //������������������ 
            {
                number*=10;                                         //�����ۼ� 
                number+=(c-'0');
            }
            s+=number;                                              //�����ܺ� 
            i++;
        }
    }
    printf("%d\n",s);                                               //���������� 
    printf("%d\n",i);                                               //ͳ�����ָ��� 
    fclose(fp1);                                                    //�ر��ļ� 
    printf("�������!\n");
    system("pause\n");
    return 0;
}
