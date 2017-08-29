#include<iostream>
using namespace std;

int main()
{
	int amount,nK,nU;
	cin>>amount>>nK>>nU;
	
	int Key[nK];
	int USB;
	
	for(int i=0;i<nK;i++)
	{
		cin>>Key[i];
	}
	
	int max=-1;
	
	for(int i=0;i<nU;i++)
	{
		cin>>USB;
		for(int j=0;j<nK;j++)
		{
			cout<<USB + Key[j]<<"\n";
			if((max < USB + Key[j] ) && (amount >= USB + Key[j] ))
			{
				max=USB + Key[j];
			}
		}
	}
	
	cout<<max;
	
}
