#include<iostream>

using namespace std;

int findNum(int l,int r,int * dp){
	if(l==r){
		return dp[l-1];
	}
	int temp = l%10;
	if(temp==2||temp==3||temp==9){
		dp[l] = 1 + dp[l-1];
		return findNum(l+1,r,dp);
	}
	else{
		dp[l] = dp[l-1];
		return findNum(l+1,r,dp);
	}

}


int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int dp[100001] = {0};
		int l,r;
		cin>>l>>r;
		cout<<findNum(l,r+1,dp)<<endl;
		// for(int i=l;i<=r;i++){
		// 	cout<<i<<" --> "<<dp[i]<<endl;
		// }
	}



	return 0;
}