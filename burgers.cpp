#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    if(a>b)
	    {
	        cout<<b<<endl;
	    }
	    else if(a<b)
	    {
	        cout<<a<<endl;
	    }
	    else if(a=b)
	    {
	        cout<<a<<endl;
	    }
	}
	return 0;
}

