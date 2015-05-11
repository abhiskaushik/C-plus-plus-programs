#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Matrices{

private:

public:
	

	void findX(ll mat[][4],ll n,ll x){
		 ll i=0,j=n-1;
		 bool flag=false;
		  while(i<4 && j>=0){
		  	if(mat[i][j]==x){
		  		//printf("cool");
		  		flag=true;
		  		break;

		  }
		  if(x>mat[i][j])
		  	 i+=1;
		  	else
		  		j-=1;
		  	}
        printf("%d\n",flag);



	}

   void findX_entries(){
   	  ll mat[4][4]={ {10,20,30,40},
   	                  {15,25,35,45},
   	                  {27,29,37,48},
   	                  {32,33,39,50}
   	                 };
   	                 ll x;
   	                   scanf("%lli",&x);

  
         findX(mat,4,x);



   }

   void findSubMat(ll m[][5]){
   	  ll s[6][5];
   	  for (int i = 0,j=0; i <6,j<5; ++i,j++)
   	  {
   	  	 s[i][0]=m[i][0];
   	  	 s[0][j]=m[0][j];
   	  }
   	    for (int 1 = 1; i <6; ++i)
   	    {
   	        for (int j = 1; i <5; ++j)
   	        {   
   	        	if(m[i][j]==1)
    	        s[i][j]=min(s[i][j-1],s[i-1][j],s[i-1][j-1])+1;
    	        else
    	        	s[i][j]=0;
   	        } 	 
   	    }


   }
    void findSubMatEntries(){
    	ll m[][]={{0,1,1,0,1},
                  {1,1,0,1,0},
                  {0,1,1,1,0},
                  {1,1,1,1,0},
                  {1,1,1,1,1},
                  {0,0,0,0,0}
                 };

           findSubMat(m);      

};

int main(){

   Matrices m;
   m.findX_entries();



	return 0;
}