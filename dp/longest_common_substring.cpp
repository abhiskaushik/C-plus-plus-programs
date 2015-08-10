  #include<bits/stdc++.h>
  using namespace std;

  int main(int argc, char const *argv[])
  {
  	  string s1,s2;
  	  cin>>s1>>s2;
  	  int r=s2.length()+1;
  	  int c=s1.length()+1;
  	  int lookup[r][c];

  	  for (int i =0; i<c; ++i)
  	  {
  	  	/* code */
  	  	lookup[0][i]=0;
  	  }

  	  for (int i =0; i<r; ++i)
  	  {
  	  	/* code */
  	  	lookup[i][0]=0;
  	  }

  	  for (int i =1; i<r; ++i)
  	  {
  	  	/* code */
  	  	  for (int j =1; j<c; ++j)
  	  	  {
  	  	  	/* code */
  	  	  	if(s1[i-1]==s2[j-1])
  	  	  		lookup[i][j]=lookup[i-1][j-1]+1;
  	  	  	else
  	  	  		lookup[i][j]=0;

  	  	  }
  	  }
          int max=0;
  	  for (int i = 0; i <r; ++i)
  	  {
  	  	/* code */
  	  	for (int j = 0; j <c; ++j)
  	  	{
  	  		/* code */
  	  		cout<<lookup[i][j]<<" ";
  	  		if(lookup[i][j]>max)
  	  			max=lookup[i][j];
  	  	}
  	  	cout<<endl;

  	  }
  	  cout<<max<<endl;





  	return 0;
  }