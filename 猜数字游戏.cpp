#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   
    srand(time(0));
    int number,r,i=10,j=1;
    cout<<"����һ������\n";
    r=rand()%1000+1;
    while(i)
    {
    i--;
    cin>>number;
    if(number==r)
    {
        cout<<"��ϲ��¶��ˣ�\n";
        cout<<"��һ������"<<10-i<<"��\n";
        j=0;
        break;
    }
    else
        number<r?
        cout<<"��С�ˣ�\n"<<"�㻹ʣ��"<<i<<"��\n":
        cout<<"�´��ˣ�\n"<<"�㻹ʣ��"<<i<<"��\n";
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
