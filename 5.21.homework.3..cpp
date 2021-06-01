#include<iostream>

using namespace std;

int main(){
	char a;
	cout<<" enter any letter : ";
	cin>>a;
	
	switch(a){
	case 'a':
	case 'A':
 	case 'e':
    case 'E':
 	case 'i':
    case 'I':
 	case 'o':
    case 'O':
	case 'u':
	case 'U':
	    cout<<" this is a vowel ";
	    break;
	default :
		cout<<" this is a consonant";
	
	}
		
	
}
