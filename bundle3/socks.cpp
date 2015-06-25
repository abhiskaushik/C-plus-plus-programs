#include<bits/stdc++.h>
  using namespace std;


  int main(int argc, char const *argv[])
  {   
  	    ifstream ifile; ifile.open("input.txt");
  	    ofstream ofile;
  	    ofile.open("output.txt");

     string line;  int lm=0;
     int hash[2];
      while(getline(ifile,line)){
               
                if(lm>0){
                 
                

               istringstream iss(line); //cout<<"hey"<<fline<<endl;
                
                int val; int rk=0;
               while(iss>>val)
               {
                        hash[rk++]=val;
                 
               }
               rk=0;
             	
	      ofile<<(hash[0]/hash[1] + 1)<<endl; 

	

  }

  lm++;

  }
  	return 0;
  }