#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int N,X,Y,x,y;
	    cin>>N>>X>>Y;
        
		X=x*1;
		Y=y*2;
			    
	    int S;
	    S=X+Y;
	    
	    if(N>S)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(N<S)
	    {
	        cout<<"NO"<<endl;
	    }
	    else if(N==S)
	    {
	    	cout<<"YES"<<endl;
		}
	}
	return 0;
}

