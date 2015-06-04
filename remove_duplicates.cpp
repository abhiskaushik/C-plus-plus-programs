#include<bits/stdc++.h>
  using namespace std;

  string remove(string s){
       
         int hash[256]={0};
          vector<char> v;
        for (int i = 0; i <s.length(); ++i)
        {
        	/* code */
        	hash[s[i]]++;
 
        	 if(hash[s[i]]<=1)
        	 	v.push_back(s[i]);

        }

   /*     for (int i = 0; i <256; ++i)
        {
  
        	if(hash[i]>0)
        	cout<<hash[i]<<" "<<(char)i<<endl;
        }
*/       string ans; int i;
        for (i =0; i <v.size(); ++i)
        {
        //	cout<<v[i]<<" ";
        	ans[i]=v[i];
        }
        ans[i+1]='\0';

        return ans;

  }

   int main(int argc, char const *argv[])
  {
  
    string s;
    while(getline(cin,s)){
    	cout<<remove(s)<<endl;
    }


  	/* code */
  	return 0;
  }