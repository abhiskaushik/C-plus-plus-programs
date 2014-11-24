/*
Print array using recurssion..
*/

#include<iostream>
using namespace std;

void Print(int ar[],int n){
       if(n==-1)
       	 return;

    // Print(ar,n-1);
     cout<<ar[n]<<" ";
       Print(ar,n-1);

}


int main(){
   
    int ar[]={10,3,4,5,6};
    int n=sizeof(ar)/sizeof(int);
    Print(ar,n-1);
    
 return 0;
}