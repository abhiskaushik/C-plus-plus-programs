/*
codechef:
http://www.codechef.com/problems/TLG
*/
#include<bits/stdc++.h>
using namespace std;
class Codechef{

   private:


   public:
   	Codechef(){

   	}

  void find(int *win_player,int *lead){
  	 int n;
  	 cin>>n;
  	 int max_lead=-1,p1,p2;
  	 for (int i = 0; i <n; ++i)
  	 {
  	 	cin>>p1>>p2;
  	 	if((p1-p2)>0 && (p1-p2)>max_lead){
  	 		max_lead=(p1-p2); *win_player=1;
  	 	}
  	 	else if((p1-p2)<0 && abs(p1-p2)>max_lead){
  	 		max_lead=abs(p1-p2);
  	 	    *win_player=2;
  	 	}

  	 }
  	 *lead=max_lead;

   }








};

int main(){
	 Codechef cf;

	int win_player=0,lead=0;
	cf.find(&win_player,&lead);
	cout<<win_player<<" "<<lead<<endl;

return 0;
}