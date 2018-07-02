#include<iostream>
using namespace std;
#define ll long long int

ll factorial(ll n){
	if(n==1)
		return 1;
	return n*factorial(n-1);
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		ll num;
		cin>>num;
		cout<<factorial(num)<<endl;
	}


	return 0;
}