#includ0e<iostream>

using namespace std;

int main(){
	

    char op;
    float num, num1;
    
     
	cout<<" what do you want to solve ?"<< endl;
	cin>>num>>op>>num1;

    
	switch(op){
		case'+':
			cout<<num+num1;
			break;
		case'-':
			cout<<num-num1;
			break;
		case'*':
			cout<<num*num1;
			break;
		case'/':
			cout<<num/num1;
			break;
		
	}

}
