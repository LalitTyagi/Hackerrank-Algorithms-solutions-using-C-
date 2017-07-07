#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,a,b,c,d;
	cin>>n;
	int arr[n];
	for(int e=0;e<n;e++)
		arr[e]=0;
		
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		string arr1[a];
		for(int j=0;j<a;j++)
				cin>>arr1[j];
				
		cin>>c>>d;
		string arr2[c];
		for(int l=0;l<c;l++)
				cin>>arr2[l];
				
								
		for(int j=0;j<=a-c;j++)
		
		{
			for(int k=0;k<=b-d;k++)
			{
				a=0;
				if(arr1[j][k]==arr2[0][0])
				{
					cout<<j;
				  for(int l=0;l<c;l++)
					for(int m=0;m<d;m++)
						{
							if(arr1[j+l][k+m]==arr2[l][m])
								{
								a++;
								cout<<"sdfghj";
								}
							else
								break;
								break;
						}
						
				}
				//cout<<a;
				if(a==c*d)
						{
							arr[i]=1;
							break;
						}
			}
			
		}	
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
	}
	
	
	return 0;
}
