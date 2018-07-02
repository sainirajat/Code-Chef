#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	int num;
	float balance;
	cin>>num>>balance;

	if((num%5==0)&&(balance>=(num+0.50))){
		// cout<<"haah";
		cout << fixed << showpoint;
		cout<<setprecision(2)<<balance-num-0.50;
	}
	else{
		cout << fixed << showpoint;
		cout<<setprecision(2)<<balance;
	}



	return 0;
}