#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long int m,l,k,j,i,a,b;
	string arr[n];
	long long int arr1[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		b=-1;
		l=arr[i].length();
		k=l/2;
		for(j=0;j<k;j++)
		{
			a=abs((int)arr[i][j]-(int)arr[i][l-j-1]);
			if(a!=0)
			{
				if(((int)arr[i][j+1]-(int)arr[i][l-j-1])==0)
					{
						b=j;
						break;
					}
				else
					{
						b=l-j-1;
						break;
					}
			}
			
		}
		
		arr1[i]=b;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr1[i]<<"\n";
	}
	
	return 0;
}



/*

#include<stdio.h>
#include<string.h>
char a[1000005];
char b[1000005];
int is(char *a, int n){
	int i;
	for(i=0;i<n/2;i++)if(a[i]!=a[n-1-i])return i;
	return -1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		
		scanf("%s",&a);
		int l = strlen(a);
		int x = is(a,l);
		if(x==-1){
			printf("-1\n");
		}
		else {
			int i;
			int j=0;
			for(i=0;a[i];i++){
				if(i!=x)b[j++] = a[i];
				
			
			}
				if(is(b,l-1)==-1)printf("%d\n",x);
				else printf("%d\n",l-1-x);
		}
	}
}


*/
