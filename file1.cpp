#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    pair<string,string> p;
	        cin>>p.first;
	        cin>>p.second;
	   int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(p.first[i]!=p.second[i])
	        count++;
	    }
	    if(count<=2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
