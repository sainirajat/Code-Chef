#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count = 0;
	while(n>0&&count<4){
		n = n/10;
		count++;
	}
	if(count>3)
		cout<<"More than 3 digits"<<endl;
	else{
		cout<<count<<endl;
	}
	return 0;
}