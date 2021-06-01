#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<" enter number = ";
	cin>>num;
	
	switch(num>=0){
	case 1:
	 	cout<<num<<" is positive number";
	 	break;
    default:
		cout<<num<<" is negative number";
		break;
}
}
