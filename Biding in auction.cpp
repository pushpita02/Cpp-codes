#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(a>b)
	    {
	        if(a>c)
	        {
	            cout<<"ALICE"<<endl;
	        }
	        else if(c>a)
	        {
	            cout<<"CHARLIE"<<endl;
	        }
	    }
	    else if(b>a)
	    {
	        if(b>c)
	        {
	            cout<<"BOB"<<endl;
	        }
	        else if(c>b)
	        {
	            cout<<"CHARLIE"<<endl;
	        }
	           
	    }
	   
	}
	return 0;
}

