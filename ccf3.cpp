#include<iostream> 

using namespace std;

int main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<*p<<endl;
	*p=20;
	cout<<a;
	
	return 0;

}