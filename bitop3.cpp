/*
Check number is a power of 2

*/
#include<iostream>
using namespace std;

int main(){
   int t,n;
   cin>>t;
   while(t--){
     cin>>n;

     	cout<<(!(n&(n-1)))<<endl;
   }


	return 0;
}