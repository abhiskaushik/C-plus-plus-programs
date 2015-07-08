  #include<bits/stdc++.h>
  using namespace std;

  int main(int argc, char const *argv[])
  {
  	 string s1,s2;
  	 cin>>s1>>s2;
  	 int l1=s1.length(),l2=s2.length();

  	 int lookup[l1+1][l2+1];
    
    for (int i = 0; i <l2+1; ++i)
    {
    	/* code */
    	lookup[0][i]=0;
    }
    for (int i = 0; i <l1+1; ++i)
    {
    	/* code */
    	lookup[i][0]=0;
    }

    for (int i =1; i <l1+1; ++i)
    {
    	/* code */
    	for (int j =1; j <l2+1; ++j)
    	{
    		/* code */
    		
    		if(s2[j-1]==s1[i-1])
    			lookup[i][j]=1+lookup[i-1][j-1];
    		else
    			lookup[i][j]=max(lookup[i-1][j],lookup[i][j-1]);

    		cout<<lookup[i][j]<<" ";
    	  
    	}
    	cout<<endl;
    }
  cout<<lookup[l1][l2]<<endl;


  	return 0;
  }