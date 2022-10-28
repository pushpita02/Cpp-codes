#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;	    
	    double z = x/a;
	    double c = y/b;
	    
	    if(z*n > c*n)
	    {
	        cout<<"DIESEL"<<endl;
	    }
	    else if(z*n < c*n)
	    {
	        cout<<"PETROL"<<endl;
	    }
	    else if(z*n==c*n)
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}

