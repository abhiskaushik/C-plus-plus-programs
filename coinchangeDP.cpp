/*
Coin change problem using DP


*/
#include<iostream>
using namespace std;

int mimn(int amount,int table[],int coins[],int size){
	int minmm=amount+1;
	 for (int i = 0; i <size; ++i)
	 {
	 	/* code */
	 	 	if(amount-coins[i]>=0 && table[amount-coins[i]]<minmm)
	 		minmm=table[amount-coins[i]];
	 
	 }

	 return minmm;
}

int main(){

   int coins[]={1,2,3};
   int amount=20;
     int table[amount];
     table[0]=0;
     int size=sizeof(coins)/sizeof(coins[0]);
     for (int i = 1; i <=amount; ++i)
     {
     	/* code */
     
           table[i]=mimn(i,table,coins,size)+1;
 }
    
    cout<<table[amount]<<endl;


	return 0;
}