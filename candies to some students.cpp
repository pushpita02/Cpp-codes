#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    double X;
	    X=n-x;
	    
	    
	    if(n>x)
	    {
	        cout<<round(X/4)<<endl;
	    }
	    else if(n<x)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(n=x)
	    {
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}

