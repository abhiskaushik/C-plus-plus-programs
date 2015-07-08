  #include<bits/stdc++.h>
   using namespace std;

// complexity is o(n^2);

   int main(int argc, char const *argv[])
   {
   	 int ar[]={3,4,-1,0,6,2,3};
   	 int size=sizeof(ar)/sizeof(ar[0]);
   	 
   	 int temp[size];
   	 for (int i = 0; i <size; ++i)
   	 {
   	 	/* code */ temp[i]=1;
   	 }

       vector<int> v; v.push_back(ar[0]);

     for (int i =1; i <size; ++i)
     {
     	/* code */
     	for (int j = 0; j<i; ++j)
     	{
     		/* code */
     		if(ar[j]<ar[i] && temp[i]<1+temp[j]){
     			temp[i]=1+temp[j]; //cout<<ar[j]<<ar[i];
     		}

     		 


     	}
     	v.push_back(ar[i]);
     }
       int max=0;
     for (int i = 0; i <size; ++i)
     {
     	/* code */ 
     	if(temp[i]>max)
     		max=temp[i];

     	//cout<<temp[i]<<" ";
     	cout<<v[i]<<" ";
     }
     cout<<"lis:"<<max<<endl;

   	return 0;
   }