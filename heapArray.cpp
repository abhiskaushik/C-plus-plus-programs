#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	 int t;
	 cin>>t;
	 while(t--){
	 	int n;
	 	cin>>n;
	 	int ar[n+1];
	 	ar[0]=0;
	 	for (int i = 1; i <=n; ++i)
	 	{
	 		/* code */
	 		cin>>ar[i];
	 	}
	 	cout<<"Given Array is:"<<endl;
	 	for (int i = 1; i <=n; ++i)
	 	{
	 		/* code */
	 		cout<<ar[i]<<" ";

	 	}
	 	cout<<endl;

	 	for (int i = n; i/2>0; --i)
	 	{
	 		/* code */  int child=i;
	 		            int parent=i/2;
	 		if(ar[child]>ar[parent]){
	 			int temp=ar[child];
	 			ar[child]=ar[parent];
	 			ar[parent]=temp;
	 		}
	 	}

	 	cout<<"Heap Array is:"<<endl;
	 	for (int i =1; i <=n; ++i)
	 	{
	 		/* code */
	 		cout<<ar[i]<<" ";
	 	}
	 }
	return 0;
}