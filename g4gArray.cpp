#include<bits/stdc++.h>
using namespace std;

class G4GArray{

private:

public:
 G4GArray(){

 }	
   //o(nlogn)
 void pair_with_sum_k(){
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



};

int main(){
   G4GArray g4ga;

    g4ga.pair_with_sum_k();







	return 0;
}