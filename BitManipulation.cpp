/*
bit manipulation..
*/
#include<bits/stdc++.h>
using namespace std;

class Bits{

private:

public:
 Bits(){

 }

 void sub_without_entries(){
 	int a,b;
 	cin>>a>>b;
 	cout<<sub_without(a,b)<<endl;
 }
 int sub_without(int x,int y){
 	 while(y!=0){
 	 	int brw=(~x)&y; //borrow
 	 	 x=x^y; //
 	 	 y=brw<<1;
 	 }
    return x;
 }
// given a number find a number which is greater than a number and a power of 2

 int next_power_of_2(int n){
  int temp=1;
  while(temp<n){
  	 temp=temp<<1;
  } 
   return temp;
 }	

 void next_power_of_2_entries(){
 	int n;
 	cin>>n;
 	cout<<next_power_of_2(n)<<endl;
 }


};
int main(){

	Bits b;
	//b.sub_without_entries();
      b.next_power_of_2_entries();

return 0;
}