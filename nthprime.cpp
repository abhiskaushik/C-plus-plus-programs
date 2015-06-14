#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
#define k 1000001
using namespace std;

void mark(ll ar[],ll i){
     ll factor=i;
    while(factor*i<k){
        ar[i*factor]=1;
        factor++;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     
    ll ar[k]={0};
      
     for(ll i=2;i<k;i++){
         
          if(ar[i]==0)
              mark(ar,i);

     }

  // for (ll i = 0; i <10000; ++i)
   //{
     /* code */
    //cout<<ar[i]<<" ";
  // }


    vector<ll> v;
    for(ll i=2;i<k;i++){
        if(ar[i]==0)v.push_back(i);

    }
   // for (ll i = 0; i <v.size(); ++i)
    //{
      // cout<<v[i]<<" ";
    //}


   ll t;
      cin>>t; 

   while(t--){
      ll n;
      cin>>n;

    cout<<v[n-1]<<endl;
   
  }  
    return 0;
}
