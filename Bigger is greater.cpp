#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findNext(int *number, int n)
{
    int i, j;
    char arr2[n];
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1]) 
           break;
           
    if (i==0)
    {
        cout <<"no answer";
        return 0;
    }
 
    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;
 
    swap(&number[smallest], &number[i-1]);
    sort(number+i, number+n);
    for(int k=0;k<n;k++)
    {
    	arr2[k]=number[k];
    }
    
    for(int k=0;k<n;k++)
    {
    cout<<arr2[k];
    }
 
    return 0;
}

int main()
{
	int n,a;
	cin>>n;
	string arr[n];
	int arr1[1000];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
		a=arr[i].size();
		
		for(int j=0;j<a;j++)
		{
			arr1[j]=arr[i][j];	
		}
		findNext(arr1,a);
		cout<<"\n";
		
	}
}
