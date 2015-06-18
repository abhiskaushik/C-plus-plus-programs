#include<bits/stdc++.h>
 #include<fstream>
  using namespace std;

  int main(int argc, char const *argv[])
  {
  	
    int t=1000;
    ofstream file;
    file.open("inputheap.txt");

    while(t--){
    	int r=rand()%10 +1;
    	cout<<r<<endl;
    	file<<r<<endl;
    	for (int i = 0; i <r; ++i)
    	{
    		/* code */
    		int k=rand()%100+1;
    		cout<<k<<" ";
    		file<<k<<" ";
    	}
    	cout<<endl;
    	file<<endl;

    }
    file.close();



  	return 0;
  }