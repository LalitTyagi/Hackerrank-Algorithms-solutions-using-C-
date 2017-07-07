#include <iostream>
#include <cstdio>
using namespace std;

void update(int *a,int *b)
{
	int c;
	c=*a+*b;
	if(*a>*b)
	{
		*b=*a-*b;		
	}
	else
		*b=*b-*a;
		*a=c;
}

int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	update(&a,&b);
	cout<<a<<"\n";
	cout<<b;
}
