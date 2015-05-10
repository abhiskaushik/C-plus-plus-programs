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

};

int main(){

   Matrices m;
   m.findX_entries();



	return 0;
}