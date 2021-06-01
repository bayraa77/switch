#include<iostream>

using namespace std;

int main(){
	int num, num1;
	cout<<" enter the first number = ";
	cin>>num;
	cout<<"enter the second number = ";
	cin>>num1;
	
	switch(num<num1){
		case 0:
			cout<<" The maximum number is  "<<num;
			break;
		case 1:
			cout<<" The maximum number is"<<num1;
			break;
	}
	
}
