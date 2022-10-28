#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int x;
	    cin>>x;
	    
	    int y;
	    cin>>y;
	    
	    if(x>y)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(x<y)
	    {
	        cout<<y-x<<endl;
	    }
	    else if(x==y)
	    {
	        cout<<"O"<<endl;
	    }
	}
	return 0;
}

