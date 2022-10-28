#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    if(n+1>k)
	    {
	        cout<<"No"<<endl;
	    }
	    else if(n+1<k)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else if(k=n+1)
	    {
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}

