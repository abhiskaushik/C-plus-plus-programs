#include<bits/stdc++.h>
using namespace std;

class G4GArray{

private:

public:
 G4GArray(){

 }	
   //o(nlogn) 
 void pair_with_sum_k_method1(){
   int ar[]={1,2,3,0,5,8,-3},k;
      cin>>k;
      sort(ar,ar+7);
      int l=0,r=6,flag=0;
     while(l<r){
     	if(ar[l]+ar[r]==k){
     		cout<<ar[l]<<"&"<<ar[r]<<endl;
     		flag=1; break;
     	}
     	else if(ar[l]+ar[r]<k)
     		l++;
     	else
     		r--;

     }

     if(!flag)cout<<"No"<<endl;

 }
 void pair_with_sum_k_method2(){
 	bool hash_table[100000000]={0};
 	 int ar[]={1,2,3,0,5,8,-3},k;
 	   cin>>k;
 	     for (int i = 0; i <7; ++i)
 	     {  
 	     	 if(hash_table[k-ar[i]])
 	     	 	 cout<<ar[i]<<"&"<<ar[k-ar[i]]<<endl;

 	       hash_table[ar[i]]=1;
 	     }

 }
  //elements that appears more than n/2 times..
 void majority_element(){
 	 int n,ar[]={4,-1,-1,4,5,-1,0};
 	 cin>>n;
 	  int maj_index=0,ctr=1;

 	 for (int i = 1; i <7; ++i)
 	 {
 	 	 if(ar[maj_index]==ar[i])
 	 	 	ctr++;
 	 	 else
 	 	 	ctr--;

 	 	 if(ctr==0){
 	 	 	maj_index=i;
 	 	 	ctr=1;
 	 	 }
 	 
 	 }

 	 cout<<ar[maj_index]<<endl;


 }
   //o(n) me find max occuring element.
 void max_repeating_element(){

 	 int ar[]={2,2,3,1,-1,2,4,8,3};
 	  //find max element
 	 int maxmm=ar[0];
 	 for (int i = 0; i <9; ++i)
 	 {
 	 	 maxmm=max(maxmm,ar[i]);
 	 }
 	 int k=maxmm+1;

 	 for (int i = 0; i <9; ++i)
 	 {
 	 	 ar[ar[i]%k]+=k;
 	 }
    int  maxmRep=ar[0],ans;
 	 for (int i = 0; i <9; ++i)
 	 {
 	 	 if(maxmRep<ar[i]){
 	 	 	maxmRep=ar[i];
 	 	 	ans=i;
 	 	 }

 	 }
 	 cout<<ans<<endl;
 	 
 	 
}

 void largest_sum_contiguous_subarray(){
 	 int ar[]={1,-3,4,3,-1,5,-4};
 	  int cur_max=ar[0],max_so_far=ar[0];

 	  for (int i = 1; i <7; ++i)
 	  {
 	  	 cur_max=max(ar[i],ar[i]+cur_max);
 	  	 max_so_far=max(cur_max,max_so_far);
 
 	  }

      cout<<max_so_far<<endl;

}

 void largest_product_contiguous_subarray(){
 	 int ar[]={-1,-3,-4,-10,-5,-14};
 	  int cur_max=ar[0],max_so_far=ar[0];
    
     //if all the nos are -ve and number of numbers are odd then remove the largest number

 	  for (int i = 1; i <6; ++i)
 	  {
 	  	 cur_max=max(ar[i],ar[i]*cur_max);
 	  	 max_so_far=max(cur_max,max_so_far);
 
 	  }

      cout<<max_so_far<<endl;

}

 void missing_no(){
 	int ar[]={1,2,3,4,6,7,8},xor1=1,xor2=1;

 	 for (int i = 0; i <7; ++i)
 	 {
 	    xor1=xor1^ar[i];
 	 }
 	 for (int i = 1; i <=8; ++i)
 	 {
 	 	xor2=xor2^i;
 	 }

 	 cout<<(xor2^xor1)<<endl;
 }





};

int main(){
   G4GArray g4ga;

    //g4ga.pair_with_sum_k_method1();
    //g4ga.majority_element();
     // g4ga.max_repeating_element();
     // g4ga.largest_sum_contiguous_subarray();
     //g4ga.largest_product_contiguous_subarray();
       g4ga.missing_no();



	return 0;
}