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
        else if(y>x)
        {
            cout<<y-x<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
	}
	return 0;
}

