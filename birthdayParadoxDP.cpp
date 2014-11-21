/*
Birthday Paradox..
out of n ppl in a room whats the probability that
any two person has same birthday..
0 ppl =0;
1 ppl =0;
2 ppl = 0+ 1/365
3 ppl =  1/365 + (1-1/365)*2/365;
*/

#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
     float table[n];
     table[1]=table[0]=0;
     for (int i = 1; i <=n ; ++i)
     {
     	/* code */
     	table[i]=table[i-1]+ (1- table[i-1])*(i-1)/365;
     }
     cout<<table[n]<<endl;


}