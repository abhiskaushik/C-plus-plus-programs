#include<bits/stdc++.h>
using namespace std;

char maxOccur(string s){

   	int hash[256]={0};

    	for (int i = 0; i <s.length(); ++i)
    	{
    		/* code */
    		hash[s[i]]++;

    	}
          int m=0,mi=0;
    	for (int i =0; i <256; ++i)
    	{
    	 //cout<<hash[i]<<" ";
    	  mi=(hash[i]>hash[mi])?i:mi;
    	  

    	}



	return (char)mi; 
}


  int main(){
        string s;
       

    while(getline(cin,s)){
    	//string k=fgets(s,1000,stdin);

      char c=maxOccur(s);
       cout<<c<<endl;

    }



  	return 0;
  }