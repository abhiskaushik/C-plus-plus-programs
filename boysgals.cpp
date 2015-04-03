#include<bits/stdc++.h>
#define ll long long 
using namespace std;

class Codechef{

 private:

 public:
  Codechef(){

  }	
  
  int fact(ll n){
    if(n==0)
    	return 1;

    return n*fact(n-1);
  }

  int find(ll m,ll n){
  	ll gre=(m>n)?m:n;
  	ll sm=(m<n)?m:n;
  	ll ans= fact(gre)*fact(gre+1)/fact(gre+1-sm);
    return ans;
  }

};

int main(){
    Codechef cf;
   ll m,n;
   cin>>m>>n;
   cout<<cf.find(m,n)<<endl;


	return 0;
}