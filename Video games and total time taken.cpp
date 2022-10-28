#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int x,y,z,A,C;
	    cin>>x>>y>>z;
	    
	    double B;
	    
	    A=x*y;
	    C=x/3;
	    B=round(C);
	    
	    
	    if(x%3==0)
	    {
	        cout<<A+(C-1)*z<<endl;
	    }
	    else if(x%3!=0)
	    {
	        cout<<A+B*z<<endl;
	    }
	}
	return 0;
}

