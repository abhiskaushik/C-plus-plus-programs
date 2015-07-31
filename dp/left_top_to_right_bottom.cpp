  #include<bits/stdc++.h>
    using namespace std;


    int main(int argc, char const *argv[])
    {
    	int row,col;
    	cin>>row>>col;
    	 int lookup[row][col];

    	  memset(lookup,0,sizeof lookup );

    	/* for (int i = 0; i < row; ++i)
    	 {
    	 	
    	 	for (int j = 0; j <col; ++j)
    	 	{
    	 		
    	 		lookup[i][j]=0;
    	 	}
    	 }
    	 */


    	  for (int i = 0; i <col; ++i)
    	  {
    	  	/* code */
    	  	lookup[0][i]=1;
    	  }

    	  for (int i = 0; i <row; ++i)
    	  {
    	  	/* code */
    	  	lookup[i][0]=1;
    	  }


    	  for (int i =1; i < row; ++i)
    	  {
    	  	/* code */
    	  	 for (int j = 1; j < col; ++j)
    	  	 {
    	  	 	/* code */
    	  	 	lookup[i][j]=lookup[i-1][j] + lookup[j-1][i];

    	  	 }
    	  }


    	  for (int i = 0; i < row; ++i)
    	  {
    	  	/* code */
    	  	for (int j = 0; j < col; ++j)
    	  	{
    	  		/* code */

    	  		cout<<lookup[i][j]<<" ";
    	  	}
    	  	cout<<endl;
    	  }

    	 // cout<<lookup[row-1][col-1]<<endl;




    	return 0;
    }