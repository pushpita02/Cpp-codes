#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int x,n,X;
	    cin>>x>>n;
	    X=x/10;
	    
	    cout<<X*n<<endl;
	}
	return 0;
}

