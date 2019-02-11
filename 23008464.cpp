#include <iostream>
#include <boost/math/common_factor.hpp>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i <t ; i++)
    {
       unsigned long long int n,count=0,k,a,b,hcf=1,lcm=0;
    
        cin>>n>>a>>b>>k;
        
        	int mini=min(a,b);
            int maxi=max(a,b);
            hcf=mini;

            int remainder=maxi%mini;
            while(remainder!=0)
            {
             
            
            	remainder=maxi%mini;
            	maxi=mini;
            	mini=remainder;
            	hcf=maxi;

            }
           // cout<<hcf<<endl;
          
           
            count+=(n/a);
            count+=n/b;
            lcm=(a*b)/hcf;
            lcm=n/lcm;
            lcm=lcm*2;
            count-=lcm;
            
            if(count >= k)
            {
                cout<<"Win"<<endl;
            }
            else
            {
                cout<<"Lose"<<endl;
            }
            
            
        
        
        
    }
}