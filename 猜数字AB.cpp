#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int r,number,a,b,c,d,m=0,n=0,i=10;
    srand(time(0));
    r=rand()%100;
    if(r==0)
    r+1;
    cout<<"输入一个两位数。\n";
    while(i)
    {
            m=n=0;
    //      cout<<r<<"\n";
    i--;
    cin>>number;
    a=number/10;
    b=number%10;
    c=r/10;
    d=r%10;
    if(a==c)
    m++;
    if(b==d)
    m++;
    if(a==d)
    n++;
    if(b==c)
    n++;
    cout<<m<<"A"<<n<<"B\n";
    if(m==2)
    {
    cout<<"猜对了！\n";
    cout<<"你一共猜了"<<10-i<<"次\n";
    break;
    }    
    else cout<<"你还剩余"<<i<<"次\n"; 
    }
    switch(11-i){
    case 2: cout<<"你是天才！！";break;
    case 3: ;
    case 4: cout<<"不错喔！";break;
    case 5: ;
    case 6: ;
    case 7: cout<<"运气好啊。";break;
    case 8: ;
    case 9: ;
    case 10: cout<<"差一点就挂掉了~~";break;
    case 11:cout<<"你的次数已经用完，下次努力！";break;
    }
    cout<<"\a";
    getchar();
    getchar();
    return 0;
}
