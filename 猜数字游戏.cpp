#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   
    srand(time(0));
    int number,r,i=10,j=1;
    cout<<"输入一个数。\n";
    r=rand()%1000+1;
    while(i)
    {
    i--;
    cin>>number;
    if(number==r)
    {
        cout<<"恭喜你猜对了！\n";
        cout<<"你一共猜了"<<10-i<<"次\n";
        j=0;
        break;
    }
    else
        number<r?
        cout<<"猜小了！\n"<<"你还剩余"<<i<<"次\n":
        cout<<"猜大了！\n"<<"你还剩余"<<i<<"次\n";
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
