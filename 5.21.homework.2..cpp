#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<" enter number between 1 to 12 = ";
	cin>>num;
	
    switch(num){

    case 1:
    cout<<" This is January which contains 31 days ";
    break;
    case 2:
    	cout<<" this is February which contains mainly 28 days";
    	break;
    case 3:
	    cout<<" this is March which contains 31 days";
		break;	
	 case 4:
     cout<<" This is April which contains 30 days ";
     break;
    case 5:
    	cout<<" this is May which contains mainly 31 days";
    	break;
    case 6:
	    cout<<" this is june which contains 30 days";
		break;	
    case 7:
        cout<<" This is July which contains 31 days ";
        break;
    case 8:
    	cout<<" this is August which contains 31 days";
    	break;
    case 9:
	    cout<<" this is September which contains 30 days";
		break;	
	 case 10:
        cout<<" This is October which contains 31 days ";
          break;
    case 11:
    	cout<<" this is November which contains 30 days";
    	break;
    case 12:
	    cout<<" this is December which contains 31 days";
		break;		 
	}	
}
