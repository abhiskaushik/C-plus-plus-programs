  #include<bits/stdc++.h>
    using namespace std;

   int kanpsack(int weights[],int benefits[],int W,int n){
   	   int K[n+1][W+1];

   	   for (int i = 0; i <=n; ++i)
   	   {
   	   	/* code */
   	   	for (int w = 0; w <=W; ++w)
   	   	{
   	   		/* code */
   	   		if(i==0 || w==0)
   	   			K[i][w]=0;

   	   		else if(weights[i]<=w)
   	   			K[i][w]=max(benefits[i-1]+K[i-1][w-weights[i-1]],K[i-1][w]);
   	   		else
   	   			K[i][w]=K[i-1][w];
   	   	}
   	   }

   	   return K[n][W];
   }


    int main(int argc, char const *argv[])
    {
    	int weights[]={1,3,4,5};
    	int benefits[]={1,4,5,7};
         int W=7;
         int n=sizeof(weights)/sizeof(weights[0]);

    	cout<<kanpsack(weights,benefits,W,n)<<endl;

    	return 0;
    }