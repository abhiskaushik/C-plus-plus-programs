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
  	 char str[1000]="hey dude  sup ";
  	 //cin>>str;
  	  //int l=str.length();
  	  
  	 int i,x;
    for(i=x=1; str[i]; ++i){
      if(!isspace(str[i]) || (i>0 && !isspace(str[i-1])))
      str[x++] = str[i];
      str[x] = '\0';

    }

    cout<<str<<endl;

}
 
 void search_pivot(){
 	//search pivot in a rotated array..using binary search
 	int ar[]={6,7,8,4,5};
 	int l=0,r= (sizeof(ar))/(sizeof(ar[0])) - 1;
 	  while(l<r){
 	  	 int mid=l+(r-l)/2;
 	  	   
 	  	   if((ar[mid]<ar[mid+1] && ar[mid]<ar[mid-1])|| mid==r&ar[mid-1]>ar[mid] ||
 	  	   	mid==l&ar[mid+1]>ar[mid]){
 	  	   	 cout<<"pivot:"<<ar[mid]<<endl; break;
 	  	   }
 	  	   if(ar[mid]>ar[mid-1])
 	  	   	    l=mid;
 	  	   	else
 	  	   		r=mid+1;




 	  }
}

  void permu(string str,int k,int n){
  	 if(k==n)
  	 	cout<<str<<endl;
      
      else{
      	 for (int i = k; i <n ; ++i)
      	 {
      	 	 char temp1=str[k];
      	 	       str[k]=str[i];
      	 	       str[i]=temp1;
      	 	       permu(str,k+1,n);
      	 	 char temp2=str[k];
      	 	       str[k]=str[i];
      	 	       str[i]=temp2;      

      	 }
      }

  }

  void string_perm_entries(){
  	   string str;
  	   cin>>str;
  	   int l=str.length();
  	   permu(str,0,l);

 }

   void combi(string str,int k,int n){
   	  
   	  if(k==n){
   	  	str[k]=0;
   	  	cout<<str<<endl;
   	  	str[k]=1;
   	  	cout<<str<<endl;
   	    }
   	   str[k]=0;
   	   combi(str,k+1,n);
   	   str[k]=1;
   	   combi(str,k+1,n);
   }


   void string_comb_entries(){
   	 string str;
   	 cin>>str;
   	 int l=str.length();
   	 combi(str,0,l-1);
   }
  
  void sorted_sub_sequence(){
  	int ar[]={4,10,16,22,11,0};
  	int l=sizeof(ar)/sizeof(ar[0]);
   
  	int hash[1000]={0};
  	int max=ar[0];
  	 for (int i = 0; i <l; ++i)
  	 {
  	 	  if(ar[i]>=max){
  	 	  	 max=ar[i];
  	 	  	 hash[ar[i]]=ar[i];
  	 	    //success_ptr=ar[i];
  	 	    //ctr++;
  	 	  }
  	 	  else{
  	 	  	 //success_ptr=ar[i];
  	 	  	 max=ar[i];


  	 	 	}
  	 }
  	 int ctr=1;
  	 for (int i = 0; i <1000; ++i)
  	 {
  	 	 if(ctr>3)
  	 	 	break;

  	 	 if(hash[i]>0){
  	 	 	cout<<hash[i]<<" ";
  	 	    ctr++;
  	 	 }
  	 }

  }

  void repeats(){
  	int ar[]={3,5,1,-4,9,3,1,-4};
  	  for (int i = 0; i <8; ++i)
  	  {
  	  	  int x=ar[abs(ar[i])];
  	  	  if(x>=0){
  	  	  	x*=-1; ar[i]=x;
  	  	  }
  	  	  else
  	  	  	cout<<ar[i]<<" ";
  	  }
  }


};

int main(){

   Arrays ar;
 //  ar.pair_with_sum_k();
     //ar.pythogoras_triplet();
   //  cout<<ar.do_square(10);
	//ar.three_sum_k();
    //ar.power_of_5();
   //ar.extra_spaces();
      //ar.search_pivot();
   //ar.string_perm_entries();
	//ar.string_comb_entries();
    //ar.sorted_sub_sequence();
	ar.repeats();
	return 0;
}
