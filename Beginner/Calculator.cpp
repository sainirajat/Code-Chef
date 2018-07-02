#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main(){
	double a=0,b=0;
	cin>>a>>b;

	char op;
	cin>>op;

	if(op=='+')
		cout<<a+b<<endl;
	else if(op=='*')
		cout<<a*b<<endl;
	else if(op=='-')
		cout<<a-b<<endl;
	else
		cout<<setprecision(10)<<a/b<<endl;
	return 0;
}