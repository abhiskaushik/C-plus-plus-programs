#include<bits/stdc++.h>
#include<fstream>
#include<sstream>
using namespace std;

int main(int argc, char const *argv[])
{
	 int t=1000;

	 ifstream ifile;
	  ifile.open("inputheap.txt");
      ofstream ofile;
      ofile.open("heapoutput.txt");
	   string line; 
      
        int ct=0;
         
        
        
          int sizeA; int ar[10000];
             ar[0]=0;
         while(getline(ifile,line)){
             
         	
               

                if(ct%2==0){
              	sizeA=line[0]-'0'; 
              
	 	        
	 	        
              }
              
               
              if(ct%2!=0){
              
          
             int val;
	 	
           int i=1;  istringstream iss(line);
	 	 while(iss>>val)
	 	{
	 
	 		
	 		ar[i++]=val;
	 	}
        
	 	

	 	cout<<"Given Array is:"<<endl;
	 	for (int i = 1; i <=sizeA; ++i)
	 	{
	 		
	 	  cout<<ar[i]<<" ";
	 		

	 	}
	 	cout<<endl; 
        
	 	for (int i = sizeA; i/2>0; --i)
	 	{
	 		 int child=i;
	 		            int parent=i/2;
	 		if(ar[child]>ar[parent]){
	 			int temp=ar[child];
	 			ar[child]=ar[parent];
	 			ar[parent]=temp;
	 		}
	 	}
         
         
	 	cout<<"Heap Array is:"<<endl;
	 	for (int i =1; i <=sizeA; ++i)
	 	{
	 		
	 		cout<<ar[i]<<" ";
	 		ofile<<ar[i]<<" ";
	 	}
	 	ofile<<endl;
	
	}
    ct++;
}
  ifile.close();
  ofile.close();
	// }


	return 0;
}