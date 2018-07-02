#include<iostream>
using namespace std;

int findSquare(int side){
	if(side<=3)
		return 0;
	return ((side-2)/2)+findSquare(side-2);
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int side;
		cin>>side;
		cout<<findSquare(side)<<endl;
	}

	return 0;
}