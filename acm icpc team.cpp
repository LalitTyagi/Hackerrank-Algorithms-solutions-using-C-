#include<iostream>
using namespace std;

int main()
{
	long n,m,p,q,r=0,s,t=0;
	cin>>n>>m;
	string a1[n];//[m];
	long a2[m];
	//long long int a3[100000];
	int* a3 = new int[10000000];
	
	for(long i=0;i<n;i++)
	//for(int j=0;j<m;j++)
	cin>>a1[i];//[j];
	
	for(long i=0;i<n-1;i++)
	{
		p=0;
		q=m;
		for(long j=0;j<m;j++)
		{
			if(a1[i][j]=='0')
			{
				a2[p]=j;
				//cout<<a2[p]<<"\n";
				q--;
				//cout<<q;
				p++;
			}
		}
		s=q;
		for(long k=i+1;k<n;k++)
		{
			q=s;
			for(long l=0;l<p;l++)
			{
				if(a1[k][a2[l]]=='1')
				{
					q++;
				}
			}
			a3[r]=q;
			//cout<<q;
			r++;
		}
	}
	
	/*for(int i=0;i<r;i++)
	cout<<a3[i]<<" ";*/
	int max=a3[0];
	for(int i=1;i<r;i++)
	{
		if(max<a3[i])
		max=a3[i];
	}
	 
	cout<<max<<"\n";
	 
	 for(long i=0;i<r;i++)
	 {
	 	if(a3[i]==max)
	 	t++;
	 }
	 cout<<t;



	/* 
	
	4 5
	1 0 1 0 1
	1 1 1 0 0
	1 1 0 1 0
	0 0 1 0 1
	
	
	*/
	
	
	return 0;
}
