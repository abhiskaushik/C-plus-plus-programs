#include<bits/stdc++.h>
using namespace std;

class Arrays{

 private:


 public:
 	Arrays(){}
/* helper function */
 	//sqaure of a numbers in array in O(logn)

 	int do_square(int n){
 		 if(n==0)
 		 	return 0;
 		  
 		  if(n<0)n=-n;

           int x=n>>1;

 		   if(n&1)
 		   	return (do_square(x)<<2) + x<<2 + 1;
 		   else
 		   	return  (do_square(x)<<2);


 	}




 	void pair_with_sum_k(){
 		int ar[]={-4,6,7,1,6},l,k;
 		int hash[100]={0};

//make every no +ve.
 		int min=0;
 		for (int i = 0; i <5; ++i)
 		{    
 			 if(ar[i]<min)
 			     min=ar[i];
 		}

 		for (int i = 0; i < 5; ++i)
 		{
 			 if(ar[i]<0)
 			 	ar[i]+=-1*min;
 		}

 		for (int i = 0; i < 5; ++i)
 		{
 			printf("%d ",ar[i] );
 		}

 		scanf("%d",&k);

 		for (int i = 0; i<5; ++i)
 		{   
 			  if(hash[k-ar[i]]==1){
 		        printf("%d %d\n",ar[i]-(-1*min),k-ar[i]-(-1*min));

 		       }
 		    hash[ar[i]]=1;   

 		 }

 	}


 	void pythogoras_triplet(){
 		int ar[]={2,3,6,-1,4};
 		 int ar_length=sizeof(ar)/sizeof(ar[0]);
 		 for (int i = 0; i <5; ++i)
 		 {
 		    ar[i]=ar[i]*ar[i];
 		 }
 		 sort(ar,ar+ar_length);

 		 for (int i = 0; i <5; ++i)
 		 {
 		 	printf("%d\n",ar[i]);
 		 }
 		 
 		 for (int i =ar_length-1; i>=2; --i)
 		 {  
 		 	int l=0,r=ar_length-1;
 		 
 		    while(l<r){

 		 	if(ar[l]+ar[r]==ar[i])
 		 		printf("Yes");

 		 	 (ar[l]+ar[r]<ar[i])?(l++):(r--);

 		    }
 	  }

}

  int three_sum_k(){
  	int ar[]={3,4,-1,4,7};
  	int ar_length=sizeof(ar)/sizeof(ar[0]);
  	sort(ar,ar+ar_length);
  	int k;
  	scanf("%d",&k);

  	 for (int i =1; i <ar_length-2 ; ++i)
  	 {
  	 	 int l=i+1,r=ar_length-1;
  	 	 while(l<r){
  	 	 	
  	 	 	if(ar[l]+ar[i]+ar[r]==k){
  	 	 		cout<<ar[l]<<" "<<ar[i]<<" "<<ar[r];
  	 	 		return 1;
  	 	 	}
  	 	 	
  	 	 	(ar[l]+ar[i]+ar[r]<k)?(l++):(r--);

  	 	 }
  	 }

    cout<<"no"<<endl;



  }

  void power_of_5(){
  	int n,flag=-1;;
  	scanf("%d",&n);
  	 while(n>1){
  	 	 
  	 	 if(n%5!=0){
  	 	 	flag=0;
  	 	 	break;
  	 	 }

  	 	if(n%5==0){
  	 		n/=5; flag=1;
  	 	}

  	 }
  	 if(flag==1)
  	 	cout<<"yes"<<endl;
  	 else 
  	 	cout<<"no"<<endl;
}

  void extra_spaces(){
  	string str;
  	 cin>>str;
  	  int l=str.length();
  	  
  	 int i,x;
    for(i=x=1; str[i]; ++i){
      if(!isspace(str[i]) || (i>0 && !isspace(str[i-1])))
      str[x++] = str[i];
      str[x] = '\0';

    }

    cout<<str<<endl;

}

  


};

int main(){

   Arrays ar;
 //  ar.pair_with_sum_k();
     //ar.pythogoras_triplet();
   //  cout<<ar.do_square(10);
	//ar.three_sum_k();
    //ar.power_of_5();
   ar.extra_spaces();

	return 0;
}
