#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int N,A,B,x;
	    cin>>N>>A>>B;
	    
	    x=A+B;
	    
	    cout<<N-A<<" "<<N-x<<endl;
	    
	    
	}
	return 0;
}

