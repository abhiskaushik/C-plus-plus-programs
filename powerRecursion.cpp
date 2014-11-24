/*
Power function using recursion..
in log(n)

*/
#include<iostream>
using namespace std;

long long Power(long long x,long long y){
	if(y==0)
		return 1;

	long long temp= Power(x,y/2);
	if(y%2==0)
		return temp*temp;
	else
		return x*temp*temp;

}

int main(){
   
     cout<<Power(2,62)<<endl;    


	return 0;
}
