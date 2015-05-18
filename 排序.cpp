#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    sort(a[0],a[4]);
    for(int i=0;i<5;i++)
        cout<<a[i];
    system("pause");
    return 0;
}
