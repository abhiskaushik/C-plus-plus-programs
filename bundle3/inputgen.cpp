#include<bits/stdc++.h>
  using namespace std;


  int main(int argc, char const *argv[])
  {
  	 	  srand(time(NULL));
   
    long long vll=1000;
    ofstream file;
    file.open("input.txt");
    int notc=rand()%10 +1;
    //int notc=5;
    cout<<notc<<endl;
    file<<notc<<endl;

    while(notc--){
    	int n=rand()%vll +1;
      int m=rand()%(2*vll) +1;
      
      file<<n<<" "<<m<<endl;
    	 

    }
    file.close();
  	return 0;
  }