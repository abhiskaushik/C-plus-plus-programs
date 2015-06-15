#include<bits/stdc++.h>
  using namespace std;

  int swap(int *x,int *y){
  	int t=*x;
  	  *x=*y;
  	  *y=t;
  }

  int main(int argc, char const *argv[])
  {
  	
      int ar[]={2,5,1,3,6,2,7};
       int size=sizeof(ar)/sizeof(ar[0]);

       for (int i =1; i <size; ++i)
       {
       	/* code */
       	        int j=i-1; int k=ar[i];
       	       while(j>=0 && ar[j]>k){
       	       	   ar[j+1]=ar[j];
       	       	   j--;
       	       	}
       	       	ar[j+1]=k;
       	       }

       for (int i = 0; i <size; ++i)
       	       {
       	       	/* code */
       	       	cout<<ar[i]<<" ";
       	       }	       

       



  	return 0;
  }