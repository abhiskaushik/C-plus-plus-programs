/*
print power set of a number..
Logic is:
check for position of set bits in 
numbers from 0 to 2^n
print ar[pos_of_set_bits]
*/
#include<bits/stdc++.h>
using namespace std;

class PowerSet{

 private:

 public:	
 	PowerSet(){

 	}

    void powerset(int n,int pset_size,int ar[]){
       cout<<"{}";
      for (int i = 0; i<pset_size; ++i)
      {
      	  for (int j = 0; j<n; ++j)
      	  {
      	  	 if(i&(1<<j))
      	  	 	cout<<ar[j]<<" ";
      	  }
      	  cout<<endl;
      }


    }

};



int main(){
    
     PowerSet ps;

	  int ar[]={2,3,4};
    
      ps.powerset(3,8,ar);


	return 0;
}
