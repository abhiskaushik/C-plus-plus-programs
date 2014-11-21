/*
Maximum subsequence problem
using DP

*/
#include<iostream>
using namespace std;

int main(){
    
      int ar[]={0,-2,-3,4,-1,-2,1,5,-3};
        int size=sizeof(ar)/sizeof(ar[0]);
       int table[size];
       table[0]=0;
       int maxm=0;
       for (int i = 1; i <size; ++i)
        {
            	/* code */
            
        table[i]=max(table[i-1]+ar[i],ar[i]);
           if(table[i]>0 && table[i]>maxm)	
           	  maxm=table[i];
         }
         
          cout<<maxm<<endl;

	return 0;
}