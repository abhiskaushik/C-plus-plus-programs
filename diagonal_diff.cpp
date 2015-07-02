  #include<bits/stdc++.h>
  using namespace std;

  int main(int argc, char const *argv[])
  {
  	  int n,s1=0,s2=0;
  	  cin>>n;
  	  int mat[n][n];
  	  for (int i = 0; i <n; ++i)
  	  {
  	  	/* code */
  	  	for (int j = 0; j <n; ++j)
  	  	{
  	  		/* code */
  	  		cin>>mat[i][j];
  	  	}
  	  }

  	  for (int i = 0; i <n; ++i)
  	  {
  	  	/* code */
  	  	s1+=mat[i][i];
  	  }

  	  for (int i =n-1,j=0; i>0,j<n; --i,j++)
  	  {
  	  	/* code */
  	  	s2+=mat[i][j];
  	  }

  	  cout<<abs(s1-s2)<<endl;

  	return 0;
  }