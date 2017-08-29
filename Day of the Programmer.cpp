#include<iostream>
using namespace std;

int main()
{
	int date,year;
	date=13;
	cin>>year;
	
	
	if( ((year<=1917)&&(year%4==0)) || ((year>=1918) && (year%400==0 || (year%4==0 && year%100!=0))) )
	{
			date=12;
	}

	if(year==1918)
	date=26;
	
	cout<<date<<".09."<<year;
	
	return 0;
}
