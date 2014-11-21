/*
No of ways Jumping N stairs with 1 or 2 steps 
Using DP
lets say i want to jump N=2;
so either 1 1 or 2.
so there are two ways.
if i take 1 steps then n-1 steps are left to be taken
if i take 2 steps then n-2 steps to be taken.
at any stage stair[N]=stair[N-1]+stair[N-2];
stair[0]=0;
stair[1]=1;
stair[2]=2;

order is important here.. like for N=3
111, 12,21.
*/
#include<iostream>
using namespace std;

int main(){
       int t,n;
       cin>>t;
       while(t--){
       	 cin>>n;
       	 int stairs[n];
       	  stairs[0]=0;
       	  stairs[1]=1;
       	  stairs[2]=2;

       	  for (int i =3; i <=n; ++i)
       	  {
       	  	/* code */
       	  	 stairs[i]=stairs[i-1]+stairs[i-2];
       	  }

       	  cout<<stairs[n]<<endl;

       }
     


	return 0;
}
