#include<iostream>
using namespace std;

int main()
{
	int mat[3][3];
	int arr[9]={0};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>mat[i][j];
			arr[mat[i][j]-1]=mat[i][j];
		}
	}
	
	for(int i=0;i<9;i++)
	cout<<arr[i];
	
	return 0;
}
