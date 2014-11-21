/*
Fibonacci using DP.


*/
#include<iostream>
using namespace std;

int main(){
     int n,t;
     cin>>t;
     while(t--){
     cin>>n;
     int fib[n];
     fib[0]=0;fib[1]=1;
     for (int i =2; i <=n+1; ++i)
     {
     	/* code */
     	fib[i]=fib[i-1]+fib[i-2];
     	//cout<<fib[i]<<" " ;
     }

       for (int i = 1; i <=n; ++i)
       {
       	/* code */
       	cout<<fib[i]<<" ";
       }
       cout<<endl;
     cout<<fib[n]<<endl;
   
}


	return 0;
}