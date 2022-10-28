#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int n,k,m,s;
	    cin>>n>>k>>m;
	    double a;
	    k*m==s;
	    
	    
	    if(s==n)
	    {
	        cout<<"1"<<endl;
	    }
	    
	    else if(s<n)
	    {
	       if(n%s==0)
	       {
	        cout<<n/s<<endl;
	       }
	       else if(n%s!=0)
	       {
	         cout<<round(n/s)<<endl;   
	       }
	    }    
	    
}
	return 0;
}

