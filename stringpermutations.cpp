/*
All permutations in a string

*/
#include<iostream>
using namespace std;

void swap(char *a,char *b){
     
      char temp= *a;
      *a=*b;
      *b=temp;
}


void permutations(char *a, int i,int n){
    
     if(i==n)
     	cout<<a<<endl;

     else
     {
     	for (int j =i; j<=n ; ++j)
     	{
     		/* code */
     		swap(a+i,a+j);
     		permutations(a,i+1,n);
     		swap(a+i,a+j);
     	}
     }

}


int main(){
   
     char str[]="Apple";

    permutations(str,0,4);



	return 0;
}