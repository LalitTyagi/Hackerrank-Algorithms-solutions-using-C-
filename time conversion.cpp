#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
   char time[20];
   cin>>time;
   int t1=atoi(time);
   
   if(time[strlen(time)-2]=='P'||time[strlen(time)-2]=='p')
   {
       if(t1==12)
       t1=12;
       else
       t1+=12;
       cout<<t1;
       for(int i=2;i<8;i++)
       cout<<time[i];
    }
       
    else if(time[strlen(time)-2]='A'||time[strlen(time)-2]=='a')
    {
        if(t1==12)
        t1=00;
           if(t1<11)
           cout<<"0";
        cout<<t1;
        for(int i=2;i<8;i++)
        cout<<time[i];
           
     }
    return 0;
}
