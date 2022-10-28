#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        int x,y,a;                                       
        cin>>x>>y>>a;
        
        if(a>=x)
        {
            if(a<y)
            {
                cout<<"YES"<<endl;
            }
            else if(a>y)
            {
                cout<<"NO"<<endl;
            }
            else if(a==y)
            {
                cout<<"NO"<<endl;
            }
        }
        
       else if(a<x)
       {
           cout<<"NO"<<endl;
       }
    }
	return 0;
}

