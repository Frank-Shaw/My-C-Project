#include<iostream>
using namespace std;
int main()
{
    int r;
    int a;
    bool k;
    for(a=99999;a>=10000;a--)
        {
               for(int i=1;i<=5;i++)
               {
                  r=1;
                  for(int e=1;e<=(5-i);e++)
                  {
                          r*=10;
                  }
                   if(((a/r)%i)==0)
                   {    
                         if(i==5)
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
