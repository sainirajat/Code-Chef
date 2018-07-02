#include<iostream>
using namespace std;

int solveThePuzzle(int arr[3][3]){
	int count=0;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]!=(i+j+1))
		}
	}
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int arr[3][3];

		//input the array
		for(int j=0;j<3;j++)
			for(int k=0;k<3;k++)
				cin>>arr[j][k];


		cout<<solveThePuzzle(arr)<<endl;
	}


	return 0;
}