#include<iostream>
using namespace std;

int findSumOfDigits(int n){
	int count=0;
	while(n>0){
		count+=(n%10);
		n = (n/10);
	}
	return count;
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		cout<<findSumOfDigits(num)<<endl;
	}

	return 0;
}