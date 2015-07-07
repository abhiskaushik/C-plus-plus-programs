  #include<bits/stdc++.h>
    using namespace std;

  int kanpsack(int weights[],int benefits[],int W,int n){
     int k[n+1][W+1];

      for (int i = 0; i <=n; ++i)
      {
      	/* code */
      	for (int w = 0; w <=W ; ++w)
      	{
      		/* code */
      		if(i==0 || w==0)
      			k[i][w]=0;
      		else if(weights[i-1]<=w)
      			k[i][w]=max(benefits[i-1]+k[i-1][w-weights[i-1]],k[i-1][w]);
      		else
      			k[i][w]=k[i-1][w];
      	}
      }

      return k[n][W];

  }


    int main(int argc, char const *argv[])
    {
    	int benefits[]={60,100,120};
    	int weights[]={10,20,30};
    	int W=50;
    	int n=sizeof(weights)/sizeof(weights[0]);
    	 cout<<kanpsack(weights,benefits,W,n)<<endl;
    	return 0;
    }