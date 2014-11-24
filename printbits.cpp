#include<iostream>
using namespace std;

void print_bits(unsigned int x)
{
    int i;
    for(i=31; i>=0; i--) {
        (x & (1 << i)) ? cout<<1 : cout<<0;
    }
    cout<<endl;
}

int main(){
    
     print_bits(12);

	return 0;
}