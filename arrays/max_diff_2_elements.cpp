  #include<bits/stdc++.h>
  using namespace std;


  int main(int argc, char const *argv[])
  {
  	 int ar[]={12,32,90,10,110};
  	 int size=sizeof(ar)/sizeof(ar[0]);


       int min_so_far=ar[0];
       int max=ar[1]-ar[0];

  	 for (int i =1; i < size; ++i)
  	 {
  	 	/* code */

  	 	if(max<ar[i]-min_so_far)
  	 		max=ar[i]-min_so_far;

  	 	 if(ar[i]<min_so_far)
  	 	 	min_so_far=ar[i];
  	 }

  	 cout<<max<<endl;
  	return 0;
  }