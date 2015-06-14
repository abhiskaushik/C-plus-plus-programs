#include<bits/stdc++.h>
  using namespace std;

  int main(){

   int t;
   cin>>t;
   while(t--){
    int N,k;
    cin>>N>>k;
    string n;
    cin>>n;
     int ans=0;
    for (int i = 0; i <=(N-k); ++i)
    {
        /* code */ int ct=0; int j=i+1; int pd=n[i]-'0';
        while(ct<k-1){
            pd*=n[j+ct]-'0';
            ct++;
        }
        ans=max(ans,pd);
    }

    cout<<ans<<endl;


   }
   
    return 0;

  }