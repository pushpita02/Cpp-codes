#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x>y)
	    {
	        cout<<y<<endl;
	    }
	    else if(x<y)
	    {
	        cout<<"5"<<endl;
	    }
	    else if(x=y)
	    {
	        cout<<x<<endl;
	    }
	}
	return 0;
}

