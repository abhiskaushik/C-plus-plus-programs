#include<bits/stdc++.h>
#define ll long long
  using namespace std;
 
  int main(int argc, char const *argv[])
  {
  	  srand(time(NULL));
    //int t=1000;
    long long vll=10000000000000000;
    ofstream file;
    file.open("input.txt");
    int notc=rand()%1000 +1;
    //int notc=5;
    cout<<notc<<endl;
    file<<notc<<endl;

    while(notc--){
    	int a=rand()%vll +1;
      int b=rand()%vll +1;
      int x=rand()%vll +1;
      int y=rand()%vll +1;
      file<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
    	 

    }
    file.close();



  	return 0;
  }