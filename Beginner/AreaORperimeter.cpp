#include<iostream>

using namespace std;

int main(){
	int length,breadth,peri,area;
	cin>>length>>breadth;

	peri = 2*(length+breadth);
	area = length*breadth;
	if(peri>area){
		cout<<"Peri"<<endl<<peri;
	} 
	else{
		cout<<"Area"<<endl<<area;
	}
	return 0;
}