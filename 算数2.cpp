#include<iostream>
using namespace std;
int main()
{
    int r;
    long long a;
    bool k;
    for(a=999999999;a>=100000000;a--)
        {
               for(int i=1;i<=9;i++)
               {
                  r=1;
                  for(int e=1;e<=(9-i);e++)
                  {
                          r*=10;
                  }
                   if(((a/r)%i)==0)
                   {    
                         if(i==9)
                        {
                        cout<<a<<endl;
                        break;
                        }
                       
                   }
                   else 
                   break;

               }
        }
    getchar();
    getchar();
    return 0;
}
