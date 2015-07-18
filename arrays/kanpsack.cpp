  #include<bits/stdc++.h>
   using namespace std;


   int main(int argc, char const *argv[])
   {
   	 int weights[]={1,3,4,5};
   	 int vals[]={1,4,5,7};
   	 int size=sizeof(weights)/sizeof(weights[0]);
     int W;
     cin>>W;

     int lookup[size][W+1];
   	 	for (int i = 0; i <size ; ++i)
   	 	{
   	 		lookup[i][0]=0;
   	 	}

   	 	for (int j =1; j <=W; ++j)
   	 	{
   	 		/* code */
   	 		if(weights[0]>j)
   	 		lookup[0][j]=0;
   	 	else
   	 		lookup[0][j]=vals[0];
   	 	}

   	 	for (int i =1; i <size; ++i)
   	 	{
   	 		/* code */
   	 		for (int j =1; j <=W; ++j)
   	 		{
   	 			/* code */
   	 			if(weights[i]>j)
   	 				lookup[i][j]=lookup[i-1][j];
   	 			else
   	 				lookup[i][j]=max(vals[i]+lookup[i-1][j-weights[i]],lookup[i-1][j]);

   	 		}
   	 	}
   	 	cout<<lookup[size-1][W]<<endl;

   	 	for (int i = 0; i <size; ++i)
   	 	{
   	 		/* code */
   	 		for (int j = 0; j <=W ; ++j)
   	 		{
   	 			/* code */
   	 			cout<<lookup[i][j]<<" ";


   	 		}
   	 		cout<<endl;
   	 	}




   	    	return 0;
   }