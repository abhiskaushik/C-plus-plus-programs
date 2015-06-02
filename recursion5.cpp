#include<bits/stdc++.h>
  using namespace std;

int handshake(int n){

	if(n<=2)
		return 0;

	return (n-2)+ handshake(n-2);

}



  int main(){
     int n;
    while(cin>>n)
    cout<<handshake(2*n)<<endl;


  	return 0;
  }