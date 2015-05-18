#include<iostream>
using namespace std;

bool num[10]={0};

void fun( int deep, long long x )
{
	if ( x%deep )
		return ;
	if ( deep == 10 ){
		cout<<x<<endl;
		return ;
	}
	for ( int i = 0 ; i <= 9; i++ )
    if ( !num[i] )
	{
		num[i]=true;
		fun(deep+1 , x*10+i);
		num[i]=false;
	}
	return ;
}

int main()
{
	for ( int i = 1; i <= 9; ++i ){
		num[i]=true;
		fun( 1, i);
		num[i]=false;
	}
	getchar();
	getchar();
	return 0;
}

