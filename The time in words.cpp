#include<iostream>
using namespace std;


int main()
{
	int m,n;
	cin>>m>>n;
	if(n>30)
	{
		m++;
	}
	int l=n;
	if(n>30 && n!=45)
	{
		n=n-30;
	}
		
	if(l!=0)
	{
			if(l<=30)
			{
				if(n==1)
				cout<<"one minute past ";
				else if(n==2)
				cout<<"two minutes past ";
				else if(n==3)
				cout<<"three minutes past ";
				else if(n==4)
				cout<<"four minutes past ";
				else if(n==5)
				cout<<"five minutes past ";
				else if(n==6)
				cout<<"six minutes past ";
				else if(n==7)
				cout<<"seven minutes past ";
				else if(n==8)
				cout<<"eight minutes past ";
				else if(n==9)
				cout<<"nine minutes past ";
				else if(n==10)
				cout<<"ten minutes past ";
				else if(n==11)
				cout<<"eleven minutes past ";
				else if(n==12)
				cout<<"twelve minutes past ";
				else if(n==13)
				cout<<"thirteen minutes past ";
				else if(n==14)
				cout<<"fourteen minutes past ";
				else if(n==15)
				cout<<"quarter past ";
				else if(n==16)
				cout<<"sixteen minutes past ";
				else if(n==17)
				cout<<"seventeen minutes past ";
				else if(n==18)
				cout<<"eighteen minutes past ";
				else if(n==19)
				cout<<"nineteen minutes past ";
				else if(n==20)
				cout<<"twenty minutes past ";
				else if(n==21)
				cout<<"twenty one minutes past ";
				else if(n==22)
				cout<<"twenty two minutes past ";
				else if(n==23)
				cout<<"twenty three minutes past ";
				else if(n==24)
				cout<<"twenty four minutes past ";
				else if(n==25)
				cout<<"twenty five minutes past ";
				else if(n==26)
				cout<<"twenty six minutes past ";
				else if(n==27)
				cout<<"twenty seven minutes past ";
				else if(n==28)
				cout<<"twenty eight minutes past ";
				else if(n==29)
				cout<<"twenty nine minutes past ";
				else if(n==30)
				cout<<"half past ";	
			}
			else if(l==45)
			cout<<"quarter to ";		
			else
			{
				if(n==29)
				cout<<"one minute to ";
				else if(n==28)
				cout<<"two minutes to ";
				else if(n==27)
				cout<<"three minutes to ";
				else if(n==26)
				cout<<"four minutes to ";
				else if(n==25)
				cout<<"five minutes to ";
				else if(n==24)
				cout<<"six minutes to ";
				else if(n==23)
				cout<<"seven minutes to ";
				else if(n==22)
				cout<<"eight minutes to ";
				else if(n==21)
				cout<<"nine minutes to ";
				else if(n==20)
				cout<<"ten minutes to ";
				else if(n==19)
				cout<<"eleven minutes to ";
				else if(n==18)
				cout<<"twelve minutes to ";
				else if(n==17)
				cout<<"thirteen minutes to ";
				else if(n==16)
				cout<<"fourteen minutes to ";
				else if(n==14)
				cout<<"sixteen minutes to ";
				else if(n==13)
				cout<<"seventeen minutes to ";
				else if(n==12)
				cout<<"eighteen minutes to ";
				else if(n==11)
				cout<<"nineteen minutes to ";
				else if(n==10)
				cout<<"twenty minutes to ";
				else if(n==9)
				cout<<"twenty one minutes to ";
				else if(n==8)
				cout<<"twenty two minutes to ";
				else if(n==7)
				cout<<"twenty three minutes to ";
				else if(n==6)
				cout<<"twenty four minutes to ";
				else if(n==5)
				cout<<"twenty five minutes to ";
				else if(n==4)
				cout<<"twenty six minutes to ";
				else if(n==3)
				cout<<"twenty seven minutes to ";
				else if(n==2)
				cout<<"twenty eight minutes to ";
				else if(n==1)
				cout<<"twenty nine minutes to ";
			}
	}
	
	
		if(m==1)
		cout<<"one";
		else if(m==2)
		cout<<"two";
		else if(m==3)
		cout<<"three";
		else if(m==4)
		cout<<"four";
		else if(m==5)
		cout<<"five";
		else if(m==6)
		cout<<"six";
		else if(m==7)
		cout<<"seven";
		else if(m==8)
		cout<<"eight";
		else if(m==9)
		cout<<"nine";
		else if(m==10)
		cout<<"ten";
		else if(m==11)
		cout<<"eleven";
		else if(m==12)
		cout<<"twelve";
	
	
	if(l==0)
	{
		cout<<" o'clock";
	}
	return 0;
}
