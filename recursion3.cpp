#include<bits/stdc++.h>
using namespace std;

//selection sort recursive

 void selectionSort(int ar[],int i,int j){
         

          if(i>=j)
          	return;

 		  int min_index=i;
 	
 		
 			min_index=(ar[j]<ar[min_index])?j:min_index;
 		
 		int temp=ar[min_index];
 		ar[min_index]=ar[i];
 		ar[i]=temp;

 
 	 selectionSort(ar,i+1,j);



 }

        void printArray(int ar[],int size){
     
            for(int i=0;i<size;i++){
              printf("%d ",ar[i]);
            }
        }



int main(int argc, char const *argv[])
{
	 int ar[]={-4,5,6,1,2,0};
     int size=sizeof(ar)/sizeof(ar[0]);
	 printArray(ar,size);
	 selectionSort(ar,0,size-1); cout<<endl;
	 printArray(ar,size);

	return 0;
}