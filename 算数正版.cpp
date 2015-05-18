#include<iostream>
using namespace std;
int main()
{
    int digui();
    int a[10],b;
    b=digui();
    cout<<b<<endl;
    return 0;
}

int digui(int a)
{
     int i=0;
     return digui(a[i-1]);
}
