/*
UNion and intersection of 
two sorted arrays


*/
#include<iostream>
using namespace std;

int getUnion(int ar1[],int ar2[],int size1,int size2){
   int i=0,j=0;
    while(i<size1 && j<size2){
    	 if(ar1[i]<ar2[j])
    	 	 cout<<ar1[i++]<<" ";
    	 	else if(ar1[i]>ar2[j])
    	 		cout<<ar2[j++]<<" ";
    	 	else{
    	 		cout<<ar2[j++]<<" ";
    	 	  i++;}
    }


     	while(i<size1)
     		cout<<ar1[i++]<<" ";
     	while(j<size2)
     		cout<<ar2[j++]<<" ";
    
 cout<<endl;
return 0;

}

int getInter(int ar1[],int ar2[],int size1,int size2){
     int i=0,j=0;
   while(i<size1 && j<size2){
   	   if(ar1[i]<ar2[j])
   	   	   i++;
   	   	else if(ar1[i]>ar2[j])
   	   		j++;
   	   	else{
   	   		cout<<ar2[j++];
   	   	 i++;
   	   	}
   }
  cout<<endl;
 return 0;
}



int main(){

  int ar1[]={1,2,3,4};
  int ar2[]={3,8,9};
   int size1=sizeof(ar1)/sizeof(ar1[0]);
   int size2=sizeof(ar2)/sizeof(ar2[0]);   
     getInter(ar1,ar2,size1,size2);
      getUnion(ar1,ar2,size1,size2);    
	return 0;
}