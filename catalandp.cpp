  #include<bits/stdc++.h>
  using namespace std;
 #define ll long long
  int main(int argc, char const *argv[])
  {
  	 ll t,n;
  	 cin>>t;
  	 while(t--){
        cin>>n;
        ll cat[n+1];
        cat[0]=cat[1]=1;
        for (int i =2; i <=n; ++i)
        {
        	/* code */
        	cat[i]=0;
        	for (int j = 0; j<i; ++j)
        	{
        		/* code */
        		cat[i]+=cat[j]*cat[i-j-1];
        	}

        }
        cout<<cat[n];
  	 }

  	return 0;
  }