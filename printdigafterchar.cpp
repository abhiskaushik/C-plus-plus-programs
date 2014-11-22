/*
Print all digits after the character 
in a mixed array of character array.

*/
#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}


void partition (int ar[],int start,int end) {
    int pivot=end;
    int pIndex=start;

    for (int i =start; i <end; ++i)
    {
    	/* code */
    	  if(ar[pivot]>=97 && ar[pivot]<=122){
    	  	 
    	  	 if(char(ar[i])>=97 && char(ar[i]<=122 && ar[pivot]>=97 && ar[pivot]<=122) )
    	  	 	   continue;
    	  	 	
    	  	 	else{
    	  	 		swap(&ar[i],&ar[pIndex]);
    	  	 	       pIndex++;
    	  	 	   }
    }
    else{
       
        
        if(char(ar[i])>=97 && char(ar[i]<=122 ) ) {
                    continue;
    	  	 	   }
    	  	 	
    	  	 	else{
    	  	 		 swap(&ar[i],&ar[pIndex]);
    	  	 	       pIndex++;
    	  	 	   }





    }
}


}

void print(int ar[],int size){
	for (int i = 0; i <size; ++i)
	{
		/* code */

		cout<<(char)ar[i]<<" ";
	}
}


int main(){
   
     int ar[]={'a','b',3,'x',4,6,'q'};
         int size=sizeof(ar)/sizeof(int);
     
        partition(ar,0,size-1);
    
    print(ar,size);
	return 0;
}