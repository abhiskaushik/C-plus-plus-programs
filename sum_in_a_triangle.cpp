/*
Sums in a triangle
http://www.codechef.com/problems/SUMTRIAN

*/
#include<bits/stdc++.h>
using namespace std;

class Codechef{

 private:

 public:
  Codechef(){

  }

  int max_sum(){
    int n,ar[100000];
    cin>>n;
    for (int i = 1; i <= n*(n+1)/2; ++i)
    {
    	cin>>ar[i];
    }

    //int max_sum=-1;
    int max_index;
    int maxm=-1;
    
    //las two rows..
    int j=(n-1)*n/2 + 1;
    int max_temp=0;
   for (int i = (n-2)*(n-1)/2 +1 ; i<=(n-1)*n/2; ++i)
   { 
   	   maxm=max(maxm,max(ar[i]+ar[j],ar[i]+ar[j+1]));
        if(maxm>max_temp){
        	max_temp=maxm;
   	       max_index=i;
   	    }
   	  j++;  
   }
   cout<<max_index<<" "<<maxm<<endl;
   int row=n-2+1;
  while(row>0){
     
  maxm=max(maxm,max(ar[max_index]+ar[row+max_index%(row+1)],ar[max_index]+ar[max_index%(row+1)+(row+1)]));
   if(maxm>max_temp){
   	  max_temp=maxm;
   	  if(ar[max_index]+ar[row+max_index%(row+1)]>ar[max_index]+ar[max_index%(row+1)+(row+1)]){
   	  	max_index=row+max_index%(row+1);
   	  }
   	  else
   	  	max_index=(row+1)+max_index%(row+1);
   }
 
   row--;
   
  }



   cout<<max_index<<endl;
   return maxm;



  }




};

int main(){
	int t;
	cin>>t;
    Codechef cf;
    while(t--){
	
	cout<<cf.max_sum()<<endl;
    
    }
	return 0;
}