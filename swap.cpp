#include<bits/stdc++.h>
  using namespace std;

  void swap1(int& x,int& y){
     int temp=x;
     x=y;
     y=temp;
  }

  void swap2(int *x,int *y){
  	 int temp=*x;
  	 *x=*y;
  	 *y=temp;

  }


  int main(){
  int x,y;
  while(cin>>x>>y){
   int& refX=x,refY=y;
   cout<<"using references"<<endl;
  swap1(x,y);
  cout<<x<<y<<endl;
  cout<<"using pointers";
  swap2(&x,&y);
  cout<<x<<y<<endl;


}

  	return 0;
  }