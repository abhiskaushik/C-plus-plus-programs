/*
Check positions of set bit
and then print values accordingly..

*/
#include<iostream>
using namespace std;


int power(int x,int y){
    
     if(y==0)
     	return 1;

   int temp=power(x,y/2);
    if(y%2==0)
    	return temp*temp;
    else
    	return x*temp*temp;




}

int main(){

   int n;
   int ar[]={1,2,3};
   int arry_size=sizeof(ar)/sizeof(int);

   int size=power(2,arry_size);
   //cout<<size;
    for (int i = 0; i <size; ++i)
    {
          for (int j = arry_size-1; j>=0; --j)
            {
              /* code */
                if((i&(1<<j))>0)
                  cout<<ar[j]<<" ";
            } 	
            cout<<endl;
    	
    }


}