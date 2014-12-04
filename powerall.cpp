/*
Power function logn
*/
#include<iostream>
using namespace std;

float pow(int x,int y){
	 
	  if(y==0)
	   return 1;
	    
	   float temp=pow(x,y/2);
       
        if(y%2==0)
        	return temp*temp;

        else{
        	if(y>0)
        		return temp*temp*x;
        	else
        		return temp*temp/x;
        }

}
int main(){
	
     
       cout<<pow(-3,3)<<endl;


	return 0;
}