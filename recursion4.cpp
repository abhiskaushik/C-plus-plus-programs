#include<bits/stdc++.h>
  using namespace std;

int logn(int n){
	if(n==1)
		return 0;

	return 1+ logn(n/2);
}


  int main(){
  	int n;

     while(cin>>n){
        
     	cout<<logn(n)<<endl;
     }

  	return 0;
  }