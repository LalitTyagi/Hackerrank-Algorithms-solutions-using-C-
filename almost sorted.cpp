#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long n,d,i,k;
	d=k=0;
	cin>>n;
	int a[n],b[n],c[n];
	int a1[2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	
	sort(b+0,b+n);
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		k++;
	}
	
	if(k==0)
	{
		cout<<"yes";
	}
	else if(k==2)
	{
		d=1;
	}
	else if(k>2)
	{
		d=2;
	}
	
	if(d==1)
	{
		int q=0;
		for(i=0;i<n;i++)
			if(a[i]!=b[i])
			{
				a1[q]=i;
				q++;
			}
			
		cout<<"yes\n";
		cout<<"swap "<<a1[0]+1<<" "<<a1[1]+1;
	}
	else if(d==2)
	{
		int p=0,q=0;
		
		for(i=0;i<n;i++)
			if(a[i]!=b[i])
			{
				a1[q]=i;
				q++;
				break;
			}
		for(i=n-1;i>=0;i--)
			if(a[i]!=b[i])
			{
				a1[q]=i;
				break;
			}	
			
		int w,w1;
		w=a1[0];
		w1=a1[1]+1;
			
		reverse(a+w,a+w1);
	
		//for(i=0;i<n;i++)
			//cout<<a[i];
		
		for(i=0;i<n;i++)
			if(a[i]!=b[i])
			{
				p++;
				//cout<<p;
				break;
			}
		if(p==0)
		{
			cout<<"yes\n";
			cout<<"reverse "<<a1[0]+1<<" "<<a1[1]+1;
		}
		else
		cout<<"no";	
	}
	
	
	return 0;
}
