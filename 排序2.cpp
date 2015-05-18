#include <iostream>
#include <stdlib>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<5;i++)
            cin>>a[i];
    sort(a[0],a[4]);
    for(int j=0;j<5;j++)
            cout<<a[j];
    system("pause");
    return 0;
}
