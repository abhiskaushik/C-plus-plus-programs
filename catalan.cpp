  #include<bits/stdc++.h>
  #define ll long long
   using namespace std;

   int catalan(ll n){
   	 if(n<=1)
   	 	return 1;
   	  ll ans=0;

   	  for (int i = 0; i <n; ++i)
   	  {
   	  	/* code */
   	  	ans+=catalan(i)*catalan(n-i-1);
   	  }

   	 // cout<<ans<<endl;
    
     return ans;
    
   }


   int main(int argc, char const *argv[])
   {
   	  ll t,n;
   	  cin>>t;
   	  while(t--){
   	  	cin>>n;
   	  	cout<<catalan(n)<<endl;
   	  }
   	return 0;
   }