/*
Tower of hanoi..
Recurrence relation is
T(n)=2T(n-1)+1

*/
#include<iostream>
using namespace std;

int tower(int n,char from,char mid,char to){
      
       if(n>0){
       	 tower(n-1,from,to,mid);
       	 cout<<"Move disc "<<n<<"from "<<from<<"to "<<to<<endl;
       	 tower(n-1,mid,from,to);
       }
     return 0;
}

int main(){

       tower(4,'A','B','C');



	return 0;
}