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
    cout<<"����һ����λ����\n";
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
    cout<<"�¶��ˣ�\n";
    cout<<"��һ������"<<10-i<<"��\n";
    break;
    }    
    else cout<<"�㻹ʣ��"<<i<<"��\n"; 
    }
    switch(11-i){
    case 2: cout<<"������ţ���";break;
    case 3: ;
    case 4: cout<<"����ร�";break;
    case 5: ;
    case 6: ;
    case 7: cout<<"�����ð���";break;
    case 8: ;
    case 9: ;
    case 10: cout<<"��һ��͹ҵ���~~";break;
    case 11:cout<<"��Ĵ����Ѿ����꣬�´�Ŭ����";break;
    }
    cout<<"\a";
    getchar();
    getchar();
    return 0;
}
