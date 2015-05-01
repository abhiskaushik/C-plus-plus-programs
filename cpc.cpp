#include<bits/stdc++.h>
using namespace std;

class CPC{

private:

public:
	//constructor...
  CPC(){}


 void binary_search_example(){
   int ar[]={3,4,5,7,10,34};
      int x;
      cin>>x;
     int l=0,r=(sizeof(ar)/sizeof(ar[0]))-1;
     while(l<=r){
     	int mid=l+(r-l)/2;
     	if(ar[mid]==x){
     		cout<<x<<"at"<<" "<<mid;
     		break;
     	}
     	else if(ar[mid]<x)
     		l=mid+1;
     	else
     		r=mid-1;
     }
}

 void optimized_binary_search(){
 	 int ar[]={3,4,6,8,9};
 	 int k;
 	 cin>>k;
 	 int l=0,r=(sizeof(ar)/sizeof(ar[0]))-1;
 	  while(r-l>0){
 	  	int mid=l+(r-l)/2;
 	  	 if(ar[mid]<=k)
 	  	 	l=mid;
 	  	 else
 	  	 	r=mid;
 	  }
 	  if(ar[l]==k)
 	  	cout<<k<<"at "<<l<<endl;
 	  else
 	  	cout<<"not found"<<endl;
 }

//find value just less than k..
void floor_value(){
	int ar[]={3,4,5,6,7,8,9};
	  int k; cin>>k;
	  int l=0,r=(sizeof(ar)/sizeof(ar[0]))-1;
	  while(r-l>0){
	  	 int m=l+(r-l)/2;
	  	  if(ar[m]<=k)
	  	  	 l=m;
	  	  	else
	  	  	 r=m;
	  }
	  cout<<ar[l]<<endl;

}







};

int main(){
	CPC cpc;
	//cpc.binary_search_example();
	//cpc.optimized_binary_search();
     cpc.floor_value();

	return 0;
}