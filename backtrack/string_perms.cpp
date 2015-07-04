  #include<bits/stdc++.h>
   using namespace std;

       void swap(char *x, char *y){
        char temp=*x;
         *x=*y;
         *y=temp;
       }

char was[256];



 void permute(char *a,int l,int r){
    
     if(l==r)
     	cout<<a<<endl;

     else{
     	for (int i =l; i <=r ; ++i)
     	{
     		/* code */
     		if(!was[*(a+i)]){
     		swap((a+l),(a+i));
     		permute(a,l+1,r);
     		swap((a+l),(a+i));
            was[*(a+i)]=1;
     	   }
     	
     	}
     }



 }


   int main(int argc, char const *argv[])
   {
   	  int t;
   	  cin>>t;
   	  while(t--){
   	  	for (int i = 0; i <256; ++i)
{
	/* code */
	was[i]=0;
}

   	  	string s;
   	  	cin>>s;
   	  	int l=s.length();
   	  	permute(&s[0],0,l-1);
   	  }
   	return 0;
   }