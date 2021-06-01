#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<" enter eny number = ";
	cin>>num;
	
	switch(num%2==0){
		case 1:
			cout<<num<<" is an even number ";
			break;
		default:
			cout<<num<<" is an odd number ";
			break;
	}
		
}
