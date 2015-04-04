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

  int broken_telephone(){
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


};

int main(){
    
    April cac;
     cac.broken_telephone(); 


	return 0;
}
