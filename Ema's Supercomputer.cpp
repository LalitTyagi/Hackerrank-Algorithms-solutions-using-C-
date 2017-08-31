#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int m,n,i,j,k,ans=0;
char s[20][20];

int cal()
{
    int x,y,ss=0,p;
    for (k=0;k<min(min(i+1,m-i),min(j+1,n-j));k++)
        if (s[i+k][j]=='B' || s[i-k][j]=='B' || s[i][j+k]=='B' || s[i][j-k]=='B')
            break;
        else
        {
            s[i+k][j]=s[i-k][j]=s[i][j+k]=s[i][j-k]='B';
            for (x=0;x<m;x++)
                for (y=0;y<n;y++)
                    if (s[x][y]=='G') 
                    {
                        for (p=0;p<min(min(x+1,m-x),min(y+1,n-y));p++)
                            if (s[x+p][y]=='B' || s[x-p][y]=='B' || s[x][y+p]=='B' || s[x][y-p]=='B')
                                break;

                            ss=max(ss,(k*4+1)*(p*4-3));
                    }
        }
    for (k--;k>=0;k--)
        s[i+k][j]=s[i-k][j]=s[i][j+k]=s[i][j-k]='G';
    return ss;
}

int main() {
    cin>>m>>n;
    for (i=0;i<m;i++)
        scanf("%s",s[i]);
    for (i=0;i<m;i++)
    for (j=0;j<n;j++)
    if (s[i][j]=='G')
    ans=max(ans,cal());
    cout<<ans<<endl;
    return 0;
}
