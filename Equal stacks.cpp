#include<iostream>
using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int a,b,c;
    a=b=c=0;
    int h1[n1],h2[n2],h3[n3];
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
       a+=h1[h1_i];
    }
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
       b+= h2[h2_i];
	       }
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
       c+=h3[h3_i];
    }
    
    int max;
    max= n1+n2+n3+1;
    int h1_i,h2_i,h3_i;
    h1_i=h2_i=h3_i=0;
    
    for(int i=0;i<max;i++)
    {
    	if((a==b)&&(a==c))
    	{
    		cout<<a;
    		break;
    	}
    	
    	else
    	{
    			if(a<b)
    			{
    				b=b-h2[h2_i];
    				h2_i++;
    			}
    			else if(a<c)
    			{
    				c=c-h3[h3_i];
    				h3_i++;
    			}
    			else if(b<a)
    			{
    				a=a-h1[h1_i];
    				h1_i++;
    			}
    			else if(b<c)
    			{
    				c=c-h3[h3_i];
    				h3_i++;
    			}
    			else if(c<a)
    			{
    				a=a-h1[h1_i];
    				h1_i++;
    			}
    			else if(c<b)
    			{
    				b=b-h2[h2_i];
    				h2_i++;
    			}  	
				
				else
				cout<<"0";	
    	}	
    }
    return 0;
}
