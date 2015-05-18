#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100]={0},i=1,l=0;
    for(;a[i-1]!=-1;)                             //以此把数字放入数组。 
        scanf("%d",&a[i++]);
    for(int j=0;j<=i-2;i--,l++)
            for(int k=0;k<=i-2;k++)
                    {
                         if(a[k]>a[k+1])
                         {
                                        int temp=a[k];
                                        a[k]=a[k+1];
                                        a[k+1]=temp;
                         }
                    }
    for(int m=2;m<=l;m++)
            printf("%d\t",a[m]);
	system("pause\n");
	return 0;
}
