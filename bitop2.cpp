/*
Finding min and max using bit operators.
*/
#include<iostream>
using namespace std;

int main(){

    int x=3;
    int y=4;
    int min=y^(x^y & ~(x>y));
    int max=x^(x^y & ~(x<y));
    
     cout<<min<< " "<<max<<endl;
     cout<<((1<<3) | 3);

	return 0;
}