  #include<bits/stdc++.h>
   using namespace std;
int lis_maxSum(int ar[],int n){
	int temp[n];
	for (int i = 0; i <n; ++i)
	{
		/* code */
		temp[i]=ar[i];
	}

	for (int i = 1; i <n; ++i)
	{
		/* code */
		for (int j = 0; j<i; ++j)
		{
			/* code */
			if(ar[j]<ar[i] && temp[i]<temp[j]+ar[i])
				temp[i]=temp[j]+ar[i];

		}
		cout<<temp[i]<<" ";
	}
	cout<<endl;
      int max=temp[0]; int maxI;
	for (int i = 0; i <n; ++i)
	{
		/* code */
		if(temp[i]>max){
			max=temp[i]; maxI=i;
		}

		cout<<temp[i]<<" ";
	}
  return max;
}

   int main(int argc, char const *argv[])
   {
   	 int t;
   	 cin>>t;
   	 while(t--){
   	 	int n;
   	 	cin>>n; int ar[n];
   	 	for (int i = 0; i <n; ++i)
   	 	{
   	 		/* code */
   	 		cin>>ar[i];
   	 	}

   	 	cout<<lis_maxSum(ar,n)<<endl;
   	 }
   	return 0;
   }