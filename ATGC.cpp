#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t>0)
	{
	    int n;
	    cin>>n;
	    
	   for(char s; s>1; s++)
	{
	    if(s=='A' || s=='a')
	    {
	        cout<<"T"<<endl;
	    }
	    if(s=='T' || s=='t')
	    {
	        cout<<"A"<<endl;
	    }
	    if(s=='G' || s=='g')
	    {
	        cout<<"C"<<endl;
	    }
	    if(s=='C' || s=='c')
	    {
	        cout<<"G"<<endl;
	    }
	}
}
	return 0;
}

