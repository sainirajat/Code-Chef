#include<iostream>
using namespace std;

int findSetBits(int num){
	int count=0;
	
	while(num>=4096){
		count++;
		num=num-2048;
	}
	
	while(num>0){
	count++;
	num = num&(num-1);
	}
	
	
	return count;
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int num;
		cin>>num;
		cout<<findSetBits(num)<<endl;
	}
}