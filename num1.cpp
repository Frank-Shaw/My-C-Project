/* 
*time:2010.8.17,23 
*problem:num *��������һ��ʮλ����ǰNλ�ܱ�N������ ����������ֻ����һ�Ρ����� �����ʮλ���� 
*author��carwest 
*ʵ�ַ�����ʹ�õݹ飬�Ӹ�λ�����������֡������жϡ� 
*ver:1.0
*/
#include<iostream>
using namespace std;

bool num[10]={0}; //�����ж������Ƿ�ʹ�ù�

void fun( int deep, long long x )  // deep��ʾ��ǰ���ֵĳ��ȣ�xΪ��ǰ����{ 
{
	if ( x%deep )	// �����ǰ�����Ѿ�������Ҫ�󣬷��� 
		return ;
	if ( deep == 10 ){	// ������㳤�ȵ���������� 
		cout<<x<<endl;
		return ;
	}
	for ( int i = 0 ; i <= 9; i++ ) if ( !num[i] )
	{
		num[i]=true;
		fun(deep+1 , x*10+i);	// �˴��������ĵݹ飬������ȣ������µ����� 
		num[i]=false;	//�ǵø�ֵΪ0
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

