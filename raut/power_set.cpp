  #include<bits/stdc++.h>
  #define ll long long
  using namespace std;
//given a set generate a power set
 

    ll power(ll x, ll y){
      
      if(y==0)
      return 1;
      
      ll temp=power(x,y/2);
      
      if(y%2==0)
        return temp*temp;
      else
        return x*temp*temp;
    }



  int main(int argc, char const *argv[])
  {
  	ll ar[]={3,4,5};
  	ll size=sizeof(ar)/sizeof(ar[0]);
    ll ss=power(2,size);
       
       cout<<"{"<<"}"<<endl;
  	 for (ll i = 0; i < ss; ++i)
  	 {
         for (int j = 0; j <size; ++j)
         {
         	/* code */
         	if(i&(1<<j))
         		cout<<"{"<<ar[j]<<" ";

         }
         cout<<"}"<<endl;

  	 }


  	return 0;
  }