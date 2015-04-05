/*
Codechef April 1
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

class April{

private:
 
public:
  April(){

  }

 /* int broken_telephone(){
     int t,n;  
      cin>>t;
       while(t--){
    	
    	ll ar[100000]={0};
        ll set_boxes[100000]={0};

    	int ctr=0;
    	cin>>n;
    	for (int i = 0; i < n; ++i)
    	{
    	   cin>>ar[i];
    	}
    	for (int i = 0; i < n-1; ++i)
    	{
    		if(ar[i]!=ar[i+1]){
    			set_boxes[i]=1;
    			set_boxes[i+1]=1;
    		}
    	}

    	for (int i = 0; i <n; ++i)
    	{
    		if(set_boxes[i]==1)ctr++;

    		cout<<set_boxes[i]<<" ";
    	}
    	cout<<endl<<ctr<<endl;

    }
return 0;

  }
*/
  int lcmm(int x,int y){
     if(y%x==0)
     	return y;
     else
     	return -1;
  }



  int chef_and_interview(){
  	ll t,ct;
  	ll n;
  	cin>>t;
  	while(t--){
  		ct=0;
  		cin>>n;
  		if(n==1){
  			cout<<1<<endl;
  		}
  		else{
  		ll u=sqrt(n);
      for (ll i = 2; i <=u; ++i)
      {
      	  if(lcmm(i,n)==n &&i!=(n/i)){
      	  	ct+=i+(n/i);
      	  }
      	  else if(lcmm(i,n)==n &&i==(n/i)){
      	  	ct+=i;
      	  }

            
      	  
      }

      cout<<(ct+n+1)<<endl;
    
     }

  	}



  	return 0;
  }


};

int main(){
    
    April cac;
    // cac.broken_telephone(); 
     cac.chef_and_interview();

	return 0;
}
