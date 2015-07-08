  #include<bits/stdc++.h>
    using namespace std;

  int minm(int a,int b,int c){
  	if(a<=b){
  		if(a<=c)
  			return a;
  		else
  			return c;
  	}
  	if(b<=c)
  		return b;
  	else
  		return c;
  }

    int main(int argc, char const *argv[])
    {
    	bool M[6][5]={
    		{0,1,1,0,1},
    		{0,1,1,1,0},
    		{1,1,1,1,0},
    		{1,1,1,1,1},
    		{0,0,0,0,0}
    	};

    	int s[6][5];

        for (int i = 0; i <5; ++i)
        {
        	/* code */
        	s[0][i]=M[0][i];
        }
         for (int i = 0; i <6; ++i)
        {
        	/* code */
        	s[i][0]=M[i][0];
        }

        for (int i =1; i <6; ++i)
        {
        	/* code */
        	for (int j =1; j <5; ++j)
        	{
        		/* code */
        		if(M[i][j]==1)
        			s[i][j]=minm(s[i-1][j],s[i][j-1],s[i-1][j-1])+1;
        		else
        			s[i][j]=0;
        	}
        }

        //find max in s[][]
         int max=0,maxI,maxJ;
        for (int i = 0; i <6; ++i)
        {
        	/* code */
        	for (int j = 0; j <5; ++j)
        	{
        		/* code */
        		if(s[i][j]>max){
        			max=s[i][j];
        			maxI=i; maxJ=j;
        		}
        	}
        }

        for (int i = maxI-max+1; i<=maxI ; ++i)
        {
        	/* code */
        	for (int j =maxJ-max+1; j<=maxJ; ++j)
        	{
        		/* code */
        		cout<<M[i][j]<<" ";
        	}
        	cout<<endl;
        }









    	return 0;
    }