/*
Reverse a string.
all characters will get strored on 
the stack during winding phase and then 
will be printed back during unwinding phase.
*/
#include<iostream>
using namespace std;

void revr(){
	char c;
	cin.get(c);

	if(c!='\n'){
		revr();
	}

	cout<<c;
}




int main(){

    revr();



	return 0;
}