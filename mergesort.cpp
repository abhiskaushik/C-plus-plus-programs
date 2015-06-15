#include<bits/stdc++.h>
  using namespace std;


void merge(int ar[],int l1,int r1,int l2,int r2){
   
      vector<int> v;
      int i=l1,j=l2;
      while(i<=r1 && j<=r2){
      	 if(ar[i]<=ar[j])
      	 	v.push_back(ar[i++]);
      	 else
      	 	v.push_back(ar[j++]);

      }
      while(i<=r1)
      	 v.push_back(ar[i++]);
      	while(j<=r2)
      		v.push_back(ar[j++]);


  for (int i = 0; i <v.size(); ++i)
  {
  	/* code */
  	ar[i]=v[i];
  }


}


void mergeSort(int ar[],int l,int r){
   
      if(l>r)
      	return;
      
        int mid=l+(r-l)/2;
      mergeSort(ar,l,mid);
      mergeSort(ar,mid+1,r);
    
     merge(ar,l,mid,mid+1,r);
}



  int main(int argc, char const *argv[])
  {
  	int ar[]={2,4,1,3,6,0,5};
  	int size=sizeof(ar)/sizeof(ar[0]);
     
     mergeSort(ar,0,size-1);
     
      for (int i = 0; i <size; ++i)
      {
      	/* code */
      	cout<<ar[i]<<" ";
      }
  	return 0;
  }