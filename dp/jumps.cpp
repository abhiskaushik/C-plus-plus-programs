  #include<bits/stdc++.h>
    using namespace std;

    int main(int argc, char const *argv[])
    {
    	 int jumps[]={0,1,2,3,4,5,6,7,8,9,0};
    	 int size=sizeof(jumps)/sizeof(jumps[0]);

    	 int lookup[size];

    	 lookup[0]=0;

    	 for (int i = 1; i <size; ++i)
    	 {
    	 	/* code */
                lookup[i]=10000;
    	 	for (int j = 0; j <i; ++j)
    	 	{
    	 		/* code */
    	 		 if(i-j<=jumps[j]){
    	 		 	lookup[i]=min(lookup[i],lookup[j]+1);
    	 		 }

    	 	}
    	 }
    	 for (int i = 0; i < size; ++i)
    	 {
    	 	/* code */
    	 	cout<<lookup[i]<<" ";
    	 }
    	 cout<<endl;
     
        cout<<lookup[size-1]<<endl;



    	return 0;
    }