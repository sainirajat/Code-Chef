#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	int comm = sqrt((b*b)-(4*(a*c)));
	int x1 = ((-1*b) + comm)/(2*a);
	int x2 = ((-1*b) - comm)/(2*a);

	cout<<x1<<endl<<x2;
	return 0;
}