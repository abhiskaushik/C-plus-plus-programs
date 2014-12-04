/*
Power of a matrix using my power function..
mat=1 1
    1 0
*/
#include<iostream>
using namespace std;
/*
void mul(int F[2][2],int M[2][2]){
	F[0][0]=F[0][0]*M[0][0]+F[0][1]*M[1][0];
	F[0][1]=F[0][0]*M[0][1]+F[0][1]*M[1][1];
	F[1][0]=F[1][0]*M[0][0]+F[1][1]*M[1][0];
	F[1][1]=F[1][0]*M[0][1]+F[1][1]*M[1][1];
}
*/
int power(int F[2][2],int n){
	 
	  int M[2][2]={{1,1},{1,0}};

	  for (int i = 1; i <n; ++i)
	  {
	  	/* code */
	  	//mul(F,M);
    F[0][0]=F[0][0]*M[0][0]+F[0][1]*M[1][0];
	F[0][1]=F[0][0]*M[0][1]+F[0][1]*M[1][1];
	F[1][0]=F[1][0]*M[0][0]+F[1][1]*M[1][0];
	F[1][1]=F[1][0]*M[0][1]+F[1][1]*M[1][1];

	  }

  return 0;

}
int main(){
     int F[2][2]={{1,1},{1,0}};

     power(F,3);
   
    cout<<F[0][0]<<F[0][1]<<endl;
    cout<<F[1][0]<<F[1][1]<<endl;


return 0;
}