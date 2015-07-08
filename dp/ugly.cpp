  #include<bits/stdc++.h>
    using namespace std;

int isMin(int a,int b,int c){
	if(a <= b)
    {
      if(a <= c)
        return a;
      else
        return c;
    }
    if(b <= c)
      return b;
    else
      return c;
}
    int main(int argc, char const *argv[])
    {
    	 int t; cin>>t;
    	 while(t--){
    	 	int n; int a[1000],b[1000],c[1000];

    	 	 vector<int> ugly;
    	 	cin>>n;

    	 	for (int i = 0; i <1000; ++i)
    	 	{
    	 		/* code */
    	 		a[i]=2*(i+1);
    	 		b[i]=3*(i+1);
    	 		c[i]=5*(i+1);
    	 	}
                 int i=0,j=0,k=0,ug=0;
    	 	while(ug<1000){
    	 		 //if(ugly>=n)
    	 		 	//break;

    	 		if(isMin(a[i],b[j],c[k])==a[i])
    	 			ugly.push_back(a[i++]);
    	 		if(isMin(a[i],b[j],c[k])==b[j])
    	 			ugly.push_back(b[j++]);
    	 		if(isMin(a[i],b[j],c[k])==c[k])
    	 			ugly.push_back(c[k++]);

    	 		ug++;

    	 	}
    	 	cout<<ugly[n-1]<<endl;



    	 }
    	return 0;
    }