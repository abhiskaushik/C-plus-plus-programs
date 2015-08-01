  #include<bits/stdc++.h>
  using namespace std;
  #define ll long long
  int main(int argc, char const *argv[])
  {
  	 ll t,n,sum;
  	 cin>>t;

  	 while(t--){
  	 	cin>>n;

  	 	  ll sign=1; sum=0;

  	 	for (ll i =1; i <=n; ++i)
  	 	{
  	 		/* code */

  	 		sum+= sign*i;
  	 		sign*=-1;

  	 	}

  	 	cout<<sum<<endl;

  	 }

  	return 0;
  }