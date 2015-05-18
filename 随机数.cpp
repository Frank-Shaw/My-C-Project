#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("输入n，产生1~n的随机数\n");
	printf("输入0结束\nn=");
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
			
	        printf("第%d随机数%d\n",++i,random);
	        system("pause\n"); 
	    }
	}
	return 0;
}
