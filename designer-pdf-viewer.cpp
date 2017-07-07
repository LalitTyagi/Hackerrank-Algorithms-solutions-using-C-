#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int h[26],n,j=0,max=0,a;
    for(int i=0;i<26;i++)
	{
       cin >> h[i];
    }
    string word;
    cin >> word;
    
    n=word.length();
    int w[n];
    for(int k=0;k<n;k++)
    {
    	if(word[k]=='a' || word[k]=='A')
    		w[k]=h[0];
    	else if(word[k]=='b' || word[k]=='B')
    		w[k]=h[1];
    	else if(word[k]=='c' || word[k]=='C')
    		w[k]=h[2];
    	else if(word[k]=='d' || word[k]=='D')
    		w[k]=h[3];
    	else if(word[k]=='e' || word[k]=='E')
    		w[k]=h[4];
    	else if(word[k]=='f' || word[k]=='F')
    		w[k]=h[5];
    	else if(word[k]=='g' || word[k]=='G')
    		w[k]=h[6];
    	else if(word[k]=='h' || word[k]=='H')
    		w[k]=h[7];
    	else if(word[k]=='i' || word[k]=='I')
    		w[k]=h[8];
		else if(word[k]=='j' || word[k]=='J')
    		w[k]=h[9];
		else if(word[k]=='k' || word[k]=='K')
    		w[k]=h[10];
		else if(word[k]=='l' || word[k]=='L')
    		w[k]=h[11];
		else if(word[k]=='m' || word[k]=='M')
    		w[k]=h[12];
		else if(word[k]=='n' || word[k]=='N')
    		w[k]=h[13];
		else if(word[k]=='o' || word[k]=='O')
    		w[k]=h[14];
		else if(word[k]=='p' || word[k]=='P')
    		w[k]=h[15];
		else if(word[k]=='q' || word[k]=='Q')
    		w[k]=h[16];
		else if(word[k]=='r' || word[k]=='R')
    		w[k]=h[17];
		else if(word[k]=='s' || word[k]=='S')
    		w[k]=h[18];
		else if(word[k]=='t' || word[k]=='T')
    		w[k]=h[19];
		else if(word[k]=='u' || word[k]=='U')
    		w[k]=h[20];
		else if(word[k]=='v' || word[k]=='V')
    		w[k]=h[21];
		else if(word[k]=='w' || word[k]=='W')
    		w[k]=h[22];
		else if(word[k]=='x' || word[k]=='X')
    		w[k]=h[23];
		else if(word[k]=='y' || word[k]=='Y')
    		w[k]=h[24];
    	else
    	w[k]=h[25];	
    }
    
    for(int k=0;k<n;k++)
    {
    	if(max<w[k])
    	max=w[k];
    }
    
    a=n*max;
    cout<<a;
    
    return 0;
}
