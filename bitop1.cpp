/*
Bit operations.
Check if two numners are of opposite sign.


*/

#include<iostream>
using namespace std;

int main(){
   
    int a=5;
    int b=3;
     int c=a^b;
      if(c<0)
      	cout<<"opposite signs"<<endl;
      else
      	cout<<"same sign"<<endl;



	return 0;
}