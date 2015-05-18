#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    bool t;
    scanf("%d",&a);
    for(int b=2;b<=a;b++)
    {
        t=true;
        for(int c=2;c<=sqrt(b);c++)
            if(b%c==0)
            {
                t=false;
                break;
            }
        if(t)
            printf("%d\t",b);
    }
    system("pause\n");
    return 0;
}
