#include<bits/stdc++.h>
using namespace std;

int main() {
	double lbalance, rbalance;
	int withdrawl;
	cin>>withdrawl;
	cin>>lbalance;
	if(withdrawl%5==0)
	{
	    if(lbalance>=(withdrawl+0.50))
	    {
	        rbalance=(lbalance-withdrawl)-0.50;
	    }
	    else
	    rbalance=lbalance;
	} 
	
	else
	rbalance=lbalance;
	cout<<fixed;
	cout<<setprecision(2)<<rbalance;
	

	
	
}
