#include<iostream>
#include<cstring>


using namespace std;

int findPower(char *in,int k,int n){
	int power=0;
	for(int i=0;i<n-k;i++){
		for(int j=i;j<i+k;j++){
			if(in[j]!=in[j+1])
				power++;
		}
	}
	return power;
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		char in[100000];
		cin>>n>>k;
		cin>>in;
		cout<<findPower(in,k,n)<<endl;
	}



	return 0;
}