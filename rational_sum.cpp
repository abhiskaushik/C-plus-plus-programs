#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
# define ll long long
using namespace std;

ll g(ll a,ll b){
	 
/*	  if(!(y%x))
	  	return x;
     
     g(y%x,x); */

	  	ll c;
    while(a!= 0){
        c = a; a = b%a; b = c;
    }
    return b;

	     
}

int main() {
   ll a,b,c,d,nr,dr,gc;
   char x='/';
   cin>>a>>x>>b;
   cin>>c>>x>>d;
 
   nr= a*d+c*b;
   dr=b*d;
 
   gc=g(abs(nr),abs(dr));
    
  //  if(nr%dr==0)
    //	cout<<nr/dr<<endl;
 
   //else 
   cout<<nr/gc<<"/"<<dr/gc<<endl;

    return 0;
}
