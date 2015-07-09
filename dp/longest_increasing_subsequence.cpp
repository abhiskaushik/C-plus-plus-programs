  #include<bits/stdc++.h>
  using namespace std;
  int lis(int ar[],int n){
  	int temp[n];

    for (int i = 0; i <n; ++i)
    {
    	/* code */
    	temp[i]=1;
    }
  	for (int i = 1; i <n ; ++i)
  	{
  		/* code */
  		for (int j = 0; j <i; ++j)
  		{
  			/* code */
  			if(ar[j]<ar[i] && temp[i]<1+temp[j]){
  				temp[i]=1+temp[j];
  			}
  		}
  	}
      int max=1;
  	for (int i = 0; i <n; ++i)
  	{
  		/* code */
  		if(max<temp[i])
  			max=temp[i];

  		//cout<<temp[i]<<" ";
  	}
  	return max;
  }


  int main(int argc, char const *argv[])
  {
  	 int t;
  	 cin>>t; int n;
  	 cin>>n; int ar[n];
  	 while(t--){
  	 	for (int i = 0; i <n; ++i)
  	 	{

        cin>>ar[i];
        }
  	 
  	 cout<<lis(ar,n)<<endl;
  	}
  	return 0;
  }