/*
Setting a bit.
unsetting a bit.
toggling a bit 
and printing a bit

*/
#include<iostream>
using namespace std;

int main(){
    
     int num=15;
     int k=3;
     cout<<"setting bit"<<(num | (1<<k))<<endl;
     cout<<"unsetting a bit"<<(num & ~(1<<k))<<endl;
     cout<<<"togging a bit"<<(num^ (1<<k))<<endl




	return 0;
}