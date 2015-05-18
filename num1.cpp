/* 
*time:2010.8.17,23 
*problem:num *描述：有一个十位数·前N位能被N整除· 且所有数字只出现一次·！！ 求这个十位数· 
*author：carwest 
*实现方法：使用递归，从高位到低生成数字。依次判断。 
*ver:1.0
*/
#include<iostream>
using namespace std;

bool num[10]={0}; //用来判断数字是否使用过

void fun( int deep, long long x )  // deep表示当前数字的长度，x为当前数字{ 
{
	if ( x%deep )	// 如果当前数字已经不满足要求，返回 
		return ;
	if ( deep == 10 ){	// 如果满足长度的条件，输出 
		cout<<x<<endl;
		return ;
	}
	for ( int i = 0 ; i <= 9; i++ ) if ( !num[i] )
	{
		num[i]=true;
		fun(deep+1 , x*10+i);	// 此处调用深层的递归，增加深度，生成新的数字 
		num[i]=false;	//记得赋值为0
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
	return 0;
}

