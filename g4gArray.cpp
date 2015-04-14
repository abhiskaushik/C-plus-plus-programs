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





};

int main(){
   G4GArray g4ga;

    //g4ga.pair_with_sum_k_method1();
    //g4ga.majority_element();
      g4ga.max_repeating_element();





	return 0;
}