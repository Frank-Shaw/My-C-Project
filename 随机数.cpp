#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("����n������1~n�������\n");
	printf("����0����\nn=");
	srand(time(0));
	int i,n,c,random;
	
	scanf("%d",&n);
	while(n)
	{
		i=0;
		while(1)
		{
			random=(rand()*rand())%n+1;
			random=(random*rand())%n+1;
			
	        printf("��%d�����%d\n",++i,random);
	        system("pause\n"); 
	    }
	}
	return 0;
}
