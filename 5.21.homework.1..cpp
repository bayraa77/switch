#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<" enter a number between 1 to 7 = ";
	cin>>num;
	
	switch(num)
	{
    case 1:
	    cout<<" today is Monday ";
	    break;
	case 2:
	    cout<<" today is Tuesday ";
	    break;
	case 3:
	    cout<<" today is Wednesday ";
	    break;
    case 4:
	    cout<<" today is Thursday";
	    break;	    
	case 5:
	    cout<<" today is Friday ";
	    break;
	case 6:
	    cout<<" today is Saturday ";
	    break;
    case 7:
	    cout<<" today is Sunday ";
	    break;
	}
}
