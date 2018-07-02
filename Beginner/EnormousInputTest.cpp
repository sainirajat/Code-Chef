#include<iostream>

using namespace std;
#define ll long long int
int main(){
	ll n,k;
	cin>>n>>k;
	ll count=0;
	for(ll i=0;i<n;i++){
		ll t;
		cin>>t;
		if(t%k==0)
			count++;
	}
	cout<<count++;



	return 0;
}