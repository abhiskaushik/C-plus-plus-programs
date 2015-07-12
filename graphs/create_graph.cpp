  #include<bits/stdc++.h>
    using namespace std;
 #define ll long long


    int main(int argc, char const *argv[])
    {   int n; //number of vertices in graph
    	cin>>n;

    	int mat[n][n];
    	for (int i = 0; i <n; ++i)
    	{
    		/* code */
    		for (int j = 0; j <n; ++j)
    		{
    			/* code */
    			mat[i][j]=0;
    		}
    	}

    	int graph_type,max_no_of_edges;
    	cin>>graph_type;
    	if(graph_type==1) //undirected graph
    		max_no_of_edges=n*(n-1)/2;
    	else
    		max_no_of_edges=n*(n-1);
        
         int origin,dest;
    	for (int i = 0; i <n; ++i)
    	{
    		/* code */
    		cin>>origin>>dest;
    		  mat[origin][dest]=1;
    		 if(graph_type=1)
    		 	mat[dest][origin]=1;

    	}

    	for (int i = 0; i <n; ++i)
    	{
    		/* code */
    		for (int j = 0; j <n; ++j)
    		{
    			/* code */
    			cout<<mat[i][j]<<" ";
    		}
    		cout<<endl;
    	}
    	  
    	return 0;
    }